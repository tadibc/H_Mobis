// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestSettings() {}
// Cross Module References
	VAREST_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaRest();
// End Cross Module References
	void UVaRestSettings::StaticRegisterNativesUVaRestSettings()
	{
	}
	UClass* Z_Construct_UClass_UVaRestSettings_NoRegister()
	{
		return UVaRestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtendedLog_MetaData[];
#endif
		static void NewProp_bExtendedLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtendedLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseChunkedParser_MetaData[];
#endif
		static void NewProp_bUseChunkedParser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseChunkedParser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSettings.h" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData[] = {
		{ "Category", "VaRest" },
		{ "Comment", "/** You can disable request content logging to avoid security vulnerability */" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
		{ "ToolTip", "You can disable request content logging to avoid security vulnerability" },
	};
#endif
	void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit(void* Obj)
	{
		((UVaRestSettings*)Obj)->bExtendedLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog = { "bExtendedLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_MetaData[] = {
		{ "Category", "VaRest" },
		{ "Comment", "/** Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8) */" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
		{ "ToolTip", "Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8)" },
	};
#endif
	void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit(void* Obj)
	{
		((UVaRestSettings*)Obj)->bUseChunkedParser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser = { "bUseChunkedParser", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSettings_Statics::ClassParams = {
		&UVaRestSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVaRestSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestSettings, 2799846513);
	template<> VAREST_API UClass* StaticClass<UVaRestSettings>()
	{
		return UVaRestSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestSettings(Z_Construct_UClass_UVaRestSettings, &UVaRestSettings::StaticClass, TEXT("/Script/VaRest"), TEXT("UVaRestSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
