// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestJsonObject() {}
// Cross Module References
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVaRestJsonObject::execWriteToFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_bIsRelativeToProjectDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteToFilePath(Z_Param_Path,Z_Param_bIsRelativeToProjectDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetObjectArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(UVaRestJsonObject*,Z_Param_Out_ObjectArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetObjectArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVaRestJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetBoolArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetBoolArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetStringArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetNumberArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetIntegerArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetNumberArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetMapFields_bool)
	{
		P_GET_TMAP_REF(FString,bool,Z_Param_Out_Fields);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapFields_bool(Z_Param_Out_Fields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetMapFields_int64)
	{
		P_GET_TMAP_REF(FString,int64,Z_Param_Out_Fields);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapFields_int64(Z_Param_Out_Fields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetMapFields_int32)
	{
		P_GET_TMAP_REF(FString,int32,Z_Param_Out_Fields);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapFields_int32(Z_Param_Out_Fields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetMapFields_uint8)
	{
		P_GET_TMAP_REF(FString,uint8,Z_Param_Out_Fields);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapFields_uint8(Z_Param_Out_Fields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetMapFields_string)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Fields);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapFields_string(Z_Param_Out_Fields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetInt64Field)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FInt64Property,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInt64Field(Z_Param_FieldName,Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetInt64Field)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetInt64Field(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetIntegerField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntegerField(Z_Param_FieldName,Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetIntegerField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntegerField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetNumberField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execMergeJsonObject)
	{
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_InJsonObject);
		P_GET_UBOOL(Z_Param_Overwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_InArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execSetField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UVaRestJsonValue,Z_Param_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execRemoveField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execHasField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execGetFieldNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execDecodeJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_UBOOL(Z_Param_bUseIncrementalParser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString,Z_Param_bUseIncrementalParser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execEncodeJsonToSingleString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->EncodeJsonToSingleString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execEncodeJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->EncodeJson();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonObject::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UVaRestJsonObject::StaticRegisterNativesUVaRestJsonObject()
	{
		UClass* Class = UVaRestJsonObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecodeJson", &UVaRestJsonObject::execDecodeJson },
			{ "EncodeJson", &UVaRestJsonObject::execEncodeJson },
			{ "EncodeJsonToSingleString", &UVaRestJsonObject::execEncodeJsonToSingleString },
			{ "GetArrayField", &UVaRestJsonObject::execGetArrayField },
			{ "GetBoolArrayField", &UVaRestJsonObject::execGetBoolArrayField },
			{ "GetBoolField", &UVaRestJsonObject::execGetBoolField },
			{ "GetField", &UVaRestJsonObject::execGetField },
			{ "GetFieldNames", &UVaRestJsonObject::execGetFieldNames },
			{ "GetInt64Field", &UVaRestJsonObject::execGetInt64Field },
			{ "GetIntegerArrayField", &UVaRestJsonObject::execGetIntegerArrayField },
			{ "GetIntegerField", &UVaRestJsonObject::execGetIntegerField },
			{ "GetNumberArrayField", &UVaRestJsonObject::execGetNumberArrayField },
			{ "GetNumberField", &UVaRestJsonObject::execGetNumberField },
			{ "GetObjectArrayField", &UVaRestJsonObject::execGetObjectArrayField },
			{ "GetObjectField", &UVaRestJsonObject::execGetObjectField },
			{ "GetStringArrayField", &UVaRestJsonObject::execGetStringArrayField },
			{ "GetStringField", &UVaRestJsonObject::execGetStringField },
			{ "HasField", &UVaRestJsonObject::execHasField },
			{ "MergeJsonObject", &UVaRestJsonObject::execMergeJsonObject },
			{ "RemoveField", &UVaRestJsonObject::execRemoveField },
			{ "Reset", &UVaRestJsonObject::execReset },
			{ "SetArrayField", &UVaRestJsonObject::execSetArrayField },
			{ "SetBoolArrayField", &UVaRestJsonObject::execSetBoolArrayField },
			{ "SetBoolField", &UVaRestJsonObject::execSetBoolField },
			{ "SetField", &UVaRestJsonObject::execSetField },
			{ "SetInt64Field", &UVaRestJsonObject::execSetInt64Field },
			{ "SetIntegerField", &UVaRestJsonObject::execSetIntegerField },
			{ "SetMapFields_bool", &UVaRestJsonObject::execSetMapFields_bool },
			{ "SetMapFields_int32", &UVaRestJsonObject::execSetMapFields_int32 },
			{ "SetMapFields_int64", &UVaRestJsonObject::execSetMapFields_int64 },
			{ "SetMapFields_string", &UVaRestJsonObject::execSetMapFields_string },
			{ "SetMapFields_uint8", &UVaRestJsonObject::execSetMapFields_uint8 },
			{ "SetNumberArrayField", &UVaRestJsonObject::execSetNumberArrayField },
			{ "SetNumberField", &UVaRestJsonObject::execSetNumberField },
			{ "SetObjectArrayField", &UVaRestJsonObject::execSetObjectArrayField },
			{ "SetObjectField", &UVaRestJsonObject::execSetObjectField },
			{ "SetStringArrayField", &UVaRestJsonObject::execSetStringArrayField },
			{ "SetStringField", &UVaRestJsonObject::execSetStringField },
			{ "WriteToFilePath", &UVaRestJsonObject::execWriteToFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics
	{
		struct VaRestJsonObject_eventDecodeJson_Parms
		{
			FString JsonString;
			bool bUseIncrementalParser;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static void NewProp_bUseIncrementalParser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIncrementalParser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventDecodeJson_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_JsonString_MetaData)) };
	void Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_bUseIncrementalParser_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventDecodeJson_Parms*)Obj)->bUseIncrementalParser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_bUseIncrementalParser = { "bUseIncrementalParser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventDecodeJson_Parms), &Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_bUseIncrementalParser_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventDecodeJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventDecodeJson_Parms), &Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_bUseIncrementalParser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Construct Json object from string */" },
		{ "CPP_Default_bUseIncrementalParser", "true" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Construct Json object from string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "DecodeJson", nullptr, nullptr, sizeof(VaRestJsonObject_eventDecodeJson_Parms), Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_DecodeJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_DecodeJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics
	{
		struct VaRestJsonObject_eventEncodeJson_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventEncodeJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Serialize Json to string (formatted with line breaks) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Serialize Json to string (formatted with line breaks)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "EncodeJson", nullptr, nullptr, sizeof(VaRestJsonObject_eventEncodeJson_Parms), Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_EncodeJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_EncodeJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics
	{
		struct VaRestJsonObject_eventEncodeJsonToSingleString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventEncodeJsonToSingleString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Serialize Json to string (single string without line breaks) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Serialize Json to string (single string without line breaks)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "EncodeJsonToSingleString", nullptr, nullptr, sizeof(VaRestJsonObject_eventEncodeJsonToSingleString_Parms), Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics
	{
		struct VaRestJsonObject_eventGetArrayField_Parms
		{
			FString FieldName;
			TArray<UVaRestJsonValue*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a Json Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a Json Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics
	{
		struct VaRestJsonObject_eventGetBoolArrayField_Parms
		{
			FString FieldName;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetBoolArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetBoolArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetBoolArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetBoolArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics
	{
		struct VaRestJsonObject_eventGetBoolField_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventGetBoolField_Parms), &Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a boolean. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a boolean." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetBoolField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetBoolField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics
	{
		struct VaRestJsonObject_eventGetField_Parms
		{
			FString FieldName;
			UVaRestJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetField_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a JsonValue */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a JsonValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics
	{
		struct VaRestJsonObject_eventGetFieldNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns a list of field names that exist in the object */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Returns a list of field names that exist in the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetFieldNames", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetFieldNames_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics
	{
		struct VaRestJsonObject_eventGetInt64Field_Parms
		{
			FString FieldName;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetInt64Field_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetInt64Field_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as an Int64. Ensures that the field is present and is of type Json number. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as an Int64. Ensures that the field is present and is of type Json number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetInt64Field", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetInt64Field_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics
	{
		struct VaRestJsonObject_eventGetIntegerArrayField_Parms
		{
			FString FieldName;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetIntegerArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetIntegerArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetIntegerArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetIntegerArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics
	{
		struct VaRestJsonObject_eventGetIntegerField_Parms
		{
			FString FieldName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetIntegerField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetIntegerField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as an Integer. Ensures that the field is present and is of type Json number. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as an Integer. Ensures that the field is present and is of type Json number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetIntegerField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetIntegerField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics
	{
		struct VaRestJsonObject_eventGetNumberArrayField_Parms
		{
			FString FieldName;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetNumberArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetNumberArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetNumberArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics
	{
		struct VaRestJsonObject_eventGetNumberField_Parms
		{
			FString FieldName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetNumberField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetNumberField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics
	{
		struct VaRestJsonObject_eventGetObjectArrayField_Parms
		{
			FString FieldName;
			TArray<UVaRestJsonObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetObjectArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetObjectArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetObjectArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetObjectArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics
	{
		struct VaRestJsonObject_eventGetObjectField_Parms
		{
			FString FieldName;
			UVaRestJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetObjectField_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a Json object. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a Json object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetObjectField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetObjectField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics
	{
		struct VaRestJsonObject_eventGetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetStringArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetStringArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetStringArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics
	{
		struct VaRestJsonObject_eventGetStringField_Parms
		{
			FString FieldName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get the field named FieldName as a string. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Get the field named FieldName as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "GetStringField", nullptr, nullptr, sizeof(VaRestJsonObject_eventGetStringField_Parms), Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics
	{
		struct VaRestJsonObject_eventHasField_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventHasField_Parms), &Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Checks to see if the FieldName exists in the object */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Checks to see if the FieldName exists in the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "HasField", nullptr, nullptr, sizeof(VaRestJsonObject_eventHasField_Parms), Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics
	{
		struct VaRestJsonObject_eventMergeJsonObject_Parms
		{
			UVaRestJsonObject* InJsonObject;
			bool Overwrite;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InJsonObject;
		static void NewProp_Overwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Overwrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject = { "InJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventMergeJsonObject_Parms, InJsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventMergeJsonObject_Parms*)Obj)->Overwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::NewProp_Overwrite = { "Overwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventMergeJsonObject_Parms), &Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::NewProp_Overwrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Adds all of the fields from one json object to this one */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Adds all of the fields from one json object to this one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "MergeJsonObject", nullptr, nullptr, sizeof(VaRestJsonObject_eventMergeJsonObject_Parms), Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics
	{
		struct VaRestJsonObject_eventRemoveField_Parms
		{
			FString FieldName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventRemoveField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Remove field named FieldName */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Remove field named FieldName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "RemoveField", nullptr, nullptr, sizeof(VaRestJsonObject_eventRemoveField_Parms), Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_RemoveField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_RemoveField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Reset all internal data */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Reset all internal data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics
	{
		struct VaRestJsonObject_eventSetArrayField_Parms
		{
			FString FieldName;
			TArray<UVaRestJsonValue*> InArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetArrayField_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::NewProp_InArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set an ObjectField named FieldName and value of Json Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of Json Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics
	{
		struct VaRestJsonObject_eventSetBoolArrayField_Parms
		{
			FString FieldName;
			TArray<bool> BoolArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetBoolArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetBoolArrayField_Parms, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set an ObjectField named FieldName and value of Bool Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of Bool Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetBoolArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetBoolArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics
	{
		struct VaRestJsonObject_eventSetBoolField_Parms
		{
			FString FieldName;
			bool InValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventSetBoolField_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventSetBoolField_Parms), &Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set a boolean field named FieldName and value of InValue */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set a boolean field named FieldName and value of InValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetBoolField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetBoolField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics
	{
		struct VaRestJsonObject_eventSetField_Parms
		{
			FString FieldName;
			UVaRestJsonValue* JsonValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetField_Parms, JsonValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::NewProp_JsonValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Add a field named FieldName with a Value */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Add a field named FieldName with a Value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics
	{
		struct VaRestJsonObject_eventSetInt64Field_Parms
		{
			FString FieldName;
			int64 Number;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetInt64Field_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetInt64Field_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Add a field named FieldName with Int64 as value. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Add a field named FieldName with Int64 as value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetInt64Field", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetInt64Field_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics
	{
		struct VaRestJsonObject_eventSetIntegerField_Parms
		{
			FString FieldName;
			int32 Number;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetIntegerField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetIntegerField_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Add a field named FieldName with Integer as value. */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Add a field named FieldName with Integer as value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetIntegerField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetIntegerField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics
	{
		struct VaRestJsonObject_eventSetMapFields_bool_Parms
		{
			TMap<FString,bool> Fields;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fields_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetMapFields_bool_Parms, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::NewProp_Fields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set a map of fields with bool values */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set a map of fields with bool values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetMapFields_bool", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetMapFields_bool_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics
	{
		struct VaRestJsonObject_eventSetMapFields_int32_Parms
		{
			TMap<FString,int32> Fields;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Fields_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetMapFields_int32_Parms, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::NewProp_Fields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set a map of fields with int32 values */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set a map of fields with int32 values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetMapFields_int32", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetMapFields_int32_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics
	{
		struct VaRestJsonObject_eventSetMapFields_int64_Parms
		{
			TMap<FString,int64> Fields;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Fields_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetMapFields_int64_Parms, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::NewProp_Fields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set a map of fields with int64 values */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set a map of fields with int64 values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetMapFields_int64", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetMapFields_int64_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics
	{
		struct VaRestJsonObject_eventSetMapFields_string_Parms
		{
			TMap<FString,FString> Fields;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetMapFields_string_Parms, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::NewProp_Fields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set a map of fields with String values */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set a map of fields with String values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetMapFields_string", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetMapFields_string_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics
	{
		struct VaRestJsonObject_eventSetMapFields_uint8_Parms
		{
			TMap<FString,uint8> Fields;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fields_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetMapFields_uint8_Parms, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::NewProp_Fields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set a map of fields with uint8 values */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set a map of fields with uint8 values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetMapFields_uint8", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetMapFields_uint8_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics
	{
		struct VaRestJsonObject_eventSetNumberArrayField_Parms
		{
			FString FieldName;
			TArray<float> NumberArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumberArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NumberArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetNumberArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner = { "NumberArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray = { "NumberArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetNumberArrayField_Parms, NumberArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set an ObjectField named FieldName and value of Number Array\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of Number Array\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetNumberArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetNumberArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics
	{
		struct VaRestJsonObject_eventSetNumberField_Parms
		{
			FString FieldName;
			float Number;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetNumberField_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Add a field named FieldName with Number as value\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Add a field named FieldName with Number as value\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetNumberField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetNumberField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics
	{
		struct VaRestJsonObject_eventSetObjectArrayField_Parms
		{
			FString FieldName;
			TArray<UVaRestJsonObject*> ObjectArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetObjectArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetObjectArrayField_Parms, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set an ObjectField named FieldName and value of Ob Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of Ob Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetObjectArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetObjectArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics
	{
		struct VaRestJsonObject_eventSetObjectField_Parms
		{
			FString FieldName;
			UVaRestJsonObject* JsonObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetObjectField_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set an ObjectField named FieldName and value of JsonObject */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of JsonObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetObjectField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetObjectField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics
	{
		struct VaRestJsonObject_eventSetStringArrayField_Parms
		{
			FString FieldName;
			TArray<FString> StringArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetStringArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetStringArrayField_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::NewProp_StringArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Set an ObjectField named FieldName and value of String Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Set an ObjectField named FieldName and value of String Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetStringArrayField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetStringArrayField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics
	{
		struct VaRestJsonObject_eventSetStringField_Parms
		{
			FString FieldName;
			FString StringValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventSetStringField_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::NewProp_StringValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Add a field named FieldName with value of StringValue */" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Add a field named FieldName with value of StringValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "SetStringField", nullptr, nullptr, sizeof(VaRestJsonObject_eventSetStringField_Parms), Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics
	{
		struct VaRestJsonObject_eventWriteToFilePath_Parms
		{
			FString Path;
			bool bIsRelativeToProjectDir;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRelativeToProjectDir_MetaData[];
#endif
		static void NewProp_bIsRelativeToProjectDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRelativeToProjectDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonObject_eventWriteToFilePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventWriteToFilePath_Parms*)Obj)->bIsRelativeToProjectDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir = { "bIsRelativeToProjectDir", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventWriteToFilePath_Parms), &Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir_MetaData)) };
	void Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonObject_eventWriteToFilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonObject_eventWriteToFilePath_Parms), &Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_bIsRelativeToProjectDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/**\n\x09 * Blueprint Save json to filepath \n\x09 *\n\x09 * @param bIsRelativeToProjectDir If set to 'false' path is treated as absolute\n\x09 */" },
		{ "CPP_Default_bIsRelativeToProjectDir", "true" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Blueprint Save json to filepath\n\n@param bIsRelativeToProjectDir If set to 'false' path is treated as absolute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonObject, nullptr, "WriteToFilePath", nullptr, nullptr, sizeof(VaRestJsonObject_eventWriteToFilePath_Parms), Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister()
	{
		return UVaRestJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestJsonObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestJsonObject_DecodeJson, "DecodeJson" }, // 2644386237
		{ &Z_Construct_UFunction_UVaRestJsonObject_EncodeJson, "EncodeJson" }, // 3409333494
		{ &Z_Construct_UFunction_UVaRestJsonObject_EncodeJsonToSingleString, "EncodeJsonToSingleString" }, // 1848764288
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetArrayField, "GetArrayField" }, // 1579846132
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetBoolArrayField, "GetBoolArrayField" }, // 352950711
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetBoolField, "GetBoolField" }, // 1696445411
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetField, "GetField" }, // 1892087669
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetFieldNames, "GetFieldNames" }, // 4128873237
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetInt64Field, "GetInt64Field" }, // 1836892338
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetIntegerArrayField, "GetIntegerArrayField" }, // 511313307
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetIntegerField, "GetIntegerField" }, // 1301229008
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetNumberArrayField, "GetNumberArrayField" }, // 3597711441
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetNumberField, "GetNumberField" }, // 852882942
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetObjectArrayField, "GetObjectArrayField" }, // 1743341847
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetObjectField, "GetObjectField" }, // 3902041514
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetStringArrayField, "GetStringArrayField" }, // 4238163770
		{ &Z_Construct_UFunction_UVaRestJsonObject_GetStringField, "GetStringField" }, // 3121084478
		{ &Z_Construct_UFunction_UVaRestJsonObject_HasField, "HasField" }, // 4266062072
		{ &Z_Construct_UFunction_UVaRestJsonObject_MergeJsonObject, "MergeJsonObject" }, // 2305190560
		{ &Z_Construct_UFunction_UVaRestJsonObject_RemoveField, "RemoveField" }, // 2820824148
		{ &Z_Construct_UFunction_UVaRestJsonObject_Reset, "Reset" }, // 2422743935
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetArrayField, "SetArrayField" }, // 4206523784
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetBoolArrayField, "SetBoolArrayField" }, // 476708359
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetBoolField, "SetBoolField" }, // 3166363042
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetField, "SetField" }, // 1461789749
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetInt64Field, "SetInt64Field" }, // 3941247937
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetIntegerField, "SetIntegerField" }, // 4213998010
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_bool, "SetMapFields_bool" }, // 3931574662
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int32, "SetMapFields_int32" }, // 3085842259
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_int64, "SetMapFields_int64" }, // 1103261452
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_string, "SetMapFields_string" }, // 1274092167
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetMapFields_uint8, "SetMapFields_uint8" }, // 2922439182
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetNumberArrayField, "SetNumberArrayField" }, // 4237660083
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetNumberField, "SetNumberField" }, // 2062994941
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetObjectArrayField, "SetObjectArrayField" }, // 1674888622
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetObjectField, "SetObjectField" }, // 226145643
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetStringArrayField, "SetStringArrayField" }, // 3867127292
		{ &Z_Construct_UFunction_UVaRestJsonObject_SetStringField, "SetStringField" }, // 1816854869
		{ &Z_Construct_UFunction_UVaRestJsonObject_WriteToFilePath, "WriteToFilePath" }, // 1136773931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprintable FJsonObject wrapper\n */" },
		{ "IncludePath", "VaRestJsonObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestJsonObject.h" },
		{ "ToolTip", "Blueprintable FJsonObject wrapper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestJsonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestJsonObject_Statics::ClassParams = {
		&UVaRestJsonObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVaRestJsonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestJsonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestJsonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestJsonObject, 524341024);
	template<> VAREST_API UClass* StaticClass<UVaRestJsonObject>()
	{
		return UVaRestJsonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestJsonObject(Z_Construct_UClass_UVaRestJsonObject, &UVaRestJsonObject::StaticClass, TEXT("/Script/VaRest"), TEXT("UVaRestJsonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestJsonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
