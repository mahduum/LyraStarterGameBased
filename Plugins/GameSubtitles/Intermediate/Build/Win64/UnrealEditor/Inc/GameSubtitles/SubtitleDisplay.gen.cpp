// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Widgets/SubtitleDisplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitleDisplay() {}
// Cross Module References
	GAMESUBTITLES_API UClass* Z_Construct_UClass_USubtitleDisplay_NoRegister();
	GAMESUBTITLES_API UClass* Z_Construct_UClass_USubtitleDisplay();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_GameSubtitles();
	GAMESUBTITLES_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleFormat();
	GAMESUBTITLES_API UClass* Z_Construct_UClass_USubtitleDisplayOptions_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(USubtitleDisplay::execHasSubtitles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSubtitles();
		P_NATIVE_END;
	}
	void USubtitleDisplay::StaticRegisterNativesUSubtitleDisplay()
	{
		UClass* Class = USubtitleDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasSubtitles", &USubtitleDisplay::execHasSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics
	{
		struct SubtitleDisplay_eventHasSubtitles_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubtitleDisplay_eventHasSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SubtitleDisplay_eventHasSubtitles_Parms), &Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
		{ "Tooltip", "True if there are subtitles currently.  False if the subtitle text is empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitleDisplay, nullptr, "HasSubtitles", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::SubtitleDisplay_eventHasSubtitles_Parms), Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitleDisplay_HasSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubtitleDisplay);
	UClass* Z_Construct_UClass_USubtitleDisplay_NoRegister()
	{
		return USubtitleDisplay::StaticClass();
	}
	struct Z_Construct_UClass_USubtitleDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewMode_MetaData[];
#endif
		static void NewProp_bPreviewMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PreviewText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedBackgroundBorder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedBackgroundBorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubtitleDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubtitles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubtitleDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubtitleDisplay_HasSubtitles, "HasSubtitles" }, // 2658666419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "Widgets/SubtitleDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitleDisplay, Format), Z_Construct_UScriptStruct_FSubtitleFormat, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Format_MetaData)) }; // 2811033902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Display Info" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitleDisplay, Options), Z_Construct_UClass_USubtitleDisplayOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt_MetaData[] = {
		{ "Category", "Display Info" },
		{ "Comment", "// Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs.\n" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
		{ "ToolTip", "Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt = { "WrapTextAt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitleDisplay, WrapTextAt), METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Preview text to be displayed when designing the widget */" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
		{ "ToolTip", "Preview text to be displayed when designing the widget" },
	};
#endif
	void Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode_SetBit(void* Obj)
	{
		((USubtitleDisplay*)Obj)->bPreviewMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode = { "bPreviewMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USubtitleDisplay), &Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_PreviewText_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Preview text to be displayed when designing the widget */" },
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
		{ "ToolTip", "Preview text to be displayed when designing the widget" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_PreviewText = { "PreviewText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitleDisplay, PreviewText), METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_PreviewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_PreviewText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedStyle = { "GeneratedStyle", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitleDisplay, GeneratedStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedStyle_MetaData)) }; // 2453068466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedBackgroundBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/SubtitleDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedBackgroundBorder = { "GeneratedBackgroundBorder", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubtitleDisplay, GeneratedBackgroundBorder), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedBackgroundBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedBackgroundBorder_MetaData)) }; // 852902259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubtitleDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_bPreviewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_PreviewText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_GeneratedBackgroundBorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubtitleDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubtitleDisplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubtitleDisplay_Statics::ClassParams = {
		&USubtitleDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubtitleDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubtitleDisplay()
	{
		if (!Z_Registration_Info_UClass_USubtitleDisplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubtitleDisplay.OuterSingleton, Z_Construct_UClass_USubtitleDisplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubtitleDisplay.OuterSingleton;
	}
	template<> GAMESUBTITLES_API UClass* StaticClass<USubtitleDisplay>()
	{
		return USubtitleDisplay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitleDisplay);
	struct Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_GameSubtitles_Source_Public_Widgets_SubtitleDisplay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_GameSubtitles_Source_Public_Widgets_SubtitleDisplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubtitleDisplay, USubtitleDisplay::StaticClass, TEXT("USubtitleDisplay"), &Z_Registration_Info_UClass_USubtitleDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubtitleDisplay), 352357706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_GameSubtitles_Source_Public_Widgets_SubtitleDisplay_h_1263588184(TEXT("/Script/GameSubtitles"),
		Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_GameSubtitles_Source_Public_Widgets_SubtitleDisplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameBased_Plugins_GameSubtitles_Source_Public_Widgets_SubtitleDisplay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
