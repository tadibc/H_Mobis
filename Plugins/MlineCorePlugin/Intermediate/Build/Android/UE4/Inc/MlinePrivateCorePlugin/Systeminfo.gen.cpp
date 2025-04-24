// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlinePrivateCorePlugin/Public/Systeminfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSysteminfo() {}
// Cross Module References
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_ASysteminfo_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_ASysteminfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
// End Cross Module References
	DEFINE_FUNCTION(ASysteminfo::execFileLoadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pathAndFileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_saveTextA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ASysteminfo::FileLoadString(Z_Param_pathAndFileName,Z_Param_Out_saveTextA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execFileSaveString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_saveTextB);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileNameB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ASysteminfo::FileSaveString(Z_Param_saveTextB,Z_Param_fileNameB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execGetCurrentTimeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentTimeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execSystemInfoClipboardCopy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SystemInfoClipboardCopy(Z_Param_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execGetCPUCores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCPUCores();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execGetGPUBrandName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGPUBrandName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execGetCPUVendorName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPUVendorName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execGetCPUBrandName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPUBrandName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASysteminfo::execGetMachineID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMachineID();
		P_NATIVE_END;
	}
	void ASysteminfo::StaticRegisterNativesASysteminfo()
	{
		UClass* Class = ASysteminfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadString", &ASysteminfo::execFileLoadString },
			{ "FileSaveString", &ASysteminfo::execFileSaveString },
			{ "GetCPUBrandName", &ASysteminfo::execGetCPUBrandName },
			{ "GetCPUCores", &ASysteminfo::execGetCPUCores },
			{ "GetCPUVendorName", &ASysteminfo::execGetCPUVendorName },
			{ "GetCurrentTimeString", &ASysteminfo::execGetCurrentTimeString },
			{ "GetGPUBrandName", &ASysteminfo::execGetGPUBrandName },
			{ "GetMachineID", &ASysteminfo::execGetMachineID },
			{ "SystemInfoClipboardCopy", &ASysteminfo::execSystemInfoClipboardCopy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics
	{
		struct Systeminfo_eventFileLoadString_Parms
		{
			FString pathAndFileName;
			FString saveTextA;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathAndFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveTextA;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_pathAndFileName = { "pathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventFileLoadString_Parms, pathAndFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_saveTextA = { "saveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventFileLoadString_Parms, saveTextA), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Systeminfo_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Systeminfo_eventFileLoadString_Parms), &Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_pathAndFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_saveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "FileLoadString", nullptr, nullptr, sizeof(Systeminfo_eventFileLoadString_Parms), Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics
	{
		struct Systeminfo_eventFileSaveString_Parms
		{
			FString saveTextB;
			FString fileNameB;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveTextB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileNameB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_saveTextB = { "saveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventFileSaveString_Parms, saveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_fileNameB = { "fileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventFileSaveString_Parms, fileNameB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Systeminfo_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Systeminfo_eventFileSaveString_Parms), &Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_saveTextB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_fileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "FileSaveString", nullptr, nullptr, sizeof(Systeminfo_eventFileSaveString_Parms), Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics
	{
		struct Systeminfo_eventGetCPUBrandName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventGetCPUBrandName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "Get CPU Brand Name" },
		{ "Keywords", "CPU brand" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "GetCPUBrandName", nullptr, nullptr, sizeof(Systeminfo_eventGetCPUBrandName_Parms), Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_GetCPUBrandName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_GetCPUBrandName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics
	{
		struct Systeminfo_eventGetCPUCores_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventGetCPUCores_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "Get Number of CPU Cores" },
		{ "Keywords", "CPU cores" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "GetCPUCores", nullptr, nullptr, sizeof(Systeminfo_eventGetCPUCores_Parms), Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_GetCPUCores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_GetCPUCores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics
	{
		struct Systeminfo_eventGetCPUVendorName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventGetCPUVendorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "Get CPU Vendor Name" },
		{ "Keywords", "CPU vendor" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "GetCPUVendorName", nullptr, nullptr, sizeof(Systeminfo_eventGetCPUVendorName_Parms), Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_GetCPUVendorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_GetCPUVendorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics
	{
		struct Systeminfo_eventGetCurrentTimeString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventGetCurrentTimeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "GetCurrentTimeString" },
		{ "Keywords", "GetCurrentTimeString" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "GetCurrentTimeString", nullptr, nullptr, sizeof(Systeminfo_eventGetCurrentTimeString_Parms), Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics
	{
		struct Systeminfo_eventGetGPUBrandName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventGetGPUBrandName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "Get GPU Brand Name" },
		{ "Keywords", "GPU brand" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "GetGPUBrandName", nullptr, nullptr, sizeof(Systeminfo_eventGetGPUBrandName_Parms), Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_GetGPUBrandName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_GetGPUBrandName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics
	{
		struct Systeminfo_eventGetMachineID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventGetMachineID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "Get Machine ID" },
		{ "Keywords", "Machine ID" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "GetMachineID", nullptr, nullptr, sizeof(Systeminfo_eventGetMachineID_Parms), Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_GetMachineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_GetMachineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics
	{
		struct Systeminfo_eventSystemInfoClipboardCopy_Parms
		{
			FString str;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventSystemInfoClipboardCopy_Parms, str), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Systeminfo_eventSystemInfoClipboardCopy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::NewProp_str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "SystemInfo" },
		{ "DisplayName", "ClipboardCopy" },
		{ "Keywords", "ClipboardCopy" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASysteminfo, nullptr, "SystemInfoClipboardCopy", nullptr, nullptr, sizeof(Systeminfo_eventSystemInfoClipboardCopy_Parms), Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASysteminfo_NoRegister()
	{
		return ASysteminfo::StaticClass();
	}
	struct Z_Construct_UClass_ASysteminfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASysteminfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASysteminfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASysteminfo_FileLoadString, "FileLoadString" }, // 4141470155
		{ &Z_Construct_UFunction_ASysteminfo_FileSaveString, "FileSaveString" }, // 844744478
		{ &Z_Construct_UFunction_ASysteminfo_GetCPUBrandName, "GetCPUBrandName" }, // 2166297136
		{ &Z_Construct_UFunction_ASysteminfo_GetCPUCores, "GetCPUCores" }, // 3739566014
		{ &Z_Construct_UFunction_ASysteminfo_GetCPUVendorName, "GetCPUVendorName" }, // 3518595914
		{ &Z_Construct_UFunction_ASysteminfo_GetCurrentTimeString, "GetCurrentTimeString" }, // 3877109068
		{ &Z_Construct_UFunction_ASysteminfo_GetGPUBrandName, "GetGPUBrandName" }, // 2244671181
		{ &Z_Construct_UFunction_ASysteminfo_GetMachineID, "GetMachineID" }, // 2471359794
		{ &Z_Construct_UFunction_ASysteminfo_SystemInfoClipboardCopy, "SystemInfoClipboardCopy" }, // 2473801498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASysteminfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systeminfo.h" },
		{ "ModuleRelativePath", "Public/Systeminfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASysteminfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASysteminfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASysteminfo_Statics::ClassParams = {
		&ASysteminfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASysteminfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASysteminfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASysteminfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASysteminfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASysteminfo, 1549344279);
	template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<ASysteminfo>()
	{
		return ASysteminfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASysteminfo(Z_Construct_UClass_ASysteminfo, &ASysteminfo::StaticClass, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("ASysteminfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASysteminfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
