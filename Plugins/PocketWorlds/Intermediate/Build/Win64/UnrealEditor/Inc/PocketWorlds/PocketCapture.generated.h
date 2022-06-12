// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTextureRenderTarget2D;
#ifdef POCKETWORLDS_PocketCapture_generated_h
#error "PocketCapture.generated.h already included, missing '#pragma once' in PocketCapture.h"
#endif
#define POCKETWORLDS_PocketCapture_generated_h

#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_SPARSE_DATA
#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRendererIndex); \
	DECLARE_FUNCTION(execReclaimResources); \
	DECLARE_FUNCTION(execReleaseResources); \
	DECLARE_FUNCTION(execCaptureEffects); \
	DECLARE_FUNCTION(execCaptureAlphaMask); \
	DECLARE_FUNCTION(execCaptureDiffuse); \
	DECLARE_FUNCTION(execSetAlphaMaskedActors); \
	DECLARE_FUNCTION(execSetCaptureTarget); \
	DECLARE_FUNCTION(execGetOrCreateEffectsRenderTarget); \
	DECLARE_FUNCTION(execGetOrCreateAlphaMaskRenderTarget); \
	DECLARE_FUNCTION(execGetOrCreateDiffuseRenderTarget); \
	DECLARE_FUNCTION(execSetRenderTargetSize);


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRendererIndex); \
	DECLARE_FUNCTION(execReclaimResources); \
	DECLARE_FUNCTION(execReleaseResources); \
	DECLARE_FUNCTION(execCaptureEffects); \
	DECLARE_FUNCTION(execCaptureAlphaMask); \
	DECLARE_FUNCTION(execCaptureDiffuse); \
	DECLARE_FUNCTION(execSetAlphaMaskedActors); \
	DECLARE_FUNCTION(execSetCaptureTarget); \
	DECLARE_FUNCTION(execGetOrCreateEffectsRenderTarget); \
	DECLARE_FUNCTION(execGetOrCreateAlphaMaskRenderTarget); \
	DECLARE_FUNCTION(execGetOrCreateDiffuseRenderTarget); \
	DECLARE_FUNCTION(execSetRenderTargetSize);


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPocketCapture(); \
	friend struct Z_Construct_UClass_UPocketCapture_Statics; \
public: \
	DECLARE_CLASS(UPocketCapture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PocketWorlds"), NO_API) \
	DECLARE_SERIALIZER(UPocketCapture) \
	DECLARE_WITHIN(UPocketCaptureSubsystem)


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPocketCapture(); \
	friend struct Z_Construct_UClass_UPocketCapture_Statics; \
public: \
	DECLARE_CLASS(UPocketCapture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PocketWorlds"), NO_API) \
	DECLARE_SERIALIZER(UPocketCapture) \
	DECLARE_WITHIN(UPocketCaptureSubsystem)


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPocketCapture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPocketCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPocketCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPocketCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPocketCapture(UPocketCapture&&); \
	NO_API UPocketCapture(const UPocketCapture&); \
public:


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPocketCapture(UPocketCapture&&); \
	NO_API UPocketCapture(const UPocketCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPocketCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPocketCapture); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPocketCapture)


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_13_PROLOG
#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_SPARSE_DATA \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_RPC_WRAPPERS \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_INCLASS \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_SPARSE_DATA \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POCKETWORLDS_API UClass* StaticClass<class UPocketCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
