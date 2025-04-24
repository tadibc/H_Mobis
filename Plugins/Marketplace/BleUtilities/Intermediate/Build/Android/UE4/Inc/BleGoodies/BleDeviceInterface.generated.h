// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLEGOODIES_BleDeviceInterface_generated_h
#error "BleDeviceInterface.generated.h already included, missing '#pragma once' in BleDeviceInterface.h"
#endif
#define BLEGOODIES_BleDeviceInterface_generated_h

#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_13_DELEGATE \
struct _Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms \
{ \
	FString ServiceUUID; \
	FString CharacteristicUUID; \
	FString ErrorMessage; \
}; \
static inline void FBleCharacteristicErrorDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicErrorDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID, const FString& ErrorMessage) \
{ \
	_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms Parms; \
	Parms.ServiceUUID=ServiceUUID; \
	Parms.CharacteristicUUID=CharacteristicUUID; \
	Parms.ErrorMessage=ErrorMessage; \
	BleCharacteristicErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_12_DELEGATE \
struct _Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms \
{ \
	FString ServiceUUID; \
	FString CharacteristicUUID; \
	TArray<uint8> Data; \
}; \
static inline void FBleCharacteristicDataDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicDataDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID, TArray<uint8> const& Data) \
{ \
	_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms Parms; \
	Parms.ServiceUUID=ServiceUUID; \
	Parms.CharacteristicUUID=CharacteristicUUID; \
	Parms.Data=Data; \
	BleCharacteristicDataDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_11_DELEGATE \
struct _Script_BleGoodies_eventBleCharacteristicDelegate_Parms \
{ \
	FString ServiceUUID; \
	FString CharacteristicUUID; \
}; \
static inline void FBleCharacteristicDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID) \
{ \
	_Script_BleGoodies_eventBleCharacteristicDelegate_Parms Parms; \
	Parms.ServiceUUID=ServiceUUID; \
	Parms.CharacteristicUUID=CharacteristicUUID; \
	BleCharacteristicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_10_DELEGATE \
struct _Script_BleGoodies_eventBleErrorDelegate_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FBleErrorDelegate_DelegateWrapper(const FScriptDelegate& BleErrorDelegate, const FString& ErrorMessage) \
{ \
	_Script_BleGoodies_eventBleErrorDelegate_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	BleErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_9_DELEGATE \
static inline void FBleDelegate_DelegateWrapper(const FScriptDelegate& BleDelegate) \
{ \
	BleDelegate.ProcessDelegate<UObject>(NULL); \
}


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_SPARSE_DATA
#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindToCharacteristicErrorEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicUnsubscribeEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicNotificationEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicWriteEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicReadEvent); \
	DECLARE_FUNCTION(execUnsubscribeFromCharacteristic); \
	DECLARE_FUNCTION(execSubscribeToCharacteristic); \
	DECLARE_FUNCTION(execWriteCharacteristic); \
	DECLARE_FUNCTION(execReadCharacteristic); \
	DECLARE_FUNCTION(execIsServiceAvailable); \
	DECLARE_FUNCTION(execGetServices); \
	DECLARE_FUNCTION(execGetDeviceId); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindToCharacteristicErrorEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicUnsubscribeEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicNotificationEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicWriteEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicReadEvent); \
	DECLARE_FUNCTION(execUnsubscribeFromCharacteristic); \
	DECLARE_FUNCTION(execSubscribeToCharacteristic); \
	DECLARE_FUNCTION(execWriteCharacteristic); \
	DECLARE_FUNCTION(execReadCharacteristic); \
	DECLARE_FUNCTION(execIsServiceAvailable); \
	DECLARE_FUNCTION(execGetServices); \
	DECLARE_FUNCTION(execGetDeviceId); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleDeviceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleDeviceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleDeviceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleDeviceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBleDeviceInterface(UBleDeviceInterface&&); \
	NO_API UBleDeviceInterface(const UBleDeviceInterface&); \
public:


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleDeviceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBleDeviceInterface(UBleDeviceInterface&&); \
	NO_API UBleDeviceInterface(const UBleDeviceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleDeviceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleDeviceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleDeviceInterface)


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBleDeviceInterface(); \
	friend struct Z_Construct_UClass_UBleDeviceInterface_Statics; \
public: \
	DECLARE_CLASS(UBleDeviceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleDeviceInterface)


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBleDeviceInterface() {} \
public: \
	typedef UBleDeviceInterface UClassType; \
	typedef IBleDeviceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IBleDeviceInterface() {} \
public: \
	typedef UBleDeviceInterface UClassType; \
	typedef IBleDeviceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_15_PROLOG
#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_SPARSE_DATA \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_RPC_WRAPPERS \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_SPARSE_DATA \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLEGOODIES_API UClass* StaticClass<class UBleDeviceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MlineUnrealCoreProject_Plugins_BleUtilities_Source_BleGoodies_Public_Interface_BleDeviceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
