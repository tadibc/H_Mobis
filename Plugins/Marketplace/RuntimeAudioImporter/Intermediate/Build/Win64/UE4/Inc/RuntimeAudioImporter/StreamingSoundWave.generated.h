// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERAWAudioFormat : uint8;
enum class EAudioFormat : uint8;
class UStreamingSoundWave;
#ifdef RUNTIMEAUDIOIMPORTER_StreamingSoundWave_generated_h
#error "StreamingSoundWave.generated.h already included, missing '#pragma once' in StreamingSoundWave.h"
#endif
#define RUNTIMEAUDIOIMPORTER_StreamingSoundWave_generated_h

#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_SPARSE_DATA
#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStopSoundOnPlaybackFinish); \
	DECLARE_FUNCTION(execAppendAudioDataFromRAW); \
	DECLARE_FUNCTION(execAppendAudioDataFromEncoded); \
	DECLARE_FUNCTION(execCreateStreamingSoundWave);


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStopSoundOnPlaybackFinish); \
	DECLARE_FUNCTION(execAppendAudioDataFromRAW); \
	DECLARE_FUNCTION(execAppendAudioDataFromEncoded); \
	DECLARE_FUNCTION(execCreateStreamingSoundWave);


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamingSoundWave(); \
	friend struct Z_Construct_UClass_UStreamingSoundWave_Statics; \
public: \
	DECLARE_CLASS(UStreamingSoundWave, UImportedSoundWave, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UStreamingSoundWave)


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStreamingSoundWave(); \
	friend struct Z_Construct_UClass_UStreamingSoundWave_Statics; \
public: \
	DECLARE_CLASS(UStreamingSoundWave, UImportedSoundWave, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UStreamingSoundWave)


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamingSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamingSoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamingSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamingSoundWave(UStreamingSoundWave&&); \
	NO_API UStreamingSoundWave(const UStreamingSoundWave&); \
public:


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamingSoundWave(UStreamingSoundWave&&); \
	NO_API UStreamingSoundWave(const UStreamingSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamingSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamingSoundWave)


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_14_PROLOG
#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_SPARSE_DATA \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_INCLASS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_SPARSE_DATA \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class UStreamingSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_StreamingSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
