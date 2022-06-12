// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/LyraOffensiveMeleeWeaponInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Physics/PhysicalMaterialWithTags.h"

ULyraOffensiveMeleeWeaponInstance::ULyraOffensiveMeleeWeaponInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ConsecutiveHitCountToDamagePerHitMultiplierCurve.EditorCurveData.AddKey(0.0f, 1.0f);
}

void ULyraOffensiveMeleeWeaponInstance::PostLoad()
{
	Super::PostLoad();

#if WITH_EDITOR
	UpdateDebugVisualization();
#endif
}

#if WITH_EDITOR
void ULyraOffensiveMeleeWeaponInstance::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	UpdateDebugVisualization();
}

void ULyraOffensiveMeleeWeaponInstance::UpdateDebugVisualization()
{
	// ComputeHeatRange(/*out*/ Debug_MinHeat, /*out*/ Debug_MaxHeat);
	// ComputeSpreadRange(/*out*/ Debug_MinSpreadAngle, /*out*/ Debug_MaxSpreadAngle);
	// Debug_CurrentHeat = CurrentHeat;
	// Debug_CurrentSpreadAngle = CurrentSpreadAngle;
	// Debug_CurrentSpreadAngleMultiplier = CurrentSpreadAngleMultiplier;
}
#endif

void ULyraOffensiveMeleeWeaponInstance::Tick(float DeltaSeconds)
{
	UpdateMultipliers(DeltaSeconds);
}

void ULyraOffensiveMeleeWeaponInstance::OnEquipped()
{
	Super::OnEquipped();
	//set or reset spread angles and damages per attack types (there should be a data asset for all of it?
}

void ULyraOffensiveMeleeWeaponInstance::OnUnequipped()
{
	Super::OnUnequipped();
}

float ULyraOffensiveMeleeWeaponInstance::GetDistanceAttenuation(float Distance, const FGameplayTagContainer* SourceTags,
                                                       const FGameplayTagContainer* TargetTags) const
{
	const FRichCurve* Curve = DistanceDamageFalloff.GetRichCurveConst();
	return Curve->HasAnyData() ? Curve->Eval(Distance) : 1.0f;
}

float ULyraOffensiveMeleeWeaponInstance::GetPhysicalMaterialAttenuation(const UPhysicalMaterial* PhysicalMaterial,
	const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags) const
{
	float CombinedMultiplier = 1.0f;
	if (const UPhysicalMaterialWithTags* PhysMatWithTags = Cast<const UPhysicalMaterialWithTags>(PhysicalMaterial))
	{
		for (const FGameplayTag MaterialTag : PhysMatWithTags->Tags)
		{
			if (const float* pTagMultiplier = MaterialDamageMultiplier.Find(MaterialTag))
			{
				CombinedMultiplier *= *pTagMultiplier;
			}
		}
	}

	return CombinedMultiplier;//used in LyraDamageExecution
}

bool ULyraOffensiveMeleeWeaponInstance::UpdateSpread(float DeltaSeconds)
{
	return false;
}

bool ULyraOffensiveMeleeWeaponInstance::UpdateMultipliers(float DeltaSeconds)
{
	const float MultiplierNearlyEqualThreshold = 0.05f;

	APawn* Pawn = GetPawn();
	check(Pawn != nullptr);
	UCharacterMovementComponent* CharMovementComp = Cast<UCharacterMovementComponent>(Pawn->GetMovementComponent());
	
	return false;
}
