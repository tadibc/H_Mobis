// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestRequestJSON.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestRequestJSON() {}
// Cross Module References
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestStatus();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics
	{
		struct _Script_VaRest_eventOnRequestFail_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VaRest_eventOnRequestFail_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "OnRequestFail__DelegateSignature", nullptr, nullptr, sizeof(_Script_VaRest_eventOnRequestFail_Parms), Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics
	{
		struct _Script_VaRest_eventOnRequestComplete_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VaRest_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Generate a delegates for callback events */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Generate a delegates for callback events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "OnRequestComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_VaRest_eventOnRequestComplete_Parms), Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContentAsString)
	{
		P_GET_UBOOL(Z_Param_bCacheResponseContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResponseContentAsString(Z_Param_bCacheResponseContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execHasTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execRemoveTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execAddTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execExecuteProcessRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteProcessRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execApplyURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_OBJECT_REF(UVaRestJsonObject,Z_Param_Out_Result);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyURL(Z_Param_Url,Z_Param_Out_Result,Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execProcessURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessURL(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetURL(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetAllResponseHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllResponseHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResponseHeader(Z_Param_HeaderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaRestRequestStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetVerb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaRestRequestVerb*)Z_Param__Result=P_THIS->GetVerb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->GetResponseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetResponseObject)
	{
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResponseObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetResponseObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetRequestObject)
	{
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetRequestObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetRequestObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execResetResponseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetResponseData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execResetRequestData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRequestData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execResetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetStringRequestContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringRequestContent(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetBinaryRequestContent)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryRequestContent(Z_Param_Out_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetBinaryContentType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryContentType(Z_Param_ContentType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetContentType)
	{
		P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentType(EVaRestRequestContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetCustomVerb)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomVerb(Z_Param_Verb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetVerb)
	{
		P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerb(EVaRestRequestVerb(Z_Param_Verb));
		P_NATIVE_END;
	}
	void UVaRestRequestJSON::StaticRegisterNativesUVaRestRequestJSON()
	{
		UClass* Class = UVaRestRequestJSON::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UVaRestRequestJSON::execAddTag },
			{ "ApplyURL", &UVaRestRequestJSON::execApplyURL },
			{ "Cancel", &UVaRestRequestJSON::execCancel },
			{ "ExecuteProcessRequest", &UVaRestRequestJSON::execExecuteProcessRequest },
			{ "GetAllResponseHeaders", &UVaRestRequestJSON::execGetAllResponseHeaders },
			{ "GetRequestObject", &UVaRestRequestJSON::execGetRequestObject },
			{ "GetResponseCode", &UVaRestRequestJSON::execGetResponseCode },
			{ "GetResponseContentAsString", &UVaRestRequestJSON::execGetResponseContentAsString },
			{ "GetResponseHeader", &UVaRestRequestJSON::execGetResponseHeader },
			{ "GetResponseObject", &UVaRestRequestJSON::execGetResponseObject },
			{ "GetResponseValue", &UVaRestRequestJSON::execGetResponseValue },
			{ "GetStatus", &UVaRestRequestJSON::execGetStatus },
			{ "GetURL", &UVaRestRequestJSON::execGetURL },
			{ "GetVerb", &UVaRestRequestJSON::execGetVerb },
			{ "HasTag", &UVaRestRequestJSON::execHasTag },
			{ "ProcessURL", &UVaRestRequestJSON::execProcessURL },
			{ "RemoveTag", &UVaRestRequestJSON::execRemoveTag },
			{ "ResetData", &UVaRestRequestJSON::execResetData },
			{ "ResetRequestData", &UVaRestRequestJSON::execResetRequestData },
			{ "ResetResponseData", &UVaRestRequestJSON::execResetResponseData },
			{ "SetBinaryContentType", &UVaRestRequestJSON::execSetBinaryContentType },
			{ "SetBinaryRequestContent", &UVaRestRequestJSON::execSetBinaryRequestContent },
			{ "SetContentType", &UVaRestRequestJSON::execSetContentType },
			{ "SetCustomVerb", &UVaRestRequestJSON::execSetCustomVerb },
			{ "SetHeader", &UVaRestRequestJSON::execSetHeader },
			{ "SetRequestObject", &UVaRestRequestJSON::execSetRequestObject },
			{ "SetResponseObject", &UVaRestRequestJSON::execSetResponseObject },
			{ "SetStringRequestContent", &UVaRestRequestJSON::execSetStringRequestContent },
			{ "SetURL", &UVaRestRequestJSON::execSetURL },
			{ "SetVerb", &UVaRestRequestJSON::execSetVerb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics
	{
		struct VaRestRequestJSON_eventAddTag_Parms
		{
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Add tag to this request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Add tag to this request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "AddTag", nullptr, nullptr, sizeof(VaRestRequestJSON_eventAddTag_Parms), Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics
	{
		struct VaRestRequestJSON_eventApplyURL_Parms
		{
			FString Url;
			UVaRestJsonObject* Result;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Open URL in latent mode */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Open URL in latent mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ApplyURL", nullptr, nullptr, sizeof(VaRestRequestJSON_eventApplyURL_Parms), Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Cancel latent response waiting  */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Cancel latent response waiting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Check URL and execute process request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Check URL and execute process request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ExecuteProcessRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics
	{
		struct VaRestRequestJSON_eventGetAllResponseHeaders_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetAllResponseHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get list of all response headers */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get list of all response headers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetAllResponseHeaders", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetAllResponseHeaders_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics
	{
		struct VaRestRequestJSON_eventGetRequestObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get the Request Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Request Json object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetRequestObject", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetRequestObject_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics
	{
		struct VaRestRequestJSON_eventGetResponseCode_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the response code of the last query */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the response code of the last query" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseCode", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetResponseCode_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics
	{
		struct VaRestRequestJSON_eventGetResponseContentAsString_Parms
		{
			bool bCacheResponseContent;
			FString ReturnValue;
		};
		static void NewProp_bCacheResponseContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCacheResponseContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit(void* Obj)
	{
		((VaRestRequestJSON_eventGetResponseContentAsString_Parms*)Obj)->bCacheResponseContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent = { "bCacheResponseContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestRequestJSON_eventGetResponseContentAsString_Parms), &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContentAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Get request response stored as a string \n\x09 * @param bCacheResponseContent - Set true if you plan to use it few times to prevent deserialization each time\n\x09 */" },
		{ "CPP_Default_bCacheResponseContent", "true" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get request response stored as a string\n@param bCacheResponseContent - Set true if you plan to use it few times to prevent deserialization each time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContentAsString", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetResponseContentAsString_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics
	{
		struct VaRestRequestJSON_eventGetResponseHeader_Parms
		{
			FString HeaderName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get value of desired response header */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get value of desired response header" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseHeader", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetResponseHeader_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics
	{
		struct VaRestRequestJSON_eventGetResponseObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the Response Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Response Json object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseObject", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetResponseObject_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics
	{
		struct VaRestRequestJSON_eventGetResponseValue_Parms
		{
			UVaRestJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseValue_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the Response Json value */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Response Json value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseValue", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetResponseValue_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics
	{
		struct VaRestRequestJSON_eventGetStatus_Parms
		{
			EVaRestRequestStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestRequestStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get status of http request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get status of http request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetStatus", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetStatus_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics
	{
		struct VaRestRequestJSON_eventGetURL_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get url of http request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get url of http request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetURL", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetURL_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics
	{
		struct VaRestRequestJSON_eventGetVerb_Parms
		{
			EVaRestRequestVerb ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetVerb_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get verb to the request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetVerb", nullptr, nullptr, sizeof(VaRestRequestJSON_eventGetVerb_Parms), Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics
	{
		struct VaRestRequestJSON_eventHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestRequestJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaRestRequestJSON_eventHasTag_Parms), &Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** See if this request contains the supplied tag */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "See if this request contains the supplied tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "HasTag", nullptr, nullptr, sizeof(VaRestRequestJSON_eventHasTag_Parms), Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics
	{
		struct VaRestRequestJSON_eventProcessURL_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Open URL with current setup */" },
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Open URL with current setup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ProcessURL", nullptr, nullptr, sizeof(VaRestRequestJSON_eventProcessURL_Parms), Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics
	{
		struct VaRestRequestJSON_eventRemoveTag_Parms
		{
			FName Tag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** \n\x09 * Remove tag from this request \n\x09 *\n\x09 * @return Number of removed elements \n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Remove tag from this request\n\n@return Number of removed elements" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "RemoveTag", nullptr, nullptr, sizeof(VaRestRequestJSON_eventRemoveTag_Parms), Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Reset all internal saved data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset all internal saved data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Reset saved request data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset saved request data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetRequestData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Reset saved response data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset saved response data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetResponseData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics
	{
		struct VaRestRequestJSON_eventSetBinaryContentType_Parms
		{
			FString ContentType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content type of the request for binary post data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content type of the request for binary post data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetBinaryContentType", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetBinaryContentType_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics
	{
		struct VaRestRequestJSON_eventSetBinaryRequestContent_Parms
		{
			TArray<uint8> Content;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryRequestContent_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content of the request for binary post data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content of the request for binary post data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetBinaryRequestContent", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetBinaryRequestContent_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics
	{
		struct VaRestRequestJSON_eventSetContentType_Parms
		{
			EVaRestRequestContentType ContentType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content type to the request. If you're using the x-www-form-urlencoded, \n\x09 * params/constaints should be defined as key=ValueString pairs from Json data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content type to the request. If you're using the x-www-form-urlencoded,\nparams/constaints should be defined as key=ValueString pairs from Json data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetContentType", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetContentType_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics
	{
		struct VaRestRequestJSON_eventSetCustomVerb_Parms
		{
			FString Verb;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Verb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::NewProp_Verb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set custom verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set custom verb to the request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetCustomVerb", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetCustomVerb_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics
	{
		struct VaRestRequestJSON_eventSetHeader_Parms
		{
			FString HeaderName;
			FString HeaderValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Sets optional header info */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Sets optional header info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetHeader", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetHeader_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics
	{
		struct VaRestRequestJSON_eventSetRequestObject_Parms
		{
			UVaRestJsonObject* JsonObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set the Request Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set the Request Json object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetRequestObject", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetRequestObject_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics
	{
		struct VaRestRequestJSON_eventSetResponseObject_Parms
		{
			UVaRestJsonObject* JsonObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Set the Response Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set the Response Json object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetResponseObject", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetResponseObject_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics
	{
		struct VaRestRequestJSON_eventSetStringRequestContent_Parms
		{
			FString Content;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetStringRequestContent_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content of the request as a plain string */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content of the request as a plain string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetStringRequestContent", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetStringRequestContent_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics
	{
		struct VaRestRequestJSON_eventSetURL_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetURL_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Setting request URL */" },
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Setting request URL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetURL", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetURL_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics
	{
		struct VaRestRequestJSON_eventSetVerb_Parms
		{
			EVaRestRequestVerb Verb;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set verb to the request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetVerb", nullptr, nullptr, sizeof(VaRestRequestJSON_eventSetVerb_Parms), Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister()
	{
		return UVaRestRequestJSON::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestRequestJSON_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[];
#endif
		static void NewProp_bIsValidJsonResponse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestRequestJSON_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestRequestJSON_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestRequestJSON_AddTag, "AddTag" }, // 3638636980
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL, "ApplyURL" }, // 1114326885
		{ &Z_Construct_UFunction_UVaRestRequestJSON_Cancel, "Cancel" }, // 3027798330
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest, "ExecuteProcessRequest" }, // 2084421558
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 3816364179
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject, "GetRequestObject" }, // 2419680011
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode, "GetResponseCode" }, // 2270244754
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString, "GetResponseContentAsString" }, // 3551411964
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader, "GetResponseHeader" }, // 1184135272
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject, "GetResponseObject" }, // 4165107335
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue, "GetResponseValue" }, // 2388265134
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetStatus, "GetStatus" }, // 3178934251
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetURL, "GetURL" }, // 2043980314
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetVerb, "GetVerb" }, // 552232215
		{ &Z_Construct_UFunction_UVaRestRequestJSON_HasTag, "HasTag" }, // 755293111
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL, "ProcessURL" }, // 676921790
		{ &Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag, "RemoveTag" }, // 1386544066
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetData, "ResetData" }, // 1923724837
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData, "ResetRequestData" }, // 1794243689
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData, "ResetResponseData" }, // 1170575530
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType, "SetBinaryContentType" }, // 3860961334
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 1249689740
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetContentType, "SetContentType" }, // 1606772695
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb, "SetCustomVerb" }, // 2039362255
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetHeader, "SetHeader" }, // 1540615270
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject, "SetRequestObject" }, // 838037082
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject, "SetResponseObject" }, // 180116558
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent, "SetStringRequestContent" }, // 3801737624
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetURL, "SetURL" }, // 2133556027
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetVerb, "SetVerb" }, // 1951084659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * General helper class http requests via blueprints\n */" },
		{ "IncludePath", "VaRestRequestJSON.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "General helper class http requests via blueprints" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "VaRest|Event" },
		{ "Comment", "/** Event occured when the request has been completed */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Event occured when the request has been completed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestComplete), Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail_MetaData[] = {
		{ "Category", "VaRest|Event" },
		{ "Comment", "/** Event occured when the request wasn't successfull */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Event occured when the request wasn't successfull" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail = { "OnRequestFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestFail), Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Response size */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize = { "ResponseSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseSize), METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** DEPRECATED: Please use GetResponseContentAsString() instead */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "DEPRECATED: Please use GetResponseContentAsString() instead" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseContent), METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Is the response valid JSON? */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Is the response valid JSON?" },
	};
#endif
	void Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit(void* Obj)
	{
		((UVaRestRequestJSON*)Obj)->bIsValidJsonResponse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse = { "bIsValidJsonResponse", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaRestRequestJSON), &Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, RequestJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON value */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response data stored as JSON value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue = { "ResponseJsonValue", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestRequestJSON_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestRequestJSON>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestRequestJSON_Statics::ClassParams = {
		&UVaRestRequestJSON::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestRequestJSON()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestRequestJSON_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestRequestJSON, 2220390976);
	template<> VAREST_API UClass* StaticClass<UVaRestRequestJSON>()
	{
		return UVaRestRequestJSON::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestRequestJSON(Z_Construct_UClass_UVaRestRequestJSON, &UVaRestRequestJSON::StaticClass, TEXT("/Script/VaRest"), TEXT("UVaRestRequestJSON"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestRequestJSON);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
