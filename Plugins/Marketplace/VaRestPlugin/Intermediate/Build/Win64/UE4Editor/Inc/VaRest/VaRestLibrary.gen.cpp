// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestLibrary() {}
// Cross Module References
	VAREST_API UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VAREST_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestURL();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode();
// End Cross Module References
	DEFINE_FUNCTION(UVaRestLibrary::execGetWorldURL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVaRestURL*)Z_Param__Result=UVaRestLibrary::GetWorldURL(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execGetVaRestVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVaRestLibrary::GetVaRestVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execHTTPStatusIntToEnum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EVaRestHttpStatusCode::Type>*)Z_Param__Result=UVaRestLibrary::HTTPStatusIntToEnum(Z_Param_StatusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execStringToSha1)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToHash);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVaRestLibrary::StringToSha1(Z_Param_StringToHash);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execStringToMd5)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToHash);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVaRestLibrary::StringToMd5(Z_Param_StringToHash);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execBase64DecodeData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64DecodeData(Z_Param_Source,Z_Param_Out_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execBase64EncodeData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64EncodeData(Z_Param_Out_Data,Z_Param_Out_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execBase64Decode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVaRestLibrary::Base64Decode(Z_Param_Source,Z_Param_Out_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execBase64Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVaRestLibrary::Base64Encode(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execPercentEncode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVaRestLibrary::PercentEncode(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestLibrary::execGetVaRestSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestSettings**)Z_Param__Result=UVaRestLibrary::GetVaRestSettings();
		P_NATIVE_END;
	}
	void UVaRestLibrary::StaticRegisterNativesUVaRestLibrary()
	{
		UClass* Class = UVaRestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Base64Decode", &UVaRestLibrary::execBase64Decode },
			{ "Base64DecodeData", &UVaRestLibrary::execBase64DecodeData },
			{ "Base64Encode", &UVaRestLibrary::execBase64Encode },
			{ "Base64EncodeData", &UVaRestLibrary::execBase64EncodeData },
			{ "GetVaRestSettings", &UVaRestLibrary::execGetVaRestSettings },
			{ "GetVaRestVersion", &UVaRestLibrary::execGetVaRestVersion },
			{ "GetWorldURL", &UVaRestLibrary::execGetWorldURL },
			{ "HTTPStatusIntToEnum", &UVaRestLibrary::execHTTPStatusIntToEnum },
			{ "PercentEncode", &UVaRestLibrary::execPercentEncode },
			{ "StringToMd5", &UVaRestLibrary::execStringToMd5 },
			{ "StringToSha1", &UVaRestLibrary::execStringToSha1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics
	{
		struct VaRestLibrary_eventBase64Decode_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestLibrary_eventBase64Decode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestLibrary_eventBase64Decode_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Decodes a Base64 string into a FString\n\x09 *\n\x09 * @param Source\x09The stringified data to convert\n\x09 * @param Dest\x09\x09The out buffer that will be filled with the decoded data\n\x09 * @return\x09\x09\x09True if the buffer was decoded, false if it failed to decode\n\x09 */" },
		{ "DisplayName", "Base64 Decode" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Decodes a Base64 string into a FString\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64Decode", nullptr, nullptr, sizeof(VaRestLibrary_eventBase64Decode_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics
	{
		struct VaRestLibrary_eventBase64DecodeData_Parms
		{
			FString Source;
			TArray<uint8> Dest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Dest_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest_Inner = { "Dest", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Dest), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestLibrary_eventBase64DecodeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestLibrary_eventBase64DecodeData_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Decodes a Base64 string into a byte array\n\x09 *\n\x09 * @param Source\x09The stringified data to convert\n\x09 * @param Dest\x09\x09The out buffer that will be filled with the decoded data\n\x09 * @return\x09\x09\x09True if the buffer was decoded, false if it failed to decode\n\x09 */" },
		{ "DisplayName", "Base64 Decode Data" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Decodes a Base64 string into a byte array\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64DecodeData", nullptr, nullptr, sizeof(VaRestLibrary_eventBase64DecodeData_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics
	{
		struct VaRestLibrary_eventBase64Encode_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Encodes a FString into a Base64 string\n\x09 *\n\x09 * @param Source\x09The string data to convert\n\x09 * @return\x09\x09\x09""A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols\n\x09 */" },
		{ "DisplayName", "Base64 Encode" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Encodes a FString into a Base64 string\n\n@param Source        The string data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64Encode", nullptr, nullptr, sizeof(VaRestLibrary_eventBase64Encode_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics
	{
		struct VaRestLibrary_eventBase64EncodeData_Parms
		{
			TArray<uint8> Data;
			FString Dest;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestLibrary_eventBase64EncodeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestLibrary_eventBase64EncodeData_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Encodes a byte array into a Base64 string\n\x09 *\n\x09 * @param Dara\x09\x09The data to convert\n\x09 * @return\x09\x09\x09""A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols\n\x09 */" },
		{ "DisplayName", "Base64 Encode Data" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Encodes a byte array into a Base64 string\n\n@param Dara          The data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64EncodeData", nullptr, nullptr, sizeof(VaRestLibrary_eventBase64EncodeData_Parms), Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics
	{
		struct VaRestLibrary_eventGetVaRestSettings_Parms
		{
			UVaRestSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventGetVaRestSettings_Parms, ReturnValue), Z_Construct_UClass_UVaRestSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Common" },
		{ "Comment", "/** Direct access to the plugin settings */" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Direct access to the plugin settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "GetVaRestSettings", nullptr, nullptr, sizeof(VaRestLibrary_eventGetVaRestSettings_Parms), Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics
	{
		struct VaRestLibrary_eventGetVaRestVersion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventGetVaRestVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Get the plugin's version\n\x09 */" },
		{ "DisplayName", "Get VaRest Version" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Get the plugin's version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "GetVaRestVersion", nullptr, nullptr, sizeof(VaRestLibrary_eventGetVaRestVersion_Parms), Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics
	{
		struct VaRestLibrary_eventGetWorldURL_Parms
		{
			UObject* WorldContextObject;
			FVaRestURL ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventGetWorldURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventGetWorldURL_Parms, ReturnValue), Z_Construct_UScriptStruct_FVaRestURL, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Get the URL that was used when loading this World\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Get the URL that was used when loading this World" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "GetWorldURL", nullptr, nullptr, sizeof(VaRestLibrary_eventGetWorldURL_Parms), Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_GetWorldURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics
	{
		struct VaRestLibrary_eventHTTPStatusIntToEnum_Parms
		{
			int32 StatusCode;
			TEnumAsByte<EVaRestHttpStatusCode::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventHTTPStatusIntToEnum_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventHTTPStatusIntToEnum_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Helper method to convert a status code from HTTP to an enum for easier readability\n\x09 */" },
		{ "DisplayName", "HTTP Status Int To Enum" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Helper method to convert a status code from HTTP to an enum for easier readability" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "HTTPStatusIntToEnum", nullptr, nullptr, sizeof(VaRestLibrary_eventHTTPStatusIntToEnum_Parms), Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics
	{
		struct VaRestLibrary_eventPercentEncode_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Applies percent-encoding to text */" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Applies percent-encoding to text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "PercentEncode", nullptr, nullptr, sizeof(VaRestLibrary_eventPercentEncode_Parms), Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_PercentEncode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics
	{
		struct VaRestLibrary_eventStringToMd5_Parms
		{
			FString StringToHash;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToHash;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash = { "StringToHash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToMd5_Parms, StringToHash), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToMd5_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Helper to perform the very common case of hashing an ASCII string into a hex representation.\n\x09 *\n\x09 * @param String\x09Hex representation of the hash (32 lower-case hex digits)\n\x09 */" },
		{ "DisplayName", "String to MD5" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Helper to perform the very common case of hashing an ASCII string into a hex representation.\n\n@param String        Hex representation of the hash (32 lower-case hex digits)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "StringToMd5", nullptr, nullptr, sizeof(VaRestLibrary_eventStringToMd5_Parms), Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_StringToMd5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics
	{
		struct VaRestLibrary_eventStringToSha1_Parms
		{
			FString StringToHash;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringToHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToHash;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash = { "StringToHash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToSha1_Parms, StringToHash), METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToSha1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Helper to perform the SHA1 hash operation on string.\n\x09 */" },
		{ "DisplayName", "String to SHA1" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Helper to perform the SHA1 hash operation on string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "StringToSha1", nullptr, nullptr, sizeof(VaRestLibrary_eventStringToSha1_Parms), Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestLibrary_StringToSha1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister()
	{
		return UVaRestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64Decode, "Base64Decode" }, // 2053445209
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData, "Base64DecodeData" }, // 4080989157
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64Encode, "Base64Encode" }, // 2027149379
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData, "Base64EncodeData" }, // 2602562310
		{ &Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings, "GetVaRestSettings" }, // 3626143483
		{ &Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion, "GetVaRestVersion" }, // 2570078392
		{ &Z_Construct_UFunction_UVaRestLibrary_GetWorldURL, "GetWorldURL" }, // 2434718469
		{ &Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum, "HTTPStatusIntToEnum" }, // 1183739489
		{ &Z_Construct_UFunction_UVaRestLibrary_PercentEncode, "PercentEncode" }, // 2767246401
		{ &Z_Construct_UFunction_UVaRestLibrary_StringToMd5, "StringToMd5" }, // 472466118
		{ &Z_Construct_UFunction_UVaRestLibrary_StringToSha1, "StringToSha1" }, // 2135252580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Useful tools for REST communications\n */" },
		{ "IncludePath", "VaRestLibrary.h" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
		{ "ToolTip", "Useful tools for REST communications" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestLibrary_Statics::ClassParams = {
		&UVaRestLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestLibrary, 1577884614);
	template<> VAREST_API UClass* StaticClass<UVaRestLibrary>()
	{
		return UVaRestLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestLibrary(Z_Construct_UClass_UVaRestLibrary, &UVaRestLibrary::StaticClass, TEXT("/Script/VaRest"), TEXT("UVaRestLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
