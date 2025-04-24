// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestRequestJSON;
class UVaRestJsonObject;
class UObject;
struct FLatentActionInfo;
enum class EVaRestRequestStatus : uint8;
enum class EVaRestRequestVerb : uint8;
class UVaRestJsonValue;
enum class EVaRestRequestContentType : uint8;
#ifdef VAREST_VaRestRequestJSON_generated_h
#error "VaRestRequestJSON.generated.h already included, missing '#pragma once' in VaRestRequestJSON.h"
#endif
#define VAREST_VaRestRequestJSON_generated_h

#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_77_DELEGATE \
struct _Script_VaRest_eventOnRequestFail_Parms \
{ \
	UVaRestRequestJSON* Request; \
}; \
static inline void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, UVaRestRequestJSON* Request) \
{ \
	_Script_VaRest_eventOnRequestFail_Parms Parms; \
	Parms.Request=Request; \
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_76_DELEGATE \
struct _Script_VaRest_eventOnRequestComplete_Parms \
{ \
	UVaRestRequestJSON* Request; \
}; \
static inline void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, UVaRestRequestJSON* Request) \
{ \
	_Script_VaRest_eventOnRequestComplete_Parms Parms; \
	Parms.Request=Request; \
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_SPARSE_DATA
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetResponseContentAsString); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execExecuteProcessRequest); \
	DECLARE_FUNCTION(execApplyURL); \
	DECLARE_FUNCTION(execProcessURL); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execGetAllResponseHeaders); \
	DECLARE_FUNCTION(execGetResponseHeader); \
	DECLARE_FUNCTION(execGetResponseCode); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetVerb); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetResponseValue); \
	DECLARE_FUNCTION(execSetResponseObject); \
	DECLARE_FUNCTION(execGetResponseObject); \
	DECLARE_FUNCTION(execSetRequestObject); \
	DECLARE_FUNCTION(execGetRequestObject); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResetResponseData); \
	DECLARE_FUNCTION(execResetRequestData); \
	DECLARE_FUNCTION(execResetData); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetStringRequestContent); \
	DECLARE_FUNCTION(execSetBinaryRequestContent); \
	DECLARE_FUNCTION(execSetBinaryContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execSetCustomVerb); \
	DECLARE_FUNCTION(execSetVerb);


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetResponseContentAsString); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execExecuteProcessRequest); \
	DECLARE_FUNCTION(execApplyURL); \
	DECLARE_FUNCTION(execProcessURL); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execGetAllResponseHeaders); \
	DECLARE_FUNCTION(execGetResponseHeader); \
	DECLARE_FUNCTION(execGetResponseCode); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetVerb); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetResponseValue); \
	DECLARE_FUNCTION(execSetResponseObject); \
	DECLARE_FUNCTION(execGetResponseObject); \
	DECLARE_FUNCTION(execSetRequestObject); \
	DECLARE_FUNCTION(execGetRequestObject); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResetResponseData); \
	DECLARE_FUNCTION(execResetRequestData); \
	DECLARE_FUNCTION(execResetData); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetStringRequestContent); \
	DECLARE_FUNCTION(execSetBinaryRequestContent); \
	DECLARE_FUNCTION(execSetBinaryContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execSetCustomVerb); \
	DECLARE_FUNCTION(execSetVerb);


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestRequestJSON(); \
	friend struct Z_Construct_UClass_UVaRestRequestJSON_Statics; \
public: \
	DECLARE_CLASS(UVaRestRequestJSON, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestRequestJSON)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestRequestJSON(); \
	friend struct Z_Construct_UClass_UVaRestRequestJSON_Statics; \
public: \
	DECLARE_CLASS(UVaRestRequestJSON, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestRequestJSON)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestRequestJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestRequestJSON) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestRequestJSON); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestRequestJSON); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestRequestJSON(UVaRestRequestJSON&&); \
	NO_API UVaRestRequestJSON(const UVaRestRequestJSON&); \
public:


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestRequestJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestRequestJSON(UVaRestRequestJSON&&); \
	NO_API UVaRestRequestJSON(const UVaRestRequestJSON&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestRequestJSON); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestRequestJSON); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestRequestJSON)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UVaRestRequestJSON, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonValue() { return STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonValue); }


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_85_PROLOG
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_SPARSE_DATA \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_RPC_WRAPPERS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_INCLASS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_SPARSE_DATA \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaRestRequestJSON."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAREST_API UClass* StaticClass<class UVaRestRequestJSON>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
