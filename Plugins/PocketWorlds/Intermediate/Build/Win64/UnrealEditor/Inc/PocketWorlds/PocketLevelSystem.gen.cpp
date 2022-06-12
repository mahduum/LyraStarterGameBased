// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/PocketLevelSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketLevelSystem() {}
// Cross Module References
	POCKETWORLDS_API UClass* Z_Construct_UClass_UPocketLevelSubsystem_NoRegister();
	POCKETWORLDS_API UClass* Z_Construct_UClass_UPocketLevelSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_PocketWorlds();
	POCKETWORLDS_API UClass* Z_Construct_UClass_UPocketLevelInstance_NoRegister();
// End Cross Module References
	void UPocketLevelSubsystem::StaticRegisterNativesUPocketLevelSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPocketLevelSubsystem);
	UClass* Z_Construct_UClass_UPocketLevelSubsystem_NoRegister()
	{
		return UPocketLevelSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPocketLevelSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PocketInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PocketInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PocketInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPocketLevelSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketWorlds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketLevelSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PocketLevelSystem.h" },
		{ "ModuleRelativePath", "Public/PocketLevelSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances_Inner = { "PocketInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPocketLevelInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/PocketLevelSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances = { "PocketInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPocketLevelSubsystem, PocketInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPocketLevelSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPocketLevelSubsystem_Statics::NewProp_PocketInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPocketLevelSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPocketLevelSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPocketLevelSubsystem_Statics::ClassParams = {
		&UPocketLevelSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPocketLevelSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevelSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPocketLevelSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevelSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPocketLevelSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPocketLevelSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPocketLevelSubsystem.OuterSingleton, Z_Construct_UClass_UPocketLevelSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPocketLevelSubsystem.OuterSingleton;
	}
	template<> POCKETWORLDS_API UClass* StaticClass<UPocketLevelSubsystem>()
	{
		return UPocketLevelSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPocketLevelSubsystem);
	struct Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevelSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevelSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPocketLevelSubsystem, UPocketLevelSubsystem::StaticClass, TEXT("UPocketLevelSubsystem"), &Z_Registration_Info_UClass_UPocketLevelSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPocketLevelSubsystem), 1395686218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevelSystem_h_179869147(TEXT("/Script/PocketWorlds"),
		Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevelSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevelSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
