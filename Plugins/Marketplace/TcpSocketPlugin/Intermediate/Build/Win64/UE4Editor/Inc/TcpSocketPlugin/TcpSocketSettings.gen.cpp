// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TcpSocketPlugin/Public/TcpSocketSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpSocketSettings() {}
// Cross Module References
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_UTcpSocketSettings_NoRegister();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_UTcpSocketSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TcpSocketPlugin();
// End Cross Module References
	void UTcpSocketSettings::StaticRegisterNativesUTcpSocketSettings()
	{
	}
	UClass* Z_Construct_UClass_UTcpSocketSettings_NoRegister()
	{
		return UTcpSocketSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTcpSocketSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostErrorsToMessageLog_MetaData[];
#endif
		static void NewProp_bPostErrorsToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostErrorsToMessageLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTcpSocketSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpSocketPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpSocketSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TcpSocketSettings.h" },
		{ "ModuleRelativePath", "Public/TcpSocketSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData[] = {
		{ "Category", "TcpSocketPlugin" },
		{ "Comment", "/** Post errors to message log. */" },
		{ "ModuleRelativePath", "Public/TcpSocketSettings.h" },
		{ "ToolTip", "Post errors to message log." },
	};
#endif
	void Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_SetBit(void* Obj)
	{
		((UTcpSocketSettings*)Obj)->bPostErrorsToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog = { "bPostErrorsToMessageLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTcpSocketSettings), &Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpSocketSettings_Statics::NewProp_bPostErrorsToMessageLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTcpSocketSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTcpSocketSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTcpSocketSettings_Statics::ClassParams = {
		&UTcpSocketSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTcpSocketSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpSocketSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTcpSocketSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTcpSocketSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTcpSocketSettings, 3607423178);
	template<> TCPSOCKETPLUGIN_API UClass* StaticClass<UTcpSocketSettings>()
	{
		return UTcpSocketSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTcpSocketSettings(Z_Construct_UClass_UTcpSocketSettings, &UTcpSocketSettings::StaticClass, TEXT("/Script/TcpSocketPlugin"), TEXT("UTcpSocketSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTcpSocketSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
