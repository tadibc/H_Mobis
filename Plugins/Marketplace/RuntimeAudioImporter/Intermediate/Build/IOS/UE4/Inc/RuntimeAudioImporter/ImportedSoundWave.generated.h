// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEditableSubtitleCue;
#ifdef RUNTIMEAUDIOIMPORTER_ImportedSoundWave_generated_h
#error "ImportedSoundWave.generated.h already included, missing '#pragma once' in ImportedSoundWave.h"
#endif
#define RUNTIMEAUDIOIMPORTER_ImportedSoundWave_generated_h

#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_27_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnPreparedSoundWaveForMetaSounds_Parms \
{ \
	bool bSucceeded; \
}; \
static inline void FOnPreparedSoundWaveForMetaSounds_DelegateWrapper(const FScriptDelegate& OnPreparedSoundWaveForMetaSounds, bool bSucceeded) \
{ \
	_Script_RuntimeAudioImporter_eventOnPreparedSoundWaveForMetaSounds_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnPreparedSoundWaveForMetaSounds.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_20_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms \
{ \
	TArray<float> PCMData; \
}; \
static inline void FOnGeneratePCMData_DelegateWrapper(const FMulticastScriptDelegate& OnGeneratePCMData, TArray<float> const& PCMData) \
{ \
	_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms Parms; \
	Parms.PCMData=PCMData; \
	OnGeneratePCMData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_13_DELEGATE \
static inline void FOnAudioPlaybackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackFinished) \
{ \
	OnAudioPlaybackFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_SPARSE_DATA
#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDurationOffset); \
	DECLARE_FUNCTION(execIsPlaybackFinished); \
	DECLARE_FUNCTION(execGetPlaybackPercentage); \
	DECLARE_FUNCTION(execGetSampleRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDurationConst); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execRewindPlaybackTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execReleasePlayedAudioData); \
	DECLARE_FUNCTION(execReleaseMemory); \
	DECLARE_FUNCTION(execPrepareSoundWaveForMetaSounds);


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDurationOffset); \
	DECLARE_FUNCTION(execIsPlaybackFinished); \
	DECLARE_FUNCTION(execGetPlaybackPercentage); \
	DECLARE_FUNCTION(execGetSampleRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDurationConst); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execRewindPlaybackTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetSubtitles); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execReleasePlayedAudioData); \
	DECLARE_FUNCTION(execReleaseMemory); \
	DECLARE_FUNCTION(execPrepareSoundWaveForMetaSounds);


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportedSoundWave(); \
	friend struct Z_Construct_UClass_UImportedSoundWave_Statics; \
public: \
	DECLARE_CLASS(UImportedSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UImportedSoundWave)


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUImportedSoundWave(); \
	friend struct Z_Construct_UClass_UImportedSoundWave_Statics; \
public: \
	DECLARE_CLASS(UImportedSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(UImportedSoundWave)


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportedSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportedSoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportedSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportedSoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportedSoundWave(UImportedSoundWave&&); \
	NO_API UImportedSoundWave(const UImportedSoundWave&); \
public:


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportedSoundWave(UImportedSoundWave&&); \
	NO_API UImportedSoundWave(const UImportedSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportedSoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportedSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportedSoundWave)


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_34_PROLOG
#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_SPARSE_DATA \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_INCLASS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_SPARSE_DATA \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class UImportedSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_Sound_ImportedSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
