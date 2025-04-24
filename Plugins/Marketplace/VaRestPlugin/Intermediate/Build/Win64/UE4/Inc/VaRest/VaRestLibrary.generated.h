// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVaRestURL;
class UVaRestSettings;
#ifdef VAREST_VaRestLibrary_generated_h
#error "VaRestLibrary.generated.h already included, missing '#pragma once' in VaRestLibrary.h"
#endif
#define VAREST_VaRestLibrary_generated_h

#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_SPARSE_DATA
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorldURL); \
	DECLARE_FUNCTION(execGetVaRestVersion); \
	DECLARE_FUNCTION(execHTTPStatusIntToEnum); \
	DECLARE_FUNCTION(execStringToSha1); \
	DECLARE_FUNCTION(execStringToMd5); \
	DECLARE_FUNCTION(execBase64DecodeData); \
	DECLARE_FUNCTION(execBase64EncodeData); \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execPercentEncode); \
	DECLARE_FUNCTION(execGetVaRestSettings);


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorldURL); \
	DECLARE_FUNCTION(execGetVaRestVersion); \
	DECLARE_FUNCTION(execHTTPStatusIntToEnum); \
	DECLARE_FUNCTION(execStringToSha1); \
	DECLARE_FUNCTION(execStringToMd5); \
	DECLARE_FUNCTION(execBase64DecodeData); \
	DECLARE_FUNCTION(execBase64EncodeData); \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execPercentEncode); \
	DECLARE_FUNCTION(execGetVaRestSettings);


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestLibrary(); \
	friend struct Z_Construct_UClass_UVaRestLibrary_Statics; \
public: \
	DECLARE_CLASS(UVaRestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestLibrary)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestLibrary(); \
	friend struct Z_Construct_UClass_UVaRestLibrary_Statics; \
public: \
	DECLARE_CLASS(UVaRestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestLibrary)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestLibrary(UVaRestLibrary&&); \
	NO_API UVaRestLibrary(const UVaRestLibrary&); \
public:


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestLibrary(UVaRestLibrary&&); \
	NO_API UVaRestLibrary(const UVaRestLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestLibrary)


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_16_PROLOG
#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_SPARSE_DATA \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_RPC_WRAPPERS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_INCLASS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_SPARSE_DATA \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAREST_API UClass* StaticClass<class UVaRestLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
