// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Public/BleUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleUtils() {}
// Cross Module References
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleUtils_NoRegister();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BleGoodies();
	BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBleUtils::execIsUUIDValid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBleUtils::IsUUIDValid(Z_Param_UUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBleUtils::execHexToUUIDs)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_HexStrings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UBleUtils::HexToUUIDs(Z_Param_Out_HexStrings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBleUtils::execHexToUUID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBleUtils::HexToUUID(Z_Param_HexString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBleUtils::execConvertBytesToHexString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBleUtils::ConvertBytesToHexString(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBleUtils::execCreateBleManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IBleManagerInterface>*)Z_Param__Result=UBleUtils::CreateBleManager();
		P_NATIVE_END;
	}
	void UBleUtils::StaticRegisterNativesUBleUtils()
	{
		UClass* Class = UBleUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertBytesToHexString", &UBleUtils::execConvertBytesToHexString },
			{ "CreateBleManager", &UBleUtils::execCreateBleManager },
			{ "HexToUUID", &UBleUtils::execHexToUUID },
			{ "HexToUUIDs", &UBleUtils::execHexToUUIDs },
			{ "IsUUIDValid", &UBleUtils::execIsUUIDValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics
	{
		struct BleUtils_eventConvertBytesToHexString_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventConvertBytesToHexString_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventConvertBytesToHexString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09 * Convert an array of bytes to a hex string\n\x09 *\n\x09 * @return - Hex string representing array of bytes\n\x09 */" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Convert an array of bytes to a hex string\n\n@return - Hex string representing array of bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "ConvertBytesToHexString", nullptr, nullptr, sizeof(BleUtils_eventConvertBytesToHexString_Parms), Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics
	{
		struct BleUtils_eventCreateBleManager_Parms
		{
			TScriptInterface<IBleManagerInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventCreateBleManager_Parms, ReturnValue), Z_Construct_UClass_UBleManagerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Create a BLE Manager\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Create a BLE Manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "CreateBleManager", nullptr, nullptr, sizeof(BleUtils_eventCreateBleManager_Parms), Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleUtils_CreateBleManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleUtils_HexToUUID_Statics
	{
		struct BleUtils_eventHexToUUID_Parms
		{
			FString HexString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventHexToUUID_Parms, HexString), METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventHexToUUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Parse a 16 bit hex value into a UUID string\n\x09*\n\x09* @return - UUID string\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Parse a 16 bit hex value into a UUID string\n\n@return - UUID string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "HexToUUID", nullptr, nullptr, sizeof(BleUtils_eventHexToUUID_Parms), Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleUtils_HexToUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics
	{
		struct BleUtils_eventHexToUUIDs_Parms
		{
			TArray<FString> HexStrings;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexStrings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HexStrings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_Inner = { "HexStrings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings = { "HexStrings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventHexToUUIDs_Parms, HexStrings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventHexToUUIDs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Parse an array of 16 bit hex values into an array of UUID strings\n\x09*\n\x09* @return - Array of UUID strings\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Parse an array of 16 bit hex values into an array of UUID strings\n\n@return - Array of UUID strings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "HexToUUIDs", nullptr, nullptr, sizeof(BleUtils_eventHexToUUIDs_Parms), Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleUtils_HexToUUIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics
	{
		struct BleUtils_eventIsUUIDValid_Parms
		{
			FString UUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BleUtils_eventIsUUIDValid_Parms, UUID), METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID_MetaData)) };
	void Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BleUtils_eventIsUUIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BleUtils_eventIsUUIDValid_Parms), &Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if a provided UUID is a valid fully qualified UUID in the format XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX\n\x09* This will return false for short hex UUIDs.\n\x09*\n\x09* @return - True if the UUID string is valid, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Check if a provided UUID is a valid fully qualified UUID in the format XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX\nThis will return false for short hex UUIDs.\n\n@return - True if the UUID string is valid, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "IsUUIDValid", nullptr, nullptr, sizeof(BleUtils_eventIsUUIDValid_Parms), Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBleUtils_IsUUIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBleUtils_NoRegister()
	{
		return UBleUtils::StaticClass();
	}
	struct Z_Construct_UClass_UBleUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBleUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBleUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString, "ConvertBytesToHexString" }, // 3747130576
		{ &Z_Construct_UFunction_UBleUtils_CreateBleManager, "CreateBleManager" }, // 534531637
		{ &Z_Construct_UFunction_UBleUtils_HexToUUID, "HexToUUID" }, // 3111145050
		{ &Z_Construct_UFunction_UBleUtils_HexToUUIDs, "HexToUUIDs" }, // 3543255098
		{ &Z_Construct_UFunction_UBleUtils_IsUUIDValid, "IsUUIDValid" }, // 347485231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBleUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BleUtils.h" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBleUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBleUtils_Statics::ClassParams = {
		&UBleUtils::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBleUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBleUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBleUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBleUtils, 4156306914);
	template<> BLEGOODIES_API UClass* StaticClass<UBleUtils>()
	{
		return UBleUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBleUtils(Z_Construct_UClass_UBleUtils, &UBleUtils::StaticClass, TEXT("/Script/BleGoodies"), TEXT("UBleUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBleUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
