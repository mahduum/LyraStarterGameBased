// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/PocketLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketLevel() {}
// Cross Module References
	POCKETWORLDS_API UClass* Z_Construct_UClass_UPocketLevel_NoRegister();
	POCKETWORLDS_API UClass* Z_Construct_UClass_UPocketLevel();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PocketWorlds();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UPocketLevel::StaticRegisterNativesUPocketLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPocketLevel);
	UClass* Z_Construct_UClass_UPocketLevel_NoRegister()
	{
		return UPocketLevel::StaticClass();
	}
	struct Z_Construct_UClass_UPocketLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPocketLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketWorlds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketLevel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PocketLevel.h" },
		{ "ModuleRelativePath", "Public/PocketLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketLevel_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "// The level that will be streamed in for this pocket level.\n" },
		{ "ModuleRelativePath", "Public/PocketLevel.h" },
		{ "ToolTip", "The level that will be streamed in for this pocket level." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPocketLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPocketLevel, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPocketLevel_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevel_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketLevel_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "// The bounds of the pocket level so that we can create multiple instances without overlapping each other.\n" },
		{ "ModuleRelativePath", "Public/PocketLevel.h" },
		{ "ToolTip", "The bounds of the pocket level so that we can create multiple instances without overlapping each other." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPocketLevel_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPocketLevel, Bounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPocketLevel_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevel_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPocketLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPocketLevel_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPocketLevel_Statics::NewProp_Bounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPocketLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPocketLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPocketLevel_Statics::ClassParams = {
		&UPocketLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPocketLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPocketLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPocketLevel()
	{
		if (!Z_Registration_Info_UClass_UPocketLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPocketLevel.OuterSingleton, Z_Construct_UClass_UPocketLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPocketLevel.OuterSingleton;
	}
	template<> POCKETWORLDS_API UClass* StaticClass<UPocketLevel>()
	{
		return UPocketLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPocketLevel);
	struct Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPocketLevel, UPocketLevel::StaticClass, TEXT("UPocketLevel"), &Z_Registration_Info_UClass_UPocketLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPocketLevel), 2759341404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevel_h_2450684711(TEXT("/Script/PocketWorlds"),
		Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_PocketWorlds_Source_Public_PocketLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
