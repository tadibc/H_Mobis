// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDevice;
#ifdef HAPTICSMANAGER_HapticDevice_generated_h
#error "HapticDevice.generated.h already included, missing '#pragma once' in HapticDevice.h"
#endif
#define HAPTICSMANAGER_HapticDevice_generated_h

#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_SPARSE_DATA
#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTogglePosition); \
	DECLARE_FUNCTION(execChangePosition); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execSetDeviceData);


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTogglePosition); \
	DECLARE_FUNCTION(execChangePosition); \
	DECLARE_FUNCTION(execPing); \
	DECLARE_FUNCTION(execSetDeviceData);


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHapticDevice(); \
	friend struct Z_Construct_UClass_UHapticDevice_Statics; \
public: \
	DECLARE_CLASS(UHapticDevice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HapticsManager"), NO_API) \
	DECLARE_SERIALIZER(UHapticDevice)


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHapticDevice(); \
	friend struct Z_Construct_UClass_UHapticDevice_Statics; \
public: \
	DECLARE_CLASS(UHapticDevice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HapticsManager"), NO_API) \
	DECLARE_SERIALIZER(UHapticDevice)


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHapticDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHapticDevice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHapticDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHapticDevice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHapticDevice(UHapticDevice&&); \
	NO_API UHapticDevice(const UHapticDevice&); \
public:


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHapticDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHapticDevice(UHapticDevice&&); \
	NO_API UHapticDevice(const UHapticDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHapticDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHapticDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHapticDevice)


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_13_PROLOG
#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_SPARSE_DATA \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_RPC_WRAPPERS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_INCLASS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_SPARSE_DATA \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAPTICSMANAGER_API UClass* StaticClass<class UHapticDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_HapticsManager_Source_HapticsManager_Public_HapticDevice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
