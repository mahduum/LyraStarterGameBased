// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSetting;
struct FGameplayTag;
#ifdef GAMESETTINGS_GameSettingPanel_generated_h
#error "GameSettingPanel.generated.h already included, missing '#pragma once' in GameSettingPanel.h"
#endif
#define GAMESETTINGS_GameSettingPanel_generated_h

#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_106_DELEGATE \
struct GameSettingPanel_eventOnExecuteNamedActionBP_Parms \
{ \
	UGameSetting* Setting; \
	FGameplayTag Action; \
}; \
static inline void FOnExecuteNamedActionBP_DelegateWrapper(const FMulticastScriptDelegate& OnExecuteNamedActionBP, UGameSetting* Setting, FGameplayTag Action) \
{ \
	GameSettingPanel_eventOnExecuteNamedActionBP_Parms Parms; \
	Parms.Setting=Setting; \
	Parms.Action=Action; \
	OnExecuteNamedActionBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_SPARSE_DATA
#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_RPC_WRAPPERS
#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSettingPanel(); \
	friend struct Z_Construct_UClass_UGameSettingPanel_Statics; \
public: \
	DECLARE_CLASS(UGameSettingPanel, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingPanel)


#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGameSettingPanel(); \
	friend struct Z_Construct_UClass_UGameSettingPanel_Statics; \
public: \
	DECLARE_CLASS(UGameSettingPanel, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSettingPanel)


#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettingPanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettingPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingPanel(UGameSettingPanel&&); \
	NO_API UGameSettingPanel(const UGameSettingPanel&); \
public:


#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettingPanel(UGameSettingPanel&&); \
	NO_API UGameSettingPanel(const UGameSettingPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettingPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettingPanel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameSettingPanel)


#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_22_PROLOG
#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_SPARSE_DATA \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_RPC_WRAPPERS \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_INCLASS \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_SPARSE_DATA \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESETTINGS_API UClass* StaticClass<class UGameSettingPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGameBased_Plugins_GameSettings_Source_Public_Widgets_GameSettingPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
