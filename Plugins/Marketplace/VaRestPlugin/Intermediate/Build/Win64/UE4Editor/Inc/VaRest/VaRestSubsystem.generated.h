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
class UVaRestJsonValue;
enum class EVaRestRequestVerb : uint8;
enum class EVaRestRequestContentType : uint8;
#ifdef VAREST_VaRestSubsystem_generated_h
#error "VaRestSubsystem.generated.h already included, missing '#pragma once' in VaRestSubsystem.h"
#endif
#define VAREST_VaRestSubsystem_generated_h

#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics; \
	VAREST_API static class UScriptStruct* StaticStruct();


template<> VAREST_API UScriptStruct* StaticStruct<struct FVaRestCallResponse>();

#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_13_DELEGATE \
struct _Script_VaRest_eventVaRestCallDelegate_Parms \
{ \
	UVaRestRequestJSON* Request; \
}; \
static inline void FVaRestCallDelegate_DelegateWrapper(const FScriptDelegate& VaRestCallDelegate, UVaRestRequestJSON* Request) \
{ \
	_Script_VaRest_eventVaRestCallDelegate_Parms Parms; \
	Parms.Request=Request; \
	VaRestCallDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_SPARSE_DATA
#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execDecodeJsonObject); \
	DECLARE_FUNCTION(execDecodeJsonValue); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber); \
	DECLARE_FUNCTION(execStaticConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestRequestExt); \
	DECLARE_FUNCTION(execConstructVaRestRequest); \
	DECLARE_FUNCTION(execCallURL);


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execDecodeJsonObject); \
	DECLARE_FUNCTION(execDecodeJsonValue); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber); \
	DECLARE_FUNCTION(execStaticConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestRequestExt); \
	DECLARE_FUNCTION(execConstructVaRestRequest); \
	DECLARE_FUNCTION(execCallURL);


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestSubsystem(); \
	friend struct Z_Construct_UClass_UVaRestSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVaRestSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestSubsystem)


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestSubsystem(); \
	friend struct Z_Construct_UClass_UVaRestSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVaRestSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestSubsystem)


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestSubsystem(UVaRestSubsystem&&); \
	NO_API UVaRestSubsystem(const UVaRestSubsystem&); \
public:


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestSubsystem(UVaRestSubsystem&&); \
	NO_API UVaRestSubsystem(const UVaRestSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVaRestSubsystem)


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequestMap() { return STRUCT_OFFSET(UVaRestSubsystem, RequestMap); }


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_35_PROLOG
#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAREST_API UClass* StaticClass<class UVaRestSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_Marketplace_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
