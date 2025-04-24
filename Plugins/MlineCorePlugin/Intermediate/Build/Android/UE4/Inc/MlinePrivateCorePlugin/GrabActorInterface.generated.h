// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MLINEPRIVATECOREPLUGIN_GrabActorInterface_generated_h
#error "GrabActorInterface.generated.h already included, missing '#pragma once' in GrabActorInterface.h"
#endif
#define MLINEPRIVATECOREPLUGIN_GrabActorInterface_generated_h

#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_SPARSE_DATA
#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_RPC_WRAPPERS \
	virtual void OnPhysicsReleased_Implementation(AActor* GrabbedHand) {}; \
	virtual void OnPhysicsGrabbed_Implementation(AActor* GrabbedHand) {}; \
 \
	DECLARE_FUNCTION(execOnPhysicsReleased); \
	DECLARE_FUNCTION(execOnPhysicsGrabbed);


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPhysicsReleased_Implementation(AActor* GrabbedHand) {}; \
	virtual void OnPhysicsGrabbed_Implementation(AActor* GrabbedHand) {}; \
 \
	DECLARE_FUNCTION(execOnPhysicsReleased); \
	DECLARE_FUNCTION(execOnPhysicsGrabbed);


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_EVENT_PARMS \
	struct GrabActorInterface_eventOnPhysicsGrabbed_Parms \
	{ \
		AActor* GrabbedHand; \
	}; \
	struct GrabActorInterface_eventOnPhysicsReleased_Parms \
	{ \
		AActor* GrabbedHand; \
	};


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MLINEPRIVATECOREPLUGIN_API UGrabActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLINEPRIVATECOREPLUGIN_API, UGrabActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MLINEPRIVATECOREPLUGIN_API UGrabActorInterface(UGrabActorInterface&&); \
	MLINEPRIVATECOREPLUGIN_API UGrabActorInterface(const UGrabActorInterface&); \
public:


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MLINEPRIVATECOREPLUGIN_API UGrabActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MLINEPRIVATECOREPLUGIN_API UGrabActorInterface(UGrabActorInterface&&); \
	MLINEPRIVATECOREPLUGIN_API UGrabActorInterface(const UGrabActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MLINEPRIVATECOREPLUGIN_API, UGrabActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabActorInterface)


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGrabActorInterface(); \
	friend struct Z_Construct_UClass_UGrabActorInterface_Statics; \
public: \
	DECLARE_CLASS(UGrabActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MlinePrivateCorePlugin"), MLINEPRIVATECOREPLUGIN_API) \
	DECLARE_SERIALIZER(UGrabActorInterface)


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGrabActorInterface() {} \
public: \
	typedef UGrabActorInterface UClassType; \
	typedef IGrabActorInterface ThisClass; \
	static void Execute_OnPhysicsGrabbed(UObject* O, AActor* GrabbedHand); \
	static void Execute_OnPhysicsReleased(UObject* O, AActor* GrabbedHand); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGrabActorInterface() {} \
public: \
	typedef UGrabActorInterface UClassType; \
	typedef IGrabActorInterface ThisClass; \
	static void Execute_OnPhysicsGrabbed(UObject* O, AActor* GrabbedHand); \
	static void Execute_OnPhysicsReleased(UObject* O, AActor* GrabbedHand); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_10_PROLOG \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_EVENT_PARMS


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_RPC_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<class UGrabActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MlineCorePlugin_Source_MlinePrivateCorePlugin_Public_GrabActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
