// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTAes/Public/DTAesLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTAesLib() {}
// Cross Module References
	DTAES_API UClass* Z_Construct_UClass_UDTAesLib_NoRegister();
	DTAES_API UClass* Z_Construct_UClass_UDTAesLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DTAes();
// End Cross Module References
	DEFINE_FUNCTION(UDTAesLib::execAESDecryptData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Output);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Input);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDTAesLib::AESDecryptData(Z_Param_Out_Output,Z_Param_Out_Input,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDTAesLib::execAESEncryptData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Output);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Input);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDTAesLib::AESEncryptData(Z_Param_Out_Output,Z_Param_Out_Input,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDTAesLib::execAESDecrypt)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
		P_GET_PROPERTY(FStrProperty,Z_Param_Base64);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDTAesLib::AESDecrypt(Z_Param_Out_String,Z_Param_Base64,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDTAesLib::execAESEncrypt)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Base64);
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDTAesLib::AESEncrypt(Z_Param_Out_Base64,Z_Param_String,Z_Param_Key);
		P_NATIVE_END;
	}
	void UDTAesLib::StaticRegisterNativesUDTAesLib()
	{
		UClass* Class = UDTAesLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AESDecrypt", &UDTAesLib::execAESDecrypt },
			{ "AESDecryptData", &UDTAesLib::execAESDecryptData },
			{ "AESEncrypt", &UDTAesLib::execAESEncrypt },
			{ "AESEncryptData", &UDTAesLib::execAESEncryptData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics
	{
		struct DTAesLib_eventAESDecrypt_Parms
		{
			FString String;
			FString Base64;
			FString Key;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base64_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESDecrypt_Parms, String), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Base64_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Base64 = { "Base64", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESDecrypt_Parms, Base64), METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Base64_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Base64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESDecrypt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Base64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT AES" },
		{ "Comment", "// AES Decrypt Of Base64 String \n// Character Set : UTF-8\n// Encryption Mode : ECB\n// Filling Method : Zeropadding\n" },
		{ "DisplayName", "AES Decrypt" },
		{ "ModuleRelativePath", "Public/DTAesLib.h" },
		{ "ToolTip", "AES Decrypt Of Base64 String\nCharacter Set : UTF-8\nEncryption Mode : ECB\nFilling Method : Zeropadding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTAesLib, nullptr, "AESDecrypt", nullptr, nullptr, sizeof(DTAesLib_eventAESDecrypt_Parms), Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDTAesLib_AESDecrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDTAesLib_AESDecrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics
	{
		struct DTAesLib_eventAESDecryptData_Parms
		{
			TArray<uint8> Output;
			TArray<uint8> Input;
			FString Key;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Output_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Output_Inner = { "Output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESDecryptData_Parms, Output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input_Inner = { "Input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESDecryptData_Parms, Input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESDecryptData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT AES" },
		{ "Comment", "// AES Decrypt Data\n// Encryption Mode : ECB\n// Filling Method : Zeropadding\n" },
		{ "DisplayName", "AES Decrypt ( Data )" },
		{ "ModuleRelativePath", "Public/DTAesLib.h" },
		{ "ToolTip", "AES Decrypt Data\nEncryption Mode : ECB\nFilling Method : Zeropadding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTAesLib, nullptr, "AESDecryptData", nullptr, nullptr, sizeof(DTAesLib_eventAESDecryptData_Parms), Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDTAesLib_AESDecryptData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDTAesLib_AESDecryptData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics
	{
		struct DTAesLib_eventAESEncrypt_Parms
		{
			FString Base64;
			FString String;
			FString Key;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Base64 = { "Base64", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESEncrypt_Parms, Base64), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESEncrypt_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESEncrypt_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Base64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT AES" },
		{ "Comment", "// AES Encrypt Of String\n// Character Set : UTF-8\n// Encryption Mode : ECB\n// Filling Method : Zeropadding\n" },
		{ "DisplayName", "AES Encrypt" },
		{ "ModuleRelativePath", "Public/DTAesLib.h" },
		{ "ToolTip", "AES Encrypt Of String\nCharacter Set : UTF-8\nEncryption Mode : ECB\nFilling Method : Zeropadding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTAesLib, nullptr, "AESEncrypt", nullptr, nullptr, sizeof(DTAesLib_eventAESEncrypt_Parms), Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDTAesLib_AESEncrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDTAesLib_AESEncrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics
	{
		struct DTAesLib_eventAESEncryptData_Parms
		{
			TArray<uint8> Output;
			TArray<uint8> Input;
			FString Key;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Output_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Output_Inner = { "Output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESEncryptData_Parms, Output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input_Inner = { "Input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESEncryptData_Parms, Input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DTAesLib_eventAESEncryptData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::Function_MetaDataParams[] = {
		{ "Category", "DT AES" },
		{ "Comment", "// AES Encrypt Data\n// Encryption Mode : ECB\n// Filling Method : Zeropadding\n" },
		{ "DisplayName", "AES Encrypt ( Data )" },
		{ "ModuleRelativePath", "Public/DTAesLib.h" },
		{ "ToolTip", "AES Encrypt Data\nEncryption Mode : ECB\nFilling Method : Zeropadding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTAesLib, nullptr, "AESEncryptData", nullptr, nullptr, sizeof(DTAesLib_eventAESEncryptData_Parms), Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDTAesLib_AESEncryptData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDTAesLib_AESEncryptData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDTAesLib_NoRegister()
	{
		return UDTAesLib::StaticClass();
	}
	struct Z_Construct_UClass_UDTAesLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDTAesLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DTAes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDTAesLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTAesLib_AESDecrypt, "AESDecrypt" }, // 1318289501
		{ &Z_Construct_UFunction_UDTAesLib_AESDecryptData, "AESDecryptData" }, // 2370773786
		{ &Z_Construct_UFunction_UDTAesLib_AESEncrypt, "AESEncrypt" }, // 4123925074
		{ &Z_Construct_UFunction_UDTAesLib_AESEncryptData, "AESEncryptData" }, // 796599101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDTAesLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DTAesLib.h" },
		{ "ModuleRelativePath", "Public/DTAesLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDTAesLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTAesLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDTAesLib_Statics::ClassParams = {
		&UDTAesLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDTAesLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDTAesLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDTAesLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDTAesLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDTAesLib, 2631683536);
	template<> DTAES_API UClass* StaticClass<UDTAesLib>()
	{
		return UDTAesLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDTAesLib(Z_Construct_UClass_UDTAesLib, &UDTAesLib::StaticClass, TEXT("/Script/DTAes"), TEXT("UDTAesLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDTAesLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
