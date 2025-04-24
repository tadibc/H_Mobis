// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileHelper/Public/FileHelperBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileHelperBPLibrary() {}
// Cross Module References
	FILEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FEnginePath();
	UPackage* Z_Construct_UPackage__Script_FileHelper();
	FILEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FProjectPath();
	FILEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomNodeStat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FILEHELPER_API UClass* Z_Construct_UClass_UFileHelperBPLibrary_NoRegister();
	FILEHELPER_API UClass* Z_Construct_UClass_UFileHelperBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FEnginePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FILEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FEnginePath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnginePath, Z_Construct_UPackage__Script_FileHelper(), TEXT("EnginePath"), sizeof(FEnginePath), Get_Z_Construct_UScriptStruct_FEnginePath_Hash());
	}
	return Singleton;
}
template<> FILEHELPER_API UScriptStruct* StaticStruct<FEnginePath>()
{
	return FEnginePath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnginePath(FEnginePath::StaticStruct, TEXT("/Script/FileHelper"), TEXT("EnginePath"), false, nullptr, nullptr);
static struct FScriptStruct_FileHelper_StaticRegisterNativesFEnginePath
{
	FScriptStruct_FileHelper_StaticRegisterNativesFEnginePath()
	{
		UScriptStruct::DeferCppStructOps<FEnginePath>(FName(TEXT("EnginePath")));
	}
} ScriptStruct_FileHelper_StaticRegisterNativesFEnginePath;
	struct Z_Construct_UScriptStruct_FEnginePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plugins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Plugins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Saved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultLayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformExtensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformExtensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserLayout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnginePath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnginePath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Directory_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, Directory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Directory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, Config), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, Intermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Plugins_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Plugins = { "Plugins", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, Plugins), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Plugins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Plugins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Saved_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Saved = { "Saved", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, Saved), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Saved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Saved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, User), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_DefaultLayout_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_DefaultLayout = { "DefaultLayout", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, DefaultLayout), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_DefaultLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_DefaultLayout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_PlatformExtensions_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_PlatformExtensions = { "PlatformExtensions", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, PlatformExtensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_PlatformExtensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_PlatformExtensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_UserLayout_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_UserLayout = { "UserLayout", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnginePath, UserLayout), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_UserLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_UserLayout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnginePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Plugins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_Saved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_DefaultLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_PlatformExtensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnginePath_Statics::NewProp_UserLayout,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnginePath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileHelper,
		nullptr,
		&NewStructOps,
		"EnginePath",
		sizeof(FEnginePath),
		alignof(FEnginePath),
		Z_Construct_UScriptStruct_FEnginePath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnginePath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnginePath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnginePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnginePath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FileHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnginePath"), sizeof(FEnginePath), Get_Z_Construct_UScriptStruct_FEnginePath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnginePath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnginePath_Hash() { return 3744022846U; }
class UScriptStruct* FProjectPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FILEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FProjectPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectPath, Z_Construct_UPackage__Script_FileHelper(), TEXT("ProjectPath"), sizeof(FProjectPath), Get_Z_Construct_UScriptStruct_FProjectPath_Hash());
	}
	return Singleton;
}
template<> FILEHELPER_API UScriptStruct* StaticStruct<FProjectPath>()
{
	return FProjectPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectPath(FProjectPath::StaticStruct, TEXT("/Script/FileHelper"), TEXT("ProjectPath"), false, nullptr, nullptr);
static struct FScriptStruct_FileHelper_StaticRegisterNativesFProjectPath
{
	FScriptStruct_FileHelper_StaticRegisterNativesFProjectPath()
	{
		UScriptStruct::DeferCppStructOps<FProjectPath>(FName(TEXT("ProjectPath")));
	}
} ScriptStruct_FileHelper_StaticRegisterNativesFProjectPath;
	struct Z_Construct_UScriptStruct_FProjectPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mods_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Mods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plugins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Plugins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Saved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentDownload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PersistentDownload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformExtensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformExtensions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectPath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Directory_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Directory), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Directory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Config), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Intermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Log_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Log = { "Log", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Log), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Log_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Log_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Mods_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Mods = { "Mods", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Mods), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Mods_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Mods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Plugins_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Plugins = { "Plugins", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Plugins), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Plugins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Plugins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Saved_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Saved = { "Saved", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, Saved), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Saved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Saved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, User), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PersistentDownload_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PersistentDownload = { "PersistentDownload", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, PersistentDownload), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PersistentDownload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PersistentDownload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PlatformExtensions_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PlatformExtensions = { "PlatformExtensions", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectPath, PlatformExtensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PlatformExtensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PlatformExtensions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Log,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Mods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Plugins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_Saved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PersistentDownload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectPath_Statics::NewProp_PlatformExtensions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileHelper,
		nullptr,
		&NewStructOps,
		"ProjectPath",
		sizeof(FProjectPath),
		alignof(FProjectPath),
		Z_Construct_UScriptStruct_FProjectPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FileHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectPath"), sizeof(FProjectPath), Get_Z_Construct_UScriptStruct_FProjectPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectPath_Hash() { return 703517349U; }
class UScriptStruct* FCustomNodeStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FILEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FCustomNodeStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomNodeStat, Z_Construct_UPackage__Script_FileHelper(), TEXT("CustomNodeStat"), sizeof(FCustomNodeStat), Get_Z_Construct_UScriptStruct_FCustomNodeStat_Hash());
	}
	return Singleton;
}
template<> FILEHELPER_API UScriptStruct* StaticStruct<FCustomNodeStat>()
{
	return FCustomNodeStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomNodeStat(FCustomNodeStat::StaticStruct, TEXT("/Script/FileHelper"), TEXT("CustomNodeStat"), false, nullptr, nullptr);
static struct FScriptStruct_FileHelper_StaticRegisterNativesFCustomNodeStat
{
	FScriptStruct_FileHelper_StaticRegisterNativesFCustomNodeStat()
	{
		UScriptStruct::DeferCppStructOps<FCustomNodeStat>(FName(TEXT("CustomNodeStat")));
	}
} ScriptStruct_FileHelper_StaticRegisterNativesFCustomNodeStat;
	struct Z_Construct_UScriptStruct_FCustomNodeStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDirectory_MetaData[];
#endif
		static void NewProp_IsDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadOnly_MetaData[];
#endif
		static void NewProp_IsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAccessTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastAccessTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomNodeStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory_SetBit(void* Obj)
	{
		((FCustomNodeStat*)Obj)->IsDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory = { "IsDirectory", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomNodeStat), &Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly_SetBit(void* Obj)
	{
		((FCustomNodeStat*)Obj)->IsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly = { "IsReadOnly", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomNodeStat), &Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_LastAccessTime_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_LastAccessTime = { "LastAccessTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomNodeStat, LastAccessTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_LastAccessTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_LastAccessTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_CreationTime_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomNodeStat, CreationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_CreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_CreationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_ModificationTime_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_ModificationTime = { "ModificationTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomNodeStat, ModificationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_ModificationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_ModificationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_FileSize_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomNodeStat, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_FileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomNodeStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_IsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_LastAccessTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_CreationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_ModificationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomNodeStat_Statics::NewProp_FileSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomNodeStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FileHelper,
		nullptr,
		&NewStructOps,
		"CustomNodeStat",
		sizeof(FCustomNodeStat),
		alignof(FCustomNodeStat),
		Z_Construct_UScriptStruct_FCustomNodeStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNodeStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomNodeStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomNodeStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FileHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomNodeStat"), sizeof(FCustomNodeStat), Get_Z_Construct_UScriptStruct_FCustomNodeStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomNodeStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomNodeStat_Hash() { return 2501276541U; }
	DEFINE_FUNCTION(UFileHelperBPLibrary::execRemoveConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::RemoveConfig(Z_Param_FilePath,Z_Param_Section,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execJSONToDataTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSON);
		P_GET_OBJECT(UScriptStruct,Z_Param_Struct);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UFileHelperBPLibrary::JSONToDataTable(Z_Param_JSON,Z_Param_Struct,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execCSVToDataTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CSV);
		P_GET_OBJECT(UScriptStruct,Z_Param_Struct);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UFileHelperBPLibrary::CSVToDataTable(Z_Param_CSV,Z_Param_Struct,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execDataTableToJSON)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::DataTableToJSON(Z_Param_Table,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execDatatableToCSV)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::DatatableToCSV(Z_Param_Table,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execLoadScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFileHelperBPLibrary::LoadScreenshot(Z_Param_Path,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execTakeScreenShot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Path);
		P_GET_UBOOL(Z_Param_PrefixTimestamp);
		P_GET_UBOOL(Z_Param_ShowUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::TakeScreenShot(Z_Param_Filename,Z_Param_Out_Path,Z_Param_PrefixTimestamp,Z_Param_ShowUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execGetPathParts)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PathPart);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_BasePart);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExtensionPart);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileHelperBPLibrary::GetPathParts(Z_Param_Path,Z_Param_Out_PathPart,Z_Param_Out_BasePart,Z_Param_Out_ExtensionPart,Z_Param_Out_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execRenameFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::RenameFile(Z_Param_Path,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execMoveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY(FStrProperty,Z_Param_Dest);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::MoveFile(Z_Param_Source,Z_Param_Dest,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execCopyFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY(FStrProperty,Z_Param_Dest);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::CopyFile(Z_Param_Source,Z_Param_Dest,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execRemoveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::RemoveFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execNodeStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_STRUCT_REF(FCustomNodeStat,Z_Param_Out_Stats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::NodeStats(Z_Param_Path,Z_Param_Out_Stats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execMoveDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY(FStrProperty,Z_Param_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::MoveDirectory(Z_Param_Source,Z_Param_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execCopyDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY(FStrProperty,Z_Param_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::CopyDirectory(Z_Param_Source,Z_Param_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execRemoveDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_Recursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::RemoveDirectory(Z_Param_Path,Z_Param_Recursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execMakeDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_Recursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::MakeDirectory(Z_Param_Path,Z_Param_Recursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execListDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pattern);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Nodes);
		P_GET_UBOOL(Z_Param_ShowFile);
		P_GET_UBOOL(Z_Param_ShowDirectory);
		P_GET_UBOOL(Z_Param_Recursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::ListDirectory(Z_Param_Path,Z_Param_Pattern,Z_Param_Out_Nodes,Z_Param_ShowFile,Z_Param_ShowDirectory,Z_Param_Recursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execGetFileSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFileHelperBPLibrary::GetFileSize(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execGetReadOnlyFlag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::GetReadOnlyFlag(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execSetReadOnlyFlag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::SetReadOnlyFlag(Z_Param_FilePath,Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execValidateFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ValidName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::ValidateFilename(Z_Param_Filename,Z_Param_Out_ValidName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execIsValidFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::IsValidFilename(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execIsDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::IsDirectory(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execIsFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::IsFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execCSVToString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_GET_TARRAY(FString,Z_Param_Headers);
		P_GET_TARRAY(FString,Z_Param_Data);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Total);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::CSVToString(Z_Param_Out_Result,Z_Param_Headers,Z_Param_Data,Z_Param_Out_Total);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execStringToCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Headers);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Total);
		P_GET_UBOOL(Z_Param_HeaderFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::StringToCSV(Z_Param_Content,Z_Param_Out_Headers,Z_Param_Out_Data,Z_Param_Out_Total,Z_Param_HeaderFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execReadCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Headers);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Total);
		P_GET_UBOOL(Z_Param_HeaderFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::ReadCSV(Z_Param_Path,Z_Param_Out_Headers,Z_Param_Out_Data,Z_Param_Out_Total,Z_Param_HeaderFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execSaveCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY(FString,Z_Param_Headers);
		P_GET_TARRAY(FString,Z_Param_Data);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Total);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::SaveCSV(Z_Param_Path,Z_Param_Headers,Z_Param_Data,Z_Param_Out_Total,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execBytesFromBase64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::BytesFromBase64(Z_Param_Source,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execBytesToBase64)
	{
		P_GET_TARRAY(uint8,Z_Param_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileHelperBPLibrary::BytesToBase64(Z_Param_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execStringFromBase64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Base64Str);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::StringFromBase64(Z_Param_Base64Str,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execStringToBase64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileHelperBPLibrary::StringToBase64(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execSaveByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Error);
		P_GET_UBOOL(Z_Param_Append);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::SaveByte(Z_Param_Path,Z_Param_Out_Bytes,Z_Param_Out_Error,Z_Param_Append,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execReadByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::ReadByte(Z_Param_Path,Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execSaveLine)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Text);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Error);
		P_GET_UBOOL(Z_Param_Append);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::SaveLine(Z_Param_Path,Z_Param_Out_Text,Z_Param_Out_Error,Z_Param_Append,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execReadLine)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pattern);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Lines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::ReadLine(Z_Param_Path,Z_Param_Pattern,Z_Param_Out_Lines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execSaveText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Error);
		P_GET_UBOOL(Z_Param_Append);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::SaveText(Z_Param_Path,Z_Param_Text,Z_Param_Out_Error,Z_Param_Append,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execReadText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileHelperBPLibrary::ReadText(Z_Param_Path,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execGetProjectDirectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProjectPath*)Z_Param__Result=UFileHelperBPLibrary::GetProjectDirectories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileHelperBPLibrary::execGetEngineDirectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEnginePath*)Z_Param__Result=UFileHelperBPLibrary::GetEngineDirectories();
		P_NATIVE_END;
	}
	void UFileHelperBPLibrary::StaticRegisterNativesUFileHelperBPLibrary()
	{
		UClass* Class = UFileHelperBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesFromBase64", &UFileHelperBPLibrary::execBytesFromBase64 },
			{ "BytesToBase64", &UFileHelperBPLibrary::execBytesToBase64 },
			{ "CopyDirectory", &UFileHelperBPLibrary::execCopyDirectory },
			{ "CopyFile", &UFileHelperBPLibrary::execCopyFile },
			{ "CSVToDataTable", &UFileHelperBPLibrary::execCSVToDataTable },
			{ "CSVToString", &UFileHelperBPLibrary::execCSVToString },
			{ "DatatableToCSV", &UFileHelperBPLibrary::execDatatableToCSV },
			{ "DataTableToJSON", &UFileHelperBPLibrary::execDataTableToJSON },
			{ "GetEngineDirectories", &UFileHelperBPLibrary::execGetEngineDirectories },
			{ "GetFileSize", &UFileHelperBPLibrary::execGetFileSize },
			{ "GetPathParts", &UFileHelperBPLibrary::execGetPathParts },
			{ "GetProjectDirectories", &UFileHelperBPLibrary::execGetProjectDirectories },
			{ "GetReadOnlyFlag", &UFileHelperBPLibrary::execGetReadOnlyFlag },
			{ "IsDirectory", &UFileHelperBPLibrary::execIsDirectory },
			{ "IsFile", &UFileHelperBPLibrary::execIsFile },
			{ "IsValidFilename", &UFileHelperBPLibrary::execIsValidFilename },
			{ "JSONToDataTable", &UFileHelperBPLibrary::execJSONToDataTable },
			{ "JsonToStruct", &UFileHelperBPLibrary::execJsonToStruct },
			{ "ListDirectory", &UFileHelperBPLibrary::execListDirectory },
			{ "LoadScreenshot", &UFileHelperBPLibrary::execLoadScreenshot },
			{ "MakeDirectory", &UFileHelperBPLibrary::execMakeDirectory },
			{ "MoveDirectory", &UFileHelperBPLibrary::execMoveDirectory },
			{ "MoveFile", &UFileHelperBPLibrary::execMoveFile },
			{ "NodeStats", &UFileHelperBPLibrary::execNodeStats },
			{ "ReadByte", &UFileHelperBPLibrary::execReadByte },
			{ "ReadConfig", &UFileHelperBPLibrary::execReadConfig },
			{ "ReadCSV", &UFileHelperBPLibrary::execReadCSV },
			{ "ReadLine", &UFileHelperBPLibrary::execReadLine },
			{ "ReadText", &UFileHelperBPLibrary::execReadText },
			{ "RemoveConfig", &UFileHelperBPLibrary::execRemoveConfig },
			{ "RemoveDirectory", &UFileHelperBPLibrary::execRemoveDirectory },
			{ "RemoveFile", &UFileHelperBPLibrary::execRemoveFile },
			{ "RenameFile", &UFileHelperBPLibrary::execRenameFile },
			{ "SaveByte", &UFileHelperBPLibrary::execSaveByte },
			{ "SaveCSV", &UFileHelperBPLibrary::execSaveCSV },
			{ "SaveLine", &UFileHelperBPLibrary::execSaveLine },
			{ "SaveText", &UFileHelperBPLibrary::execSaveText },
			{ "SetReadOnlyFlag", &UFileHelperBPLibrary::execSetReadOnlyFlag },
			{ "StringFromBase64", &UFileHelperBPLibrary::execStringFromBase64 },
			{ "StringToBase64", &UFileHelperBPLibrary::execStringToBase64 },
			{ "StringToCSV", &UFileHelperBPLibrary::execStringToCSV },
			{ "StructToJson", &UFileHelperBPLibrary::execStructToJson },
			{ "StructToXML", &UFileHelperBPLibrary::execStructToXML },
			{ "TakeScreenShot", &UFileHelperBPLibrary::execTakeScreenShot },
			{ "ValidateFilename", &UFileHelperBPLibrary::execValidateFilename },
			{ "WriteConfig", &UFileHelperBPLibrary::execWriteConfig },
			{ "XMLToStruct", &UFileHelperBPLibrary::execXMLToStruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics
	{
		struct FileHelperBPLibrary_eventBytesFromBase64_Parms
		{
			FString Source;
			TArray<uint8> Out;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventBytesFromBase64_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventBytesFromBase64_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventBytesFromBase64_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventBytesFromBase64_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Byte" },
		{ "CompactNodeTitle", "FromBase64" },
		{ "DisplayName", "BytesFromBase64" },
		{ "Keywords", "File plugin bytes convert base64 decode" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Decodes a byte array from base64" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "BytesFromBase64", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventBytesFromBase64_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics
	{
		struct FileHelperBPLibrary_eventBytesToBase64_Parms
		{
			TArray<uint8> Bytes;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventBytesToBase64_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventBytesToBase64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Byte" },
		{ "CompactNodeTitle", "ToBase64" },
		{ "DisplayName", "BytesToBase64" },
		{ "Keywords", "File plugin bytes convert base64 encode" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Encodes a byte array to base64" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "BytesToBase64", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventBytesToBase64_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics
	{
		struct FileHelperBPLibrary_eventCopyDirectory_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCopyDirectory_Parms, Source), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCopyDirectory_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventCopyDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventCopyDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "CpDir" },
		{ "DisplayName", "CopyDirectory" },
		{ "Keywords", "File plugin copy directory recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Copies a directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "CopyDirectory", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventCopyDirectory_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics
	{
		struct FileHelperBPLibrary_eventCopyFile_Parms
		{
			FString Source;
			FString Dest;
			bool Force;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCopyFile_Parms, Source), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCopyFile_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventCopyFile_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "CpFile" },
		{ "CPP_Default_Force", "false" },
		{ "DisplayName", "CopyFile" },
		{ "Keywords", "File plugin copy file recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Copies a file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "CopyFile", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventCopyFile_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics
	{
		struct FileHelperBPLibrary_eventCSVToDataTable_Parms
		{
			FString CSV;
			UScriptStruct* Struct;
			bool Success;
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSV;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_CSV = { "CSV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToDataTable_Parms, CSV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToDataTable_Parms, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventCSVToDataTable_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventCSVToDataTable_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_CSV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datatable" },
		{ "DisplayName", "CSVToDataTable" },
		{ "Keywords", "File plugin datatable csv convert import" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Converts a csv string to datatable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "CSVToDataTable", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventCSVToDataTable_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics
	{
		struct FileHelperBPLibrary_eventCSVToString_Parms
		{
			FString Result;
			TArray<FString> Headers;
			TArray<FString> Data;
			int32 Total;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToString_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToString_Parms, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToString_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventCSVToString_Parms, Total), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventCSVToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventCSVToString_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CSV" },
		{ "CompactNodeTitle", "CSVToStr" },
		{ "DisplayName", "CSVToString" },
		{ "Keywords", "File plugin csv string" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "convert a csv to string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "CSVToString", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventCSVToString_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics
	{
		struct FileHelperBPLibrary_eventDatatableToCSV_Parms
		{
			UDataTable* Table;
			FString Output;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Output;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventDatatableToCSV_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventDatatableToCSV_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventDatatableToCSV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventDatatableToCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datatable" },
		{ "DisplayName", "DataTableToCSV" },
		{ "Keywords", "File plugin datatable csv convert export" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Converts a datatable to csv string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "DatatableToCSV", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventDatatableToCSV_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics
	{
		struct FileHelperBPLibrary_eventDataTableToJSON_Parms
		{
			UDataTable* Table;
			FString Output;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Output;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventDataTableToJSON_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventDataTableToJSON_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventDataTableToJSON_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventDataTableToJSON_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datatable" },
		{ "DisplayName", "DataTableToJSON" },
		{ "Keywords", "File plugin datatable json convert export" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Converts a datatable to json string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "DataTableToJSON", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventDataTableToJSON_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics
	{
		struct FileHelperBPLibrary_eventGetEngineDirectories_Parms
		{
			FEnginePath ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetEngineDirectories_Parms, ReturnValue), Z_Construct_UScriptStruct_FEnginePath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Path" },
		{ "CompactNodeTitle", "EngineDirs" },
		{ "DisplayName", "GetEngineDirectories" },
		{ "Keywords", "File plugin path engine directory" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Gets the engine directories" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "GetEngineDirectories", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventGetEngineDirectories_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics
	{
		struct FileHelperBPLibrary_eventGetFileSize_Parms
		{
			FString FilePath;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetFileSize_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "GetSize" },
		{ "DisplayName", "GetFileSize" },
		{ "Keywords", "File plugin size directory" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Gets the size of a file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "GetFileSize", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventGetFileSize_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics
	{
		struct FileHelperBPLibrary_eventGetPathParts_Parms
		{
			FString Path;
			FString PathPart;
			FString BasePart;
			FString ExtensionPart;
			FString FileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathPart;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BasePart;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtensionPart;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetPathParts_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_PathPart = { "PathPart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetPathParts_Parms, PathPart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_BasePart = { "BasePart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetPathParts_Parms, BasePart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_ExtensionPart = { "ExtensionPart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetPathParts_Parms, ExtensionPart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetPathParts_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_PathPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_BasePart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_ExtensionPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "DisplayName", "PathParts" },
		{ "Keywords", "File plugin path parts" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Gets the parts of a path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "GetPathParts", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventGetPathParts_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics
	{
		struct FileHelperBPLibrary_eventGetProjectDirectories_Parms
		{
			FProjectPath ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetProjectDirectories_Parms, ReturnValue), Z_Construct_UScriptStruct_FProjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Path" },
		{ "CompactNodeTitle", "ProjectDirs" },
		{ "DisplayName", "GetProjectDirectories" },
		{ "Keywords", "File plugin path project directory" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Gets the project directories" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "GetProjectDirectories", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventGetProjectDirectories_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics
	{
		struct FileHelperBPLibrary_eventGetReadOnlyFlag_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventGetReadOnlyFlag_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventGetReadOnlyFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventGetReadOnlyFlag_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "IsReadOnly" },
		{ "DisplayName", "GetReadOnlyFlag" },
		{ "Keywords", "File plugin read only path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Gets the read only property on file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "GetReadOnlyFlag", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventGetReadOnlyFlag_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics
	{
		struct FileHelperBPLibrary_eventIsDirectory_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventIsDirectory_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventIsDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventIsDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "IsDir" },
		{ "DisplayName", "IsDirectory" },
		{ "Keywords", "File plugin check directory exist" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Check whether a directory exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "IsDirectory", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventIsDirectory_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics
	{
		struct FileHelperBPLibrary_eventIsFile_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventIsFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventIsFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventIsFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "IsFile" },
		{ "DisplayName", "IsFile" },
		{ "Keywords", "File plugin check file exist" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Check whether a file exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "IsFile", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventIsFile_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_IsFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_IsFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics
	{
		struct FileHelperBPLibrary_eventIsValidFilename_Parms
		{
			FString Filename;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventIsValidFilename_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventIsValidFilename_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventIsValidFilename_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "IsValidName" },
		{ "DisplayName", "IsValidFilename" },
		{ "Keywords", "File plugin check path valid" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Check whether a filename is valid and can be used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "IsValidFilename", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventIsValidFilename_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics
	{
		struct FileHelperBPLibrary_eventJSONToDataTable_Parms
		{
			FString JSON;
			UScriptStruct* Struct;
			bool Success;
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSON;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventJSONToDataTable_Parms, JSON), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventJSONToDataTable_Parms, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventJSONToDataTable_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventJSONToDataTable_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventJSONToDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_JSON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datatable" },
		{ "DisplayName", "JSONToDataTable" },
		{ "Keywords", "File plugin datatable json convert import" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Converts a json string to datatable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "JSONToDataTable", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventJSONToDataTable_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics
	{
		struct FileHelperBPLibrary_eventJsonToStruct_Parms
		{
			FString Json;
			bool Success;
			UStruct* OutStruct;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventJsonToStruct_Parms, Json), METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Json_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Json_MetaData)) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventJsonToStruct_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventJsonToStruct_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventJsonToStruct_Parms, OutStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "JsonToStruct", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventJsonToStruct_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics
	{
		struct FileHelperBPLibrary_eventListDirectory_Parms
		{
			FString Path;
			FString Pattern;
			TArray<FString> Nodes;
			bool ShowFile;
			bool ShowDirectory;
			bool Recursive;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nodes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static void NewProp_ShowFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowFile;
		static void NewProp_ShowDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDirectory;
		static void NewProp_Recursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Recursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventListDirectory_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventListDirectory_Parms, Pattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventListDirectory_Parms, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowFile_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventListDirectory_Parms*)Obj)->ShowFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowFile = { "ShowFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventListDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowDirectory_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventListDirectory_Parms*)Obj)->ShowDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowDirectory = { "ShowDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventListDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Recursive_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventListDirectory_Parms*)Obj)->Recursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Recursive = { "Recursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventListDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Recursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventListDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventListDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ShowDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_Recursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "LsDir" },
		{ "CPP_Default_Recursive", "false" },
		{ "CPP_Default_ShowDirectory", "true" },
		{ "CPP_Default_ShowFile", "true" },
		{ "DisplayName", "ListDirectory" },
		{ "Keywords", "File plugin list directory pattern regex recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "List nodes from directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ListDirectory", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventListDirectory_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics
	{
		struct FileHelperBPLibrary_eventLoadScreenshot_Parms
		{
			FString Path;
			bool Success;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventLoadScreenshot_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventLoadScreenshot_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventLoadScreenshot_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventLoadScreenshot_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screenshot" },
		{ "CompactNodeTitle", "LoadScreenshot" },
		{ "DisplayName", "LoadScreenshot" },
		{ "Keywords", "File plugin texture read screenshot" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "load a screenshot from image file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "LoadScreenshot", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventLoadScreenshot_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics
	{
		struct FileHelperBPLibrary_eventMakeDirectory_Parms
		{
			FString Path;
			bool Recursive;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_Recursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Recursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventMakeDirectory_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_Recursive_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventMakeDirectory_Parms*)Obj)->Recursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_Recursive = { "Recursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventMakeDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_Recursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventMakeDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventMakeDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_Recursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "MkDir" },
		{ "CPP_Default_Recursive", "true" },
		{ "DisplayName", "MakeDirectory" },
		{ "Keywords", "File plugin make directory recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Create a new directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "MakeDirectory", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventMakeDirectory_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics
	{
		struct FileHelperBPLibrary_eventMoveDirectory_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventMoveDirectory_Parms, Source), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventMoveDirectory_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventMoveDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventMoveDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "MvDir" },
		{ "DisplayName", "MoveDirectory" },
		{ "Keywords", "File plugin move directory recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Moves a directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "MoveDirectory", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventMoveDirectory_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics
	{
		struct FileHelperBPLibrary_eventMoveFile_Parms
		{
			FString Source;
			FString Dest;
			bool Force;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventMoveFile_Parms, Source), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventMoveFile_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventMoveFile_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventMoveFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventMoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventMoveFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "MvFile" },
		{ "CPP_Default_Force", "false" },
		{ "DisplayName", "MoveFile" },
		{ "Keywords", "File plugin move file recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Moves a file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "MoveFile", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventMoveFile_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics
	{
		struct FileHelperBPLibrary_eventNodeStats_Parms
		{
			FString Path;
			FCustomNodeStat Stats;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventNodeStats_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventNodeStats_Parms, Stats), Z_Construct_UScriptStruct_FCustomNodeStat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventNodeStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventNodeStats_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "NodeStats" },
		{ "DisplayName", "NodeStats" },
		{ "Keywords", "File plugin stats directory node" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Gets the stats of a node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "NodeStats", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventNodeStats_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics
	{
		struct FileHelperBPLibrary_eventReadByte_Parms
		{
			FString Path;
			TArray<uint8> Bytes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadByte_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadByte_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadByte_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_Bytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Byte" },
		{ "CompactNodeTitle", "ReadByte" },
		{ "DisplayName", "ReadByteFile" },
		{ "Keywords", "File plugin read byte" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Read byte file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ReadByte", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventReadByte_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics
	{
		struct FileHelperBPLibrary_eventReadConfig_Parms
		{
			FString FilePath;
			FString Section;
			FString Key;
			bool Success;
			bool SingleLineArrayRead;
			UStruct* OutValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static void NewProp_SingleLineArrayRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SingleLineArrayRead;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadConfig_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadConfig_Parms, Section), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadConfig_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadConfig_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadConfig_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_SingleLineArrayRead_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadConfig_Parms*)Obj)->SingleLineArrayRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_SingleLineArrayRead = { "SingleLineArrayRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadConfig_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_SingleLineArrayRead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadConfig_Parms, OutValue), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_SingleLineArrayRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Config file ini */" },
		{ "CustomStructureParam", "OutValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Config file ini" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ReadConfig", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventReadConfig_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics
	{
		struct FileHelperBPLibrary_eventReadCSV_Parms
		{
			FString Path;
			TArray<FString> Headers;
			TArray<FString> Data;
			int32 Total;
			bool HeaderFirst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static void NewProp_HeaderFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeaderFirst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadCSV_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadCSV_Parms, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadCSV_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadCSV_Parms, Total), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_HeaderFirst_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadCSV_Parms*)Obj)->HeaderFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_HeaderFirst = { "HeaderFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_HeaderFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadCSV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_HeaderFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|CSV" },
		{ "CompactNodeTitle", "ReadCSV" },
		{ "CPP_Default_HeaderFirst", "true" },
		{ "DisplayName", "ReadCSVFile" },
		{ "Keywords", "File plugin read csv" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Read a csv file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ReadCSV", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventReadCSV_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics
	{
		struct FileHelperBPLibrary_eventReadLine_Parms
		{
			FString Path;
			FString Pattern;
			TArray<FString> Lines;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadLine_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadLine_Parms, Pattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadLine_Parms, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadLine_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Pattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Lines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_Lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Text" },
		{ "CompactNodeTitle", "ReadLine" },
		{ "DisplayName", "ReadLineFile" },
		{ "Keywords", "File plugin read text lines pattern" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Read the lines of a standard text file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ReadLine", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventReadLine_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics
	{
		struct FileHelperBPLibrary_eventReadText_Parms
		{
			FString Path;
			FString Output;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Output;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadText_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventReadText_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventReadText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventReadText_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Text" },
		{ "CompactNodeTitle", "ReadText" },
		{ "DisplayName", "ReadTextFile" },
		{ "Keywords", "File plugin read text" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Read a standard text file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ReadText", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventReadText_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ReadText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ReadText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics
	{
		struct FileHelperBPLibrary_eventRemoveConfig_Parms
		{
			FString FilePath;
			FString Section;
			FString Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRemoveConfig_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRemoveConfig_Parms, Section), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRemoveConfig_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventRemoveConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventRemoveConfig_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "RemoveConfig", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventRemoveConfig_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics
	{
		struct FileHelperBPLibrary_eventRemoveDirectory_Parms
		{
			FString Path;
			bool Recursive;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_Recursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Recursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRemoveDirectory_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_Recursive_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventRemoveDirectory_Parms*)Obj)->Recursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_Recursive = { "Recursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventRemoveDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_Recursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventRemoveDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventRemoveDirectory_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_Recursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "RmDir" },
		{ "CPP_Default_Recursive", "false" },
		{ "DisplayName", "RemoveDirectory" },
		{ "Keywords", "File plugin remove directory recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Removes a directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "RemoveDirectory", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventRemoveDirectory_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics
	{
		struct FileHelperBPLibrary_eventRemoveFile_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRemoveFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventRemoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventRemoveFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "RmFile" },
		{ "DisplayName", "RemoveFile" },
		{ "Keywords", "File plugin remove file recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Removes a file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "RemoveFile", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventRemoveFile_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics
	{
		struct FileHelperBPLibrary_eventRenameFile_Parms
		{
			FString Path;
			FString NewName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRenameFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventRenameFile_Parms, NewName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventRenameFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventRenameFile_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "RenameFile" },
		{ "DisplayName", "RenameFile" },
		{ "Keywords", "File plugin rename file recursive" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Renames a file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "RenameFile", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventRenameFile_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics
	{
		struct FileHelperBPLibrary_eventSaveByte_Parms
		{
			FString Path;
			TArray<uint8> Bytes;
			FString Error;
			bool Append;
			bool Force;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static void NewProp_Append_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Append;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveByte_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveByte_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveByte_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Append_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveByte_Parms*)Obj)->Append = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Append = { "Append", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveByte_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Append_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveByte_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveByte_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveByte_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Append,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Byte" },
		{ "CompactNodeTitle", "WriteByte" },
		{ "CPP_Default_Append", "false" },
		{ "CPP_Default_Force", "false" },
		{ "DisplayName", "WriteByteFile" },
		{ "Keywords", "File plugin write byte" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Save byte to file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "SaveByte", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventSaveByte_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics
	{
		struct FileHelperBPLibrary_eventSaveCSV_Parms
		{
			FString Path;
			TArray<FString> Headers;
			TArray<FString> Data;
			int32 Total;
			bool Force;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveCSV_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveCSV_Parms, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveCSV_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveCSV_Parms, Total), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveCSV_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveCSV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|CSV" },
		{ "CompactNodeTitle", "WriteCSV" },
		{ "CPP_Default_Force", "false" },
		{ "DisplayName", "WriteCSVFile" },
		{ "Keywords", "File plugin write csv" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Save a csv file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "SaveCSV", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventSaveCSV_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics
	{
		struct FileHelperBPLibrary_eventSaveLine_Parms
		{
			FString Path;
			TArray<FString> Text;
			FString Error;
			bool Append;
			bool Force;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static void NewProp_Append_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Append;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveLine_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveLine_Parms, Text), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveLine_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Append_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveLine_Parms*)Obj)->Append = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Append = { "Append", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveLine_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Append_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveLine_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveLine_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveLine_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Append,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Text" },
		{ "CompactNodeTitle", "WriteLine" },
		{ "CPP_Default_Append", "false" },
		{ "CPP_Default_Force", "false" },
		{ "DisplayName", "WriteLineFile" },
		{ "Keywords", "File plugin write text lines" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Save lines in a standard text file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "SaveLine", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventSaveLine_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics
	{
		struct FileHelperBPLibrary_eventSaveText_Parms
		{
			FString Path;
			FString Text;
			FString Error;
			bool Append;
			bool Force;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static void NewProp_Append_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Append;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveText_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSaveText_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Append_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveText_Parms*)Obj)->Append = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Append = { "Append", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveText_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Append_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveText_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveText_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSaveText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSaveText_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Append,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Text" },
		{ "CompactNodeTitle", "WriteText" },
		{ "CPP_Default_Append", "false" },
		{ "CPP_Default_Force", "false" },
		{ "DisplayName", "WriteTextFile" },
		{ "Keywords", "File plugin write text" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Save a standard text file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "SaveText", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventSaveText_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_SaveText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_SaveText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics
	{
		struct FileHelperBPLibrary_eventSetReadOnlyFlag_Parms
		{
			FString FilePath;
			bool Flag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventSetReadOnlyFlag_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSetReadOnlyFlag_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSetReadOnlyFlag_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventSetReadOnlyFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventSetReadOnlyFlag_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "SetReadOnly" },
		{ "DisplayName", "SetReadOnlyFlag" },
		{ "Keywords", "File plugin read only path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Updates the read only property on file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "SetReadOnlyFlag", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventSetReadOnlyFlag_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics
	{
		struct FileHelperBPLibrary_eventStringFromBase64_Parms
		{
			FString Base64Str;
			FString Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base64Str;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_Base64Str = { "Base64Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringFromBase64_Parms, Base64Str), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringFromBase64_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventStringFromBase64_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventStringFromBase64_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_Base64Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Text" },
		{ "CompactNodeTitle", "FromBase64" },
		{ "DisplayName", "StrFromBase64" },
		{ "Keywords", "File plugin string convert decode base64" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Decodes a string from base64" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "StringFromBase64", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventStringFromBase64_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics
	{
		struct FileHelperBPLibrary_eventStringToBase64_Parms
		{
			FString Source;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringToBase64_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringToBase64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::Function_MetaDataParams[] = {
		{ "Category", "File|Text" },
		{ "CompactNodeTitle", "ToBase64" },
		{ "DisplayName", "StrToBase64" },
		{ "Keywords", "File plugin string convert base64 encode" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Encodes a string to base64" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "StringToBase64", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventStringToBase64_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics
	{
		struct FileHelperBPLibrary_eventStringToCSV_Parms
		{
			FString Content;
			TArray<FString> Headers;
			TArray<FString> Data;
			int32 Total;
			bool HeaderFirst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static void NewProp_HeaderFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeaderFirst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringToCSV_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringToCSV_Parms, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringToCSV_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStringToCSV_Parms, Total), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_HeaderFirst_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventStringToCSV_Parms*)Obj)->HeaderFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_HeaderFirst = { "HeaderFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventStringToCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_HeaderFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventStringToCSV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventStringToCSV_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Headers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_HeaderFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "CSV" },
		{ "CompactNodeTitle", "StrToCSV" },
		{ "CPP_Default_HeaderFirst", "true" },
		{ "DisplayName", "StringToCSV" },
		{ "Keywords", "File plugin string csv" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "convert a string to csv" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "StringToCSV", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventStringToCSV_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics
	{
		struct FileHelperBPLibrary_eventStructToJson_Parms
		{
			FString Json;
			bool Success;
			const UStruct* InStruct;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStructToJson_Parms, Json), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventStructToJson_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventStructToJson_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStructToJson_Parms, InStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_InStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_Json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/* JSON file */" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "JSON file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "StructToJson", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventStructToJson_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics
	{
		struct FileHelperBPLibrary_eventStructToXML_Parms
		{
			FString XML;
			bool Success;
			const UStruct* InStruct;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XML;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_XML = { "XML", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStructToXML_Parms, XML), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventStructToXML_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventStructToXML_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventStructToXML_Parms, InStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_InStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_XML,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML" },
		{ "Comment", "/* XML file */" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "XML file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "StructToXML", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventStructToXML_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics
	{
		struct FileHelperBPLibrary_eventTakeScreenShot_Parms
		{
			FString Filename;
			FString Path;
			bool PrefixTimestamp;
			bool ShowUI;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_PrefixTimestamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrefixTimestamp;
		static void NewProp_ShowUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventTakeScreenShot_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventTakeScreenShot_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_PrefixTimestamp_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventTakeScreenShot_Parms*)Obj)->PrefixTimestamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_PrefixTimestamp = { "PrefixTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_PrefixTimestamp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ShowUI_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventTakeScreenShot_Parms*)Obj)->ShowUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ShowUI = { "ShowUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ShowUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventTakeScreenShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_PrefixTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ShowUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screenshot" },
		{ "CompactNodeTitle", "Screenshot" },
		{ "CPP_Default_PrefixTimestamp", "true" },
		{ "CPP_Default_ShowUI", "true" },
		{ "DisplayName", "TakeScreenshot" },
		{ "Keywords", "File plugin screenshot save image" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Take a screenshot and save" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "TakeScreenShot", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventTakeScreenShot_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics
	{
		struct FileHelperBPLibrary_eventValidateFilename_Parms
		{
			FString Filename;
			FString ValidName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValidName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventValidateFilename_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_ValidName = { "ValidName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventValidateFilename_Parms, ValidName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventValidateFilename_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventValidateFilename_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_ValidName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileSystem" },
		{ "CompactNodeTitle", "ValidateName" },
		{ "DisplayName", "ValidateFilename" },
		{ "Keywords", "File plugin validate path" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "Validate a filename to be used on this file system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "ValidateFilename", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventValidateFilename_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics
	{
		struct FileHelperBPLibrary_eventWriteConfig_Parms
		{
			FString FilePath;
			FString Section;
			FString Key;
			bool Success;
			bool SingleLineArrayWrite;
			const UStruct* Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static void NewProp_SingleLineArrayWrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SingleLineArrayWrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventWriteConfig_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventWriteConfig_Parms, Section), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventWriteConfig_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventWriteConfig_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventWriteConfig_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_SingleLineArrayWrite_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventWriteConfig_Parms*)Obj)->SingleLineArrayWrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_SingleLineArrayWrite = { "SingleLineArrayWrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventWriteConfig_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_SingleLineArrayWrite_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventWriteConfig_Parms, Value), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_SingleLineArrayWrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "WriteConfig", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventWriteConfig_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics
	{
		struct FileHelperBPLibrary_eventXMLToStruct_Parms
		{
			FString Xml;
			bool Success;
			UStruct* OutStruct;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Xml_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Xml;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Xml_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Xml = { "Xml", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventXMLToStruct_Parms, Xml), METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Xml_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Xml_MetaData)) };
	void Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FileHelperBPLibrary_eventXMLToStruct_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileHelperBPLibrary_eventXMLToStruct_Parms), &Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileHelperBPLibrary_eventXMLToStruct_Parms, OutStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Xml,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHelperBPLibrary, nullptr, "XMLToStruct", nullptr, nullptr, sizeof(FileHelperBPLibrary_eventXMLToStruct_Parms), Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileHelperBPLibrary_NoRegister()
	{
		return UFileHelperBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFileHelperBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileHelperBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileHelperBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_BytesFromBase64, "BytesFromBase64" }, // 4209219389
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_BytesToBase64, "BytesToBase64" }, // 1448702281
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_CopyDirectory, "CopyDirectory" }, // 2842490336
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_CopyFile, "CopyFile" }, // 3514462202
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_CSVToDataTable, "CSVToDataTable" }, // 1944253160
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_CSVToString, "CSVToString" }, // 374792953
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_DatatableToCSV, "DatatableToCSV" }, // 1839335134
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_DataTableToJSON, "DataTableToJSON" }, // 4051521719
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_GetEngineDirectories, "GetEngineDirectories" }, // 544100591
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_GetFileSize, "GetFileSize" }, // 135663025
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_GetPathParts, "GetPathParts" }, // 3290121794
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_GetProjectDirectories, "GetProjectDirectories" }, // 685199239
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_GetReadOnlyFlag, "GetReadOnlyFlag" }, // 663383389
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_IsDirectory, "IsDirectory" }, // 824804639
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_IsFile, "IsFile" }, // 1428103131
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_IsValidFilename, "IsValidFilename" }, // 1150419342
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_JSONToDataTable, "JSONToDataTable" }, // 866459073
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_JsonToStruct, "JsonToStruct" }, // 864978511
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ListDirectory, "ListDirectory" }, // 2832975486
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_LoadScreenshot, "LoadScreenshot" }, // 2416761771
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_MakeDirectory, "MakeDirectory" }, // 1046272436
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_MoveDirectory, "MoveDirectory" }, // 3538721493
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_MoveFile, "MoveFile" }, // 431911974
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_NodeStats, "NodeStats" }, // 1678887593
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ReadByte, "ReadByte" }, // 3913670928
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ReadConfig, "ReadConfig" }, // 3843134068
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ReadCSV, "ReadCSV" }, // 2483523221
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ReadLine, "ReadLine" }, // 3473781778
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ReadText, "ReadText" }, // 3825871665
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveConfig, "RemoveConfig" }, // 3144165462
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveDirectory, "RemoveDirectory" }, // 3480061603
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_RemoveFile, "RemoveFile" }, // 2832184521
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_RenameFile, "RenameFile" }, // 1311134906
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_SaveByte, "SaveByte" }, // 191026832
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_SaveCSV, "SaveCSV" }, // 4027193319
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_SaveLine, "SaveLine" }, // 2473733290
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_SaveText, "SaveText" }, // 529305135
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_SetReadOnlyFlag, "SetReadOnlyFlag" }, // 118449887
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_StringFromBase64, "StringFromBase64" }, // 4104330919
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_StringToBase64, "StringToBase64" }, // 1556466425
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_StringToCSV, "StringToCSV" }, // 455609021
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_StructToJson, "StructToJson" }, // 818737210
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_StructToXML, "StructToXML" }, // 1467577954
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_TakeScreenShot, "TakeScreenShot" }, // 269363789
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_ValidateFilename, "ValidateFilename" }, // 3090966175
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_WriteConfig, "WriteConfig" }, // 3996054416
		{ &Z_Construct_UFunction_UFileHelperBPLibrary_XMLToStruct, "XMLToStruct" }, // 1706521222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileHelperBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "FileHelperBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileHelperBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileHelperBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileHelperBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileHelperBPLibrary_Statics::ClassParams = {
		&UFileHelperBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileHelperBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileHelperBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileHelperBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileHelperBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileHelperBPLibrary, 1893974181);
	template<> FILEHELPER_API UClass* StaticClass<UFileHelperBPLibrary>()
	{
		return UFileHelperBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileHelperBPLibrary(Z_Construct_UClass_UFileHelperBPLibrary, &UFileHelperBPLibrary::StaticClass, TEXT("/Script/FileHelper"), TEXT("UFileHelperBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileHelperBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
