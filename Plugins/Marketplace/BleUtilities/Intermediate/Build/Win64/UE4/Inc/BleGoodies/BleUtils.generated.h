// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBleManagerInterface;
#ifdef BLEGOODIES_BleUtils_generated_h
#error "BleUtils.generated.h already included, missing '#pragma once' in BleUtils.h"
#endif
#define BLEGOODIES_BleUtils_generated_h

#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_SPARSE_DATA
#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsUUIDValid); \
	DECLARE_FUNCTION(execHexToUUIDs); \
	DECLARE_FUNCTION(execHexToUUID); \
	DECLARE_FUNCTION(execConvertBytesToHexString); \
	DECLARE_FUNCTION(execCreateBleManager);


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsUUIDValid); \
	DECLARE_FUNCTION(execHexToUUIDs); \
	DECLARE_FUNCTION(execHexToUUID); \
	DECLARE_FUNCTION(execConvertBytesToHexString); \
	DECLARE_FUNCTION(execCreateBleManager);


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBleUtils(); \
	friend struct Z_Construct_UClass_UBleUtils_Statics; \
public: \
	DECLARE_CLASS(UBleUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleUtils)


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBleUtils(); \
	friend struct Z_Construct_UClass_UBleUtils_Statics; \
public: \
	DECLARE_CLASS(UBleUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleUtils)


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBleUtils(UBleUtils&&); \
	NO_API UBleUtils(const UBleUtils&); \
public:


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBleUtils(UBleUtils&&); \
	NO_API UBleUtils(const UBleUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleUtils)


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_9_PROLOG
#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_SPARSE_DATA \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_RPC_WRAPPERS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_INCLASS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_SPARSE_DATA \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLEGOODIES_API UClass* StaticClass<class UBleUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
