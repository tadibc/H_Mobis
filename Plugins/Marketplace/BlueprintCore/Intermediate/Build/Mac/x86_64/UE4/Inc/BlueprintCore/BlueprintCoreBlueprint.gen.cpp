// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintCore/Public/BlueprintCoreBlueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCoreBlueprint() {}
// Cross Module References
	BLUEPRINTCORE_API UClass* Z_Construct_UClass_UBlueprintCoreBlueprint_NoRegister();
	BLUEPRINTCORE_API UClass* Z_Construct_UClass_UBlueprintCoreBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_BlueprintCore();
	BLUEPRINTCORE_API UClass* Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_NoRegister();
	BLUEPRINTCORE_API UClass* Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
// End Cross Module References
	void UBlueprintCoreBlueprint::StaticRegisterNativesUBlueprintCoreBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintCoreBlueprint_NoRegister()
	{
		return UBlueprintCoreBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintCoreBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[];
#endif
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRenaming_MetaData[];
#endif
		static void NewProp_bAllowRenaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRenaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsGlobalVariables_MetaData[];
#endif
		static void NewProp_bSupportsGlobalVariables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsGlobalVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsLocalVariables_MetaData[];
#endif
		static void NewProp_bSupportsLocalVariables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsLocalVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsFunctions_MetaData[];
#endif
		static void NewProp_bSupportsFunctions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsMacros_MetaData[];
#endif
		static void NewProp_bSupportsMacros_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsMacros;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDelegates_MetaData[];
#endif
		static void NewProp_bSupportsDelegates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDelegates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsEventGraphs_MetaData[];
#endif
		static void NewProp_bSupportsEventGraphs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsEventGraphs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAnimLayers_MetaData[];
#endif
		static void NewProp_bSupportsAnimLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAnimLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGraphAllowDeletion_MetaData[];
#endif
		static void NewProp_bGraphAllowDeletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGraphAllowDeletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyFileHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyFileHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintCoreBlueprint.h" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Make the blueprint Read-Only\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "Make the blueprint Read-Only" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Allow renaming of blueprint nodes */\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "Allow renaming of blueprint nodes */" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bAllowRenaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming = { "bAllowRenaming", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports global variables\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports global variables" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsGlobalVariables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables = { "bSupportsGlobalVariables", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports global variables\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports global variables" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsLocalVariables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables = { "bSupportsLocalVariables", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports functions\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports functions" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsFunctions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions = { "bSupportsFunctions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports macros\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports macros" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsMacros = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros = { "bSupportsMacros", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports delegates\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports delegates" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsDelegates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates = { "bSupportsDelegates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports event graphs\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports event graphs" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsEventGraphs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs = { "bSupportsEventGraphs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// This blueprint supports animation layers\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "This blueprint supports animation layers" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bSupportsAnimLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers = { "bSupportsAnimLayers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion_MetaData[] = {
		{ "Category", "Settings|Graphs" },
		{ "Comment", "// Allow deletion of blueprint graphs */\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
		{ "ToolTip", "Allow deletion of blueprint graphs */" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion_SetBit(void* Obj)
	{
		((UBlueprintCoreBlueprint*)Obj)->bGraphAllowDeletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion = { "bGraphAllowDeletion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintCoreBlueprint), &Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileHash = { "KeyFileHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCoreBlueprint, KeyFileHash), METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileName = { "KeyFileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCoreBlueprint, KeyFileName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bAllowRenaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsGlobalVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsLocalVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsMacros,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsEventGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bSupportsAnimLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_bGraphAllowDeletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::NewProp_KeyFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCoreBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::ClassParams = {
		&UBlueprintCoreBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintCoreBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintCoreBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintCoreBlueprint, 3062553342);
	template<> BLUEPRINTCORE_API UClass* StaticClass<UBlueprintCoreBlueprint>()
	{
		return UBlueprintCoreBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintCoreBlueprint(Z_Construct_UClass_UBlueprintCoreBlueprint, &UBlueprintCoreBlueprint::StaticClass, TEXT("/Script/BlueprintCore"), TEXT("UBlueprintCoreBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCoreBlueprint);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintCoreBlueprint)
	void UBlueprintCoreBlueprintGeneratedClass::StaticRegisterNativesUBlueprintCoreBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_NoRegister()
	{
		return UBlueprintCoreBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "BlueprintCoreBlueprint.h" },
		{ "ModuleRelativePath", "Public/BlueprintCoreBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCoreBlueprintGeneratedClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::ClassParams = {
		&UBlueprintCoreBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintCoreBlueprintGeneratedClass, 4025521361);
	template<> BLUEPRINTCORE_API UClass* StaticClass<UBlueprintCoreBlueprintGeneratedClass>()
	{
		return UBlueprintCoreBlueprintGeneratedClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintCoreBlueprintGeneratedClass(Z_Construct_UClass_UBlueprintCoreBlueprintGeneratedClass, &UBlueprintCoreBlueprintGeneratedClass::StaticClass, TEXT("/Script/BlueprintCore"), TEXT("UBlueprintCoreBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCoreBlueprintGeneratedClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
