// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestJsonValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestJsonValue() {}
// Cross Module References
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaJson();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
// End Cross Module References
	static UEnum* EVaJson_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaJson, Z_Construct_UPackage__Script_VaRest(), TEXT("EVaJson"));
		}
		return Singleton;
	}
	template<> VAREST_API UEnum* StaticEnum<EVaJson>()
	{
		return EVaJson_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaJson(EVaJson_StaticEnum, TEXT("/Script/VaRest"), TEXT("EVaJson"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRest_EVaJson_Hash() { return 230431515U; }
	UEnum* Z_Construct_UEnum_VaRest_EVaJson()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaJson"), 0, Get_Z_Construct_UEnum_VaRest_EVaJson_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaJson::None", (int64)EVaJson::None },
				{ "EVaJson::Null", (int64)EVaJson::Null },
				{ "EVaJson::String", (int64)EVaJson::String },
				{ "EVaJson::Number", (int64)EVaJson::Number },
				{ "EVaJson::Boolean", (int64)EVaJson::Boolean },
				{ "EVaJson::Array", (int64)EVaJson::Array },
				{ "EVaJson::Object", (int64)EVaJson::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EVaJson::Array" },
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EVaJson::Boolean" },
				{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
				{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
				{ "None.Name", "EVaJson::None" },
				{ "Null.Name", "EVaJson::Null" },
				{ "Number.Name", "EVaJson::Number" },
				{ "Object.Name", "EVaJson::Object" },
				{ "String.Name", "EVaJson::String" },
				{ "ToolTip", "Represents all the types a Json Value can be." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
				nullptr,
				"EVaJson",
				"EVaJson",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->AsObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsInt64)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->AsInt64();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsInt32)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AsInt32();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execGetTypeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTypeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaJson*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UVaRestJsonValue::StaticRegisterNativesUVaRestJsonValue()
	{
		UClass* Class = UVaRestJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", &UVaRestJsonValue::execAsArray },
			{ "AsBool", &UVaRestJsonValue::execAsBool },
			{ "AsInt32", &UVaRestJsonValue::execAsInt32 },
			{ "AsInt64", &UVaRestJsonValue::execAsInt64 },
			{ "AsNumber", &UVaRestJsonValue::execAsNumber },
			{ "AsObject", &UVaRestJsonValue::execAsObject },
			{ "AsString", &UVaRestJsonValue::execAsString },
			{ "GetType", &UVaRestJsonValue::execGetType },
			{ "GetTypeString", &UVaRestJsonValue::execGetTypeString },
			{ "IsNull", &UVaRestJsonValue::execIsNull },
			{ "Reset", &UVaRestJsonValue::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics
	{
		struct VaRestJsonValue_eventAsArray_Parms
		{
			TArray<UVaRestJsonValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsArray", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsArray_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics
	{
		struct VaRestJsonValue_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsBool", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsBool_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics
	{
		struct VaRestJsonValue_eventAsInt32_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsInt32_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a int32, throwing an error if this is not an Json Number */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a int32, throwing an error if this is not an Json Number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsInt32", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsInt32_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics
	{
		struct VaRestJsonValue_eventAsInt64_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a int64, throwing an error if this is not an Json Number */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a int64, throwing an error if this is not an Json Number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsInt64", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsInt64_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics
	{
		struct VaRestJsonValue_eventAsNumber_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsNumber", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsNumber_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics
	{
		struct VaRestJsonValue_eventAsObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsObject", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsObject_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics
	{
		struct VaRestJsonValue_eventAsString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a string, throwing an error if this is not an Json String */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a string, throwing an error if this is not an Json String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsString", nullptr, nullptr, sizeof(VaRestJsonValue_eventAsString_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics
	{
		struct VaRestJsonValue_eventGetType_Parms
		{
			EVaJson ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaJson, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get type of Json value (Enum) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (Enum)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "GetType", nullptr, nullptr, sizeof(VaRestJsonValue_eventGetType_Parms), Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics
	{
		struct VaRestJsonValue_eventGetTypeString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get type of Json value (String) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (String)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "GetTypeString", nullptr, nullptr, sizeof(VaRestJsonValue_eventGetTypeString_Parms), Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics
	{
		struct VaRestJsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns true if this value is a 'null' */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns true if this value is a 'null'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "IsNull", nullptr, nullptr, sizeof(VaRestJsonValue_eventIsNull_Parms), Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Reset all internal data */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Reset all internal data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister()
	{
		return UVaRestJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsArray, "AsArray" }, // 2787128743
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsBool, "AsBool" }, // 3155455412
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsInt32, "AsInt32" }, // 3957994071
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsInt64, "AsInt64" }, // 4035977047
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsNumber, "AsNumber" }, // 198354036
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsObject, "AsObject" }, // 2946041895
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsString, "AsString" }, // 549316810
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetType, "GetType" }, // 274609749
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetTypeString, "GetTypeString" }, // 4236451636
		{ &Z_Construct_UFunction_UVaRestJsonValue_IsNull, "IsNull" }, // 1384164153
		{ &Z_Construct_UFunction_UVaRestJsonValue_Reset, "Reset" }, // 1901755187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
		{ "IncludePath", "VaRestJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestJsonValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams = {
		&UVaRestJsonValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestJsonValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestJsonValue, 3576815467);
	template<> VAREST_API UClass* StaticClass<UVaRestJsonValue>()
	{
		return UVaRestJsonValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestJsonValue(Z_Construct_UClass_UVaRestJsonValue, &UVaRestJsonValue::StaticClass, TEXT("/Script/VaRest"), TEXT("UVaRestJsonValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestJsonValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
