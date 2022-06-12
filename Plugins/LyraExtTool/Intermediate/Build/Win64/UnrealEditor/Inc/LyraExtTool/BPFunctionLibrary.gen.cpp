// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraExtTool/Public/BPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFunctionLibrary() {}
// Cross Module References
	LYRAEXTTOOL_API UClass* Z_Construct_UClass_UBPFunctionLibrary_NoRegister();
	LYRAEXTTOOL_API UClass* Z_Construct_UClass_UBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LyraExtTool();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBPFunctionLibrary::execChangeMeshMaterials)
	{
		P_GET_TARRAY(UStaticMesh*,Z_Param_Mesh);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBPFunctionLibrary::ChangeMeshMaterials(Z_Param_Mesh,Z_Param_Material);
		P_NATIVE_END;
	}
	void UBPFunctionLibrary::StaticRegisterNativesUBPFunctionLibrary()
	{
		UClass* Class = UBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMeshMaterials", &UBPFunctionLibrary::execChangeMeshMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics
	{
		struct BPFunctionLibrary_eventChangeMeshMaterials_Parms
		{
			TArray<UStaticMesh*> Mesh;
			UMaterialInterface* Material;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFunctionLibrary_eventChangeMeshMaterials_Parms, Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFunctionLibrary_eventChangeMeshMaterials_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPFunctionLibrary_eventChangeMeshMaterials_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPFunctionLibrary_eventChangeMeshMaterials_Parms), &Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_Mesh_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "LyraExt" },
		{ "ModuleRelativePath", "Public/BPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFunctionLibrary, nullptr, "ChangeMeshMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::BPFunctionLibrary_eventChangeMeshMaterials_Parms), Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPFunctionLibrary);
	UClass* Z_Construct_UClass_UBPFunctionLibrary_NoRegister()
	{
		return UBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraExtTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFunctionLibrary_ChangeMeshMaterials, "ChangeMeshMaterials" }, // 3340503193
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPFunctionLibrary_Statics::ClassParams = {
		&UBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPFunctionLibrary.OuterSingleton;
	}
	template<> LYRAEXTTOOL_API UClass* StaticClass<UBPFunctionLibrary>()
	{
		return UBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_LyraExtTool_Source_LyraExtTool_Public_BPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_LyraExtTool_Source_LyraExtTool_Public_BPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPFunctionLibrary, UBPFunctionLibrary::StaticClass, TEXT("UBPFunctionLibrary"), &Z_Registration_Info_UClass_UBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPFunctionLibrary), 2450263219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_LyraExtTool_Source_LyraExtTool_Public_BPFunctionLibrary_h_3439500763(TEXT("/Script/LyraExtTool"),
		Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_LyraExtTool_Source_LyraExtTool_Public_BPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_LyraExtTool_Source_LyraExtTool_Public_BPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
