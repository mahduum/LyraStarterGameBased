// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/LyraAbilitySourceInterface.h"
#include "Weapons/LyraWeaponInstance.h"
#include "LyraOffensiveMeleeWeaponInstance.generated.h"

UENUM(BlueprintType)
enum class EMeleeAttackType : uint8
{
	//each type has mapped accuracy angle to it and damage extent (the smaller the angle, the bigger the damage)
	Thrust,
	VerticalSlash,
	DiagonalSlash,
	HorizontalSlash,
};
/**
 * 
 */
UCLASS()
class LYRAGAME_API ULyraOffensiveMeleeWeaponInstance : public ULyraWeaponInstance, public ILyraAbilitySourceInterface//todo create different defensive weapon, some may accumulate energy, some may deflect shots
{
public:
	ULyraOffensiveMeleeWeaponInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PostLoad() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	void UpdateDebugVisualization();
#endif

	void Tick(float DeltaSeconds);

	//~ULyraEquipmentInstance interface
	virtual void OnEquipped();
	virtual void OnUnequipped();
	//~End of ULyraEquipmentInstance interface
	
	virtual float GetDistanceAttenuation(float Distance, const FGameplayTagContainer* SourceTags,
		const FGameplayTagContainer* TargetTags) const override;
	virtual float GetPhysicalMaterialAttenuation(const UPhysicalMaterial* PhysicalMaterial,
		const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags) const override;

protected:
	UPROPERTY(EditAnywhere, Category="Attack Type|Damage")
	TMap<EMeleeAttackType, float> AttackTypeToDamage;//todo should there be a data asset for this or is it configurable for each instance of this weapon type?

	UPROPERTY(EditAnywhere, Category="Attack Type|Spread Angle")
	TMap<EMeleeAttackType, float> AttackTypeToSpreadAngle;
	
	// A curve that maps the consecutive hit count (maybe without taking damage) to the multiplier of the next successful hit damage.
	// May enter frenzy and rage mode (make slider for it and shader effects, like fire on blade etc., or the victim actually catching on fire)
	UPROPERTY(EditAnywhere, Category="Spread|Fire Params")
	FRuntimeFloatCurve ConsecutiveHitCountToDamagePerHitMultiplierCurve;
	
	// Spread multiplier while jumping/falling, smoothly blended to based on TransitionRate_JumpingOrFalling
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params", meta=(ForceUnits=x))
	float SpreadAngleMultiplier_JumpingOrFalling = 1.0f;

	// Rate at which we transition to/from the jumping/falling accuracy (higher values are faster, though zero is instant; @see FInterpTo)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params")
	float TransitionRate_JumpingOrFalling = 5.0f;

	// A curve that maps the distance (in cm) to a multiplier on the base damage from the associated gameplay effect
	// If there is no data in this curve, then the weapon is assumed to have no falloff with distance
	UPROPERTY(EditAnywhere, Category = "Weapon Config")
	FRuntimeFloatCurve DistanceDamageFalloff;

	// List of special tags that affect how damage is dealt
	// These tags will be compared to tags in the physical material of the thing being hit
	// If more than one tag is present, the multipliers will be combined multiplicatively
	UPROPERTY(EditAnywhere, Category = "Weapon Config")
	TMap<FGameplayTag, float> MaterialDamageMultiplier;
	
private:
	GENERATED_BODY()
	
	bool bAttackFromBehindAccuracy = false;//TODO make this a function?
	bool bAttackFromConcealmentAccuracy = false;

	// Updates the spread and returns true if the spread is at minimum
	bool UpdateSpread(float DeltaSeconds);//TODO the longer the consecutive attacks sequence, the smaller the accuracy (tiredness)

	// Updates the multipliers and returns true if they are at minimum
	bool UpdateMultipliers(float DeltaSeconds);//TODO the longer the attacking sequence the bigger the damage multipliers?
			//also update all criteria like attack from behind, from concealment, with or without shield, what attack is being performed etc.
};
