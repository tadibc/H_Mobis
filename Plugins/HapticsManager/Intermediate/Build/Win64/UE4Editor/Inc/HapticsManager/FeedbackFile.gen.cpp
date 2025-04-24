// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/FeedbackFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackFile() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UFeedbackFile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void UFeedbackFile::StaticRegisterNativesUFeedbackFile()
	{
	}
	UClass* Z_Construct_UClass_UFeedbackFile_NoRegister()
	{
		return UFeedbackFile::StaticClass();
	}
	struct Z_Construct_UClass_UFeedbackFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedbackFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FeedbackFile.h" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "FeedbackFile" },
		{ "Comment", "//Key used to identify the haptic feedback effect in the bHaptics Player.\n" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
		{ "ToolTip", "Key used to identify the haptic feedback effect in the bHaptics Player." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackFile, Key), METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::NewProp_ProjectString_MetaData[] = {
		{ "Comment", "//JSON String to be sent to the Player\n" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
		{ "ToolTip", "JSON String to be sent to the Player" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFeedbackFile_Statics::NewProp_ProjectString = { "ProjectString", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackFile, ProjectString), METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_ProjectString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_ProjectString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "//Unique ID for each feedbackFile\n" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
		{ "ToolTip", "Unique ID for each feedbackFile" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackFile, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Device_MetaData[] = {
		{ "Category", "FeedbackFile" },
		{ "Comment", "//Device(s) on which the haptic feedback will be played.\n" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
		{ "ToolTip", "Device(s) on which the haptic feedback will be played." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackFile, Device), METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Device_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "FeedbackFile" },
		{ "Comment", "//Duration of the haptic feedback effect (in seconds)\n" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
		{ "ToolTip", "Duration of the haptic feedback effect (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackFile, Duration), METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Duration_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackFile_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FeedbackFile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackFile_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackFile, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedbackFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackFile_Statics::NewProp_ProjectString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackFile_Statics::NewProp_Duration,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackFile_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedbackFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbackFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFeedbackFile_Statics::ClassParams = {
		&UFeedbackFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFeedbackFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFeedbackFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeedbackFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFeedbackFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFeedbackFile, 1580935988);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UFeedbackFile>()
	{
		return UFeedbackFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFeedbackFile(Z_Construct_UClass_UFeedbackFile, &UFeedbackFile::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UFeedbackFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbackFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
