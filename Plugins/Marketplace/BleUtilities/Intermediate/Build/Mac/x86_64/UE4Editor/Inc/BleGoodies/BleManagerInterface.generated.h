// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBleDeviceInterface;
#ifdef BLEGOODIES_BleManagerInterface_generated_h
#error "BleManagerInterface.generated.h already included, missing '#pragma once' in BleManagerInterface.h"
#endif
#define BLEGOODIES_BleManagerInterface_generated_h

#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_10_DELEGATE \
struct _Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms \
{ \
	FString DeviceName; \
	TArray<uint8> Data; \
}; \
static inline void FBleOnAdvertisementDelegate_DelegateWrapper(const FScriptDelegate& BleOnAdvertisementDelegate, const FString& DeviceName, TArray<uint8> const& Data) \
{ \
	_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms Parms; \
	Parms.DeviceName=DeviceName; \
	Parms.Data=Data; \
	BleOnAdvertisementDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_9_DELEGATE \
struct _Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms \
{ \
	TScriptInterface<IBleDeviceInterface> Device; \
}; \
static inline void FBleOnDeviceFoundDelegate_DelegateWrapper(const FScriptDelegate& BleOnDeviceFoundDelegate, const TScriptInterface<IBleDeviceInterface>& Device) \
{ \
	_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms Parms; \
	Parms.Device=Device; \
	BleOnDeviceFoundDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_SPARSE_DATA
#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsScanning); \
	DECLARE_FUNCTION(execStopScan); \
	DECLARE_FUNCTION(execScanForAdvertisements); \
	DECLARE_FUNCTION(execScanForDevices); \
	DECLARE_FUNCTION(execSetBluetoothState); \
	DECLARE_FUNCTION(execIsBluetoothEnabled); \
	DECLARE_FUNCTION(execIsBleSupported);


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsScanning); \
	DECLARE_FUNCTION(execStopScan); \
	DECLARE_FUNCTION(execScanForAdvertisements); \
	DECLARE_FUNCTION(execScanForDevices); \
	DECLARE_FUNCTION(execSetBluetoothState); \
	DECLARE_FUNCTION(execIsBluetoothEnabled); \
	DECLARE_FUNCTION(execIsBleSupported);


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleManagerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleManagerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBleManagerInterface(UBleManagerInterface&&); \
	NO_API UBleManagerInterface(const UBleManagerInterface&); \
public:


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBleManagerInterface(UBleManagerInterface&&); \
	NO_API UBleManagerInterface(const UBleManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleManagerInterface)


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBleManagerInterface(); \
	friend struct Z_Construct_UClass_UBleManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UBleManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleManagerInterface)


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBleManagerInterface() {} \
public: \
	typedef UBleManagerInterface UClassType; \
	typedef IBleManagerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IBleManagerInterface() {} \
public: \
	typedef UBleManagerInterface UClassType; \
	typedef IBleManagerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_12_PROLOG
#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_SPARSE_DATA \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_RPC_WRAPPERS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_SPARSE_DATA \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLEGOODIES_API UClass* StaticClass<class UBleManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
