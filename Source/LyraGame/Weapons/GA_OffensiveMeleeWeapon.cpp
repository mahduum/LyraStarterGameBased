// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/GA_OffensiveMeleeWeapon.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "LyraLogChannels.h"
#include "AIController.h"
#include "Messages/LyraVerbMessage.h"
#include "NativeGameplayTags.h"
#include "AbilitySystemComponent.h"
#include "LyraWeaponStateComponent.h"
#include "AbilitySystem/LyraGameplayAbilityTargetData_SingleTargetHit.h"
#include "Physics/LyraCollisionChannels.h"


//TODO
// namespace LyraConsoleVariables
// {
// 	static float DrawBulletTracesDuration = 0.0f;
// 	static FAutoConsoleVariableRef CVarDrawBulletTraceDuraton(
// 		TEXT("lyra.Weapon.DrawBulletTraceDuration"),
// 		DrawBulletTracesDuration,
// 		TEXT("Should we do debug drawing for bullet traces (if above zero, sets how long (in seconds))"),
// 		ECVF_Default);
//
// 	static float DrawBulletHitDuration = 0.0f;
// 	static FAutoConsoleVariableRef CVarDrawBulletHits(
// 		TEXT("lyra.Weapon.DrawBulletHitDuration"),
// 		DrawBulletHitDuration,
// 		TEXT("Should we do debug drawing for bullet impacts (if above zero, sets how long (in seconds))"),
// 		ECVF_Default);
//
// 	static float DrawBulletHitRadius = 3.0f;
// 	static FAutoConsoleVariableRef CVarDrawBulletHitRadius(
// 		TEXT("lyra.Weapon.DrawBulletHitRadius"),
// 		DrawBulletHitRadius,
// 		TEXT("When bullet hit debug drawing is enabled (see DrawBulletHitDuration), how big should the hit radius be? (in uu)"),
// 		ECVF_Default);
//}

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_WeaponSlashBlocked, "Ability.Weapon.NoSlashing");

UGA_OffensiveMeleeWeapon::UGA_OffensiveMeleeWeapon(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SourceBlockedTags.AddTag(TAG_WeaponSlashBlocked);
}

UOffensiveMeleeWeaponInstance* UGA_OffensiveMeleeWeapon::GetWeaponInstance() const
{
	return Cast<UOffensiveMeleeWeaponInstance>(GetAssociatedEquipment());
}

bool UGA_OffensiveMeleeWeapon::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	bool bResult = Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);

	if (bResult)
	{
		if (GetWeaponInstance() == nullptr)
		{
			UE_LOG(LogLyraAbilitySystem, Error, TEXT("Weapon ability %s cannot be activated because there is no associated ranged weapon (equipment instance=%s but needs to be derived from %s)"),
				*GetPathName(),
				*GetPathNameSafe(GetAssociatedEquipment()),
				*ULyraRangedWeaponInstance::StaticClass()->GetName());
			bResult = false;
		}
	}

	return bResult;
}


void UGA_OffensiveMeleeWeapon::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	// Bind target data callback
	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	OnTargetDataReadyCallbackDelegateHandle = MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).AddUObject(this, &ThisClass::OnTargetDataReadyCallback);

	// Update the last firing time
	UOffensiveMeleeWeaponInstance* WeaponData = GetWeaponInstance();
	check(WeaponData);
	WeaponData->UpdateFiringTime();

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UGA_OffensiveMeleeWeapon::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (IsEndAbilityValid(Handle, ActorInfo))
	{
		if (ScopeLockCount > 0)
		{
			WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &ThisClass::EndAbility, Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
			return;
		}

		UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
		check(MyAbilityComponent);

		// When ability ends, consume target data and remove delegate
		MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).Remove(OnTargetDataReadyCallbackDelegateHandle);
		MyAbilityComponent->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());

		Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	}
}

//TODO redo for melee with dash and teleport

void UGA_OffensiveMeleeWeapon::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData, FGameplayTag ApplicationTag)
{
	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	if (const FGameplayAbilitySpec* AbilitySpec = MyAbilityComponent->FindAbilitySpecFromHandle(CurrentSpecHandle))
	{
		FScopedPredictionWindow	ScopedPrediction(MyAbilityComponent);

		// Take ownership of the target data to make sure no callbacks into game code invalidate it out from under us
		FGameplayAbilityTargetDataHandle LocalTargetDataHandle(MoveTemp(const_cast<FGameplayAbilityTargetDataHandle&>(InData)));

		const bool bShouldNotifyServer = CurrentActorInfo->IsLocallyControlled() && !CurrentActorInfo->IsNetAuthority();
		if (bShouldNotifyServer)
		{
			MyAbilityComponent->CallServerSetReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey(), LocalTargetDataHandle, ApplicationTag, MyAbilityComponent->ScopedPredictionKey);
		}

		const bool bIsTargetDataValid = true;

		bool bProjectileWeapon = false;

#if WITH_SERVER_CODE
		if (!bProjectileWeapon)
		{
			if (AController* Controller = GetControllerFromActorInfo())
			{
				if (Controller->GetLocalRole() == ROLE_Authority)
				{
					// Confirm hit markers
					if (ULyraWeaponStateComponent* WeaponStateComponent = Controller->FindComponentByClass<ULyraWeaponStateComponent>())
					{
						TArray<uint8> HitReplaces;
						for (uint8 i = 0; (i < LocalTargetDataHandle.Num()) && (i < 255); ++i)
						{
							if (FGameplayAbilityTargetData_SingleTargetHit* SingleTargetHit = static_cast<FGameplayAbilityTargetData_SingleTargetHit*>(LocalTargetDataHandle.Get(i)))
							{
								if (SingleTargetHit->bHitReplaced)
								{
									HitReplaces.Add(i);
								}
							}
						}

						WeaponStateComponent->ClientConfirmTargetData(LocalTargetDataHandle.UniqueId, bIsTargetDataValid, HitReplaces);
					}

				}
			}
		}
#endif //WITH_SERVER_CODE


		// See if we still have ammo
		if (bIsTargetDataValid && CommitAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo))
		{
			// We fired the weapon, add spread
			UOffensiveMeleeWeaponInstance* WeaponData = GetWeaponInstance();
			check(WeaponData);
			//WeaponData->AddSpread();

			// Let the blueprint do stuff like apply effects to the targets
			OnOffensiveMeleeWeaponTargetDataReady(LocalTargetDataHandle);
		}
		else
		{
			UE_LOG(LogLyraAbilitySystem, Warning, TEXT("Weapon ability %s failed to commit (bIsTargetDataValid=%d)"), *GetPathName(), bIsTargetDataValid ? 1 : 0);
			K2_EndAbility();
		}
	}

	// We've processed the data
	MyAbilityComponent->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());
}

//TODO redo for melee with dash and teleport
void UGA_OffensiveMeleeWeapon::StartMeleeWeaponTargeting()
{
	check(CurrentActorInfo);//actor who owns this ability

	//Get the physical representation of the owner
	AActor* AvatarActor = CurrentActorInfo->AvatarActor.Get();
	check(AvatarActor);

	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	AController* Controller = GetControllerFromActorInfo();
	check(Controller);
	ULyraWeaponStateComponent* WeaponStateComponent = Controller->FindComponentByClass<ULyraWeaponStateComponent>();//weapon state with recent hit markers if present

	FScopedPredictionWindow ScopedPrediction(MyAbilityComponent, CurrentActivationInfo.GetActivationPredictionKey());

	TArray<FHitResult> FoundHits;
	PerformLocalTargeting(/*out*/ FoundHits);

	// Fill out the target data from the hit results
	FGameplayAbilityTargetDataHandle TargetData;
	TargetData.UniqueId = WeaponStateComponent ? WeaponStateComponent->GetUnconfirmedServerSideHitMarkerCount() : 0;

	if (FoundHits.Num() > 0)
	{
		const int32 CartridgeID = FMath::Rand();

		for (const FHitResult& FoundHit : FoundHits)
		{
			FLyraGameplayAbilityTargetData_SingleTargetHit* NewTargetData = new FLyraGameplayAbilityTargetData_SingleTargetHit();
			NewTargetData->HitResult = FoundHit;
			NewTargetData->CartridgeID = CartridgeID;

			TargetData.Add(NewTargetData);
		}
	}

	// Send hit marker information
	const bool bProjectileWeapon = false;
	if (!bProjectileWeapon && (WeaponStateComponent != nullptr))
	{
		WeaponStateComponent->AddUnconfirmedServerSideHitMarkers(TargetData, FoundHits);
	}

	// Process the target data immediately
	OnTargetDataReadyCallback(TargetData, FGameplayTag());
}


void UGA_OffensiveMeleeWeapon::PerformLocalTargeting(OUT TArray<FHitResult>& OutHits)
{
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());

	UOffensiveMeleeWeaponInstance* WeaponData = GetWeaponInstance();
	if (AvatarPawn && AvatarPawn->IsLocallyControlled() && WeaponData)
	{
		FOffensiveMeleeWeaponAttackInput InputData;
		InputData.WeaponData = WeaponData;
		InputData.bCanPlaySlashFX = (AvatarPawn->GetNetMode() != NM_DedicatedServer);
		//
		// //@TODO: Should do more complicated logic here when the player is close to a wall, etc...
		// const FTransform TargetTransform = GetTargetingTransform(AvatarPawn, ELyraAbilityTargetingSource::CameraTowardsFocus);//where from are we targeting
		// InputData.AimDir = TargetTransform.GetUnitAxis(EAxis::X);
		// InputData.StartTrace = TargetTransform.GetTranslation();
		//
		// InputData.EndAim = InputData.StartTrace + InputData.AimDir * WeaponData->GetMaxDamageRange();
		InputData.StartTrace = AvatarPawn->GetActorTransform().GetLocation();//todo try to get transform of a skeleton socket
		InputData.SphereRadius = CurrentActorInfo->OwnerActor->GetSimpleCollisionRadius();
#if ENABLE_DRAW_DEBUG
// 		if (LyraConsoleVariables::DrawBulletTracesDuration > 0.0f)
// 		{
// 			static float DebugThickness = 2.0f;
// 			DrawDebugLine(GetWorld(), InputData.StartTrace, InputData.StartTrace + (InputData.AimDir * 100.0f), FColor::Yellow, false, LyraConsoleVariables::DrawBulletTracesDuration, 0, DebugThickness);
// 		}
#endif
		TraceSlashArcOrThrustPoint(InputData, /*out*/ OutHits);//out hits could be given from actual movement?
	}
}

//TODO change this to be tracing slashes before they are dealed or when they are being dealed
void UGA_OffensiveMeleeWeapon::TraceSlashArcOrThrustPoint(const FOffensiveMeleeWeaponAttackInput& InputData, OUT TArray<FHitResult>& OutHits)
{
	UOffensiveMeleeWeaponInstance* WeaponData = InputData.WeaponData;
	check(WeaponData);
	//arc will be more less the sphere of radius arm length plus blade length, and then we "only" need to cut away hit points that are outside a specific angle
	//or get the animation and sample the positions from all the frames of the animation
	//use sphere for now for simplicity

	//const float BaseSpreadAngle = WeaponData->
	//const float SpreadAngleMultiplier = WeaponData->();
	//const float ActualSpreadAngle = BaseSpreadAngle * SpreadAngleMultiplier;

	//const float HalfSpreadAngleInRadians = FMath::DegreesToRadians(ActualSpreadAngle * 0.5f);

	//todo more complex logic for circle slice later
	const FVector SlashArc;//todo calculate slash arc = VRandConeNormalDistribution(InputData.AimDir, HalfSpreadAngleInRadians, WeaponData->GetSpreadExponent());

	const FVector EndTrace = InputData.StartTrace + SlashArc;//todo calculate slash arc * WeaponData->GetMaxDamageRange());
	FVector HitLocation = EndTrace;

	TArray<FHitResult> AllImpacts;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(GetOwningActorFromActorInfo());
	//bool bHit = UKismetSystemLibrary::SphereTraceMulti(GetOwningActorFromActorInfo(), InputData.StartTrace, InputData.StartTrace, InputData.SphereRadius, ETraceTypeQuery::TraceTypeQuery1, true, ActorsToIgnore, EDrawDebugTrace::Type::ForOneFrame,  AllImpacts, true);//DoSingleBulletTrace(InputData.StartTrace, EndTrace, WeaponData->GetBulletTraceSweepRadius(), /*bIsSimulated=*/ false, /*out*/ AllImpacts);
	if (auto Impact = GetWorld()->SweepMultiByChannel(AllImpacts, InputData.StartTrace, InputData.StartTrace, FQuat::Identity, Lyra_TraceChannel_Weapon, FCollisionShape::MakeSphere(InputData.SphereRadius), FCollisionQueryParams::DefaultQueryParam, FCollisionResponseParams::DefaultResponseParam))
	{
		UE_LOG(LogLyraAbilitySystem, Display, TEXT("Some object were hit by sphere multi sweep"));
#if ENABLE_DRAW_DEBUG

		DrawDebugPoint(GetWorld(), AllImpacts.Last().Location, 5., FColor::Red, false, 3.);

#endif

		if (AllImpacts.Num() > 0)
		{
			OutHits.Append(AllImpacts);
		}

		HitLocation = AllImpacts[0].ImpactPoint;

	}

	// Make sure there's always an entry in OutHits so the direction can be used for tracers, etc...
	if (OutHits.Num() == 0)
	{
		// if (!Impact.bBlockingHit)
		// {
		// 	// Locate the fake 'impact' at the end of the trace
		// 	Impact.Location = EndTrace;
		// 	Impact.ImpactPoint = EndTrace;
		// }
		//
		// OutHits.Add(Impact);
	}
}

//todo hit results, tracings and similar calculations are to be done below: