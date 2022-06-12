// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LyraGameplayAbility_RangedWeapon.h"
#include "OffensiveMeleeWeaponInstance.h"
#include "Equipment/LyraGameplayAbility_FromEquipment.h"
#include "GA_OffensiveMeleeWeapon.generated.h"

/**
 * 
 */
UCLASS()
class LYRAGAME_API UGA_OffensiveMeleeWeapon : public ULyraGameplayAbility_FromEquipment//add tags for it, and make instance of it like GA_Weapon_FireShotgun in BP,
		//first assign it to a specific weapon ability like sword ability, then this ability is assigned to a WID weapon item definition as the ability of this item
		//in other direction it goes to general ability and specific tags and animations for this given item ability (like long sword)
{
	GENERATED_BODY()

protected:
	// Traces all of the bullets in a single cartridge
	struct FOffensiveMeleeWeaponAttackInput
	{
		//todo here put data that will allow to trace slash arc - weapon length, attack type (maybe auto chosen or selected by user - auto chosen will set the best available cut technique
		//depending on the position of the attacker in relation to the opponent)
		// Start of the trace
		FVector StartTrace;

		// End of the trace if aim were perfect
		FVector EndAim;

		// The direction of the trace if aim were perfect
		FVector AimDir;

		// The weapon instance / source of weapon data
		ULyraRangedWeaponInstance* WeaponData = nullptr;

		// Can we play bullet FX for hits during this trace
		bool bCanPlayBulletFX = false;

		FOffensiveMeleeWeaponAttackInput()
			: StartTrace(ForceInitToZero)
			  , EndAim(ForceInitToZero)
			  , AimDir(ForceInitToZero)
		{
		}
	};

	void TraceSlashArcOrThrustPoint(const FOffensiveMeleeWeaponAttackInput& InputData, OUT TArray<FHitResult>& OutHits);

public:
	UGA_OffensiveMeleeWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category="Lyra|Ability")
	UOffensiveMeleeWeaponInstance* GetWeaponInstance() const;

	//~UGameplayAbility interface
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~End of UGameplayAbility interface

	//virtual void AddAdditionalTraceIgnoreActors(FCollisionQueryParams& TraceParams) const;
	
	// Determine the trace channel to use for the weapon trace(s)
	//virtual ECollisionChannel DetermineTraceChannel(FCollisionQueryParams& TraceParams, bool bIsSimulated) const;
	
	void PerformLocalTargeting(OUT TArray<FHitResult>& OutHits);
	
	//FVector GetWeaponTargetingSourceLocation() const;
	//FTransform GetTargetingTransform(APawn* SourcePawn, ELyraAbilityTargetingSource Source) const;

	void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData, FGameplayTag ApplicationTag);

	UFUNCTION(BlueprintCallable)
	void StartRangedWeaponTargeting();

	// Called when target data is ready
	UFUNCTION(BlueprintImplementableEvent)
	void OnRangedWeaponTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetData);

private:
	FDelegateHandle OnTargetDataReadyCallbackDelegateHandle;
};
