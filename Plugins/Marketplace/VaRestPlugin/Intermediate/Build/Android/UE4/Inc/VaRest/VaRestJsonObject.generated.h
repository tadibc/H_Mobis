// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
 
class UVaRestJsonValue;
#ifdef VAREST_VaRestJsonObject_generated_h
#error "VaRestJsonObject.generated.h already included, missing '#pragma once' in VaRestJsonObject.h"
#endif
#define VAREST_VaRestJsonObject_generated_h

#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_SPARSE_DATA
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteToFilePath); \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetIntegerArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetMapFields_bool); \
	DECLARE_FUNCTION(execSetMapFields_int64); \
	DECLARE_FUNCTION(execSetMapFields_int32); \
	DECLARE_FUNCTION(execSetMapFields_uint8); \
	DECLARE_FUNCTION(execSetMapFields_string); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetInt64Field); \
	DECLARE_FUNCTION(execGetInt64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJsonToSingleString); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset);


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteToFilePath); \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetIntegerArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetMapFields_bool); \
	DECLARE_FUNCTION(execSetMapFields_int64); \
	DECLARE_FUNCTION(execSetMapFields_int32); \
	DECLARE_FUNCTION(execSetMapFields_uint8); \
	DECLARE_FUNCTION(execSetMapFields_string); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetInt64Field); \
	DECLARE_FUNCTION(execGetInt64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJsonToSingleString); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset);


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestJsonObject(); \
	friend struct Z_Construct_UClass_UVaRestJsonObject_Statics; \
public: \
	DECLARE_CLASS(UVaRestJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonObject)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestJsonObject(); \
	friend struct Z_Construct_UClass_UVaRestJsonObject_Statics; \
public: \
	DECLARE_CLASS(UVaRestJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonObject)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonObject(UVaRestJsonObject&&); \
	NO_API UVaRestJsonObject(const UVaRestJsonObject&); \
public:


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonObject(UVaRestJsonObject&&); \
	NO_API UVaRestJsonObject(const UVaRestJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonObject)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_17_PROLOG
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_SPARSE_DATA \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_RPC_WRAPPERS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_INCLASS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_SPARSE_DATA \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaRestJsonObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAREST_API UClass* StaticClass<class UVaRestJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
