// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGameModeBase;
#ifdef CREATESERVERPLUGIN_ServerFunctionLibrary_generated_h
#error "ServerFunctionLibrary.generated.h already included, missing '#pragma once' in ServerFunctionLibrary.h"
#endif
#define CREATESERVERPLUGIN_ServerFunctionLibrary_generated_h

#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_SPARSE_DATA
#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsServerActor); \
	DECLARE_FUNCTION(execGetIPAddress); \
	DECLARE_FUNCTION(execDedicatedShutDown); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execIsEditor);


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsServerActor); \
	DECLARE_FUNCTION(execGetIPAddress); \
	DECLARE_FUNCTION(execDedicatedShutDown); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execIsEditor);


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UServerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UServerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreateServerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UServerFunctionLibrary)


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUServerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UServerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UServerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CreateServerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UServerFunctionLibrary)


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerFunctionLibrary(UServerFunctionLibrary&&); \
	NO_API UServerFunctionLibrary(const UServerFunctionLibrary&); \
public:


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerFunctionLibrary(UServerFunctionLibrary&&); \
	NO_API UServerFunctionLibrary(const UServerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerFunctionLibrary)


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_12_PROLOG
#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_SPARSE_DATA \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_RPC_WRAPPERS \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_INCLASS \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_SPARSE_DATA \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATESERVERPLUGIN_API UClass* StaticClass<class UServerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_CreateServerPlugin_Source_CreateServerPlugin_Public_ServerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
