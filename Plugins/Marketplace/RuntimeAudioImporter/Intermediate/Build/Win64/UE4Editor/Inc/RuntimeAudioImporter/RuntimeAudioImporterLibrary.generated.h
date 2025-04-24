// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeAudioImporterLibrary;
class UImportedSoundWave;
enum class ETranscodingStatus : uint8;
enum class EAudioFormat : uint8;
enum class ERAWAudioFormat : uint8;
class UPreImportedSoundAsset;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterLibrary_generated_h
#error "RuntimeAudioImporterLibrary.generated.h already included, missing '#pragma once' in RuntimeAudioImporterLibrary.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterLibrary_generated_h

#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_49_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms \
{ \
	bool bSucceeded; \
}; \
static inline void FOnRAWDataTranscodeFromFileResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromFileResult, bool bSucceeded) \
{ \
	_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromFileResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnRAWDataTranscodeFromFileResult.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_42_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms \
{ \
	bool bSucceeded; \
	TArray<uint8> RAWData; \
}; \
static inline void FOnRAWDataTranscodeFromBufferResult_DelegateWrapper(const FScriptDelegate& OnRAWDataTranscodeFromBufferResult, bool bSucceeded, TArray<uint8> const& RAWData) \
{ \
	_Script_RuntimeAudioImporter_eventOnRAWDataTranscodeFromBufferResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	Parms.RAWData=RAWData; \
	OnRAWDataTranscodeFromBufferResult.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_35_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms \
{ \
	bool bSucceeded; \
}; \
static inline void FOnAudioExportToFileResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToFileResult, bool bSucceeded) \
{ \
	_Script_RuntimeAudioImporter_eventOnAudioExportToFileResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	OnAudioExportToFileResult.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_29_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms \
{ \
	bool bSucceeded; \
	TArray<uint8> AudioData; \
}; \
static inline void FOnAudioExportToBufferResult_DelegateWrapper(const FScriptDelegate& OnAudioExportToBufferResult, bool bSucceeded, TArray<uint8> const& AudioData) \
{ \
	_Script_RuntimeAudioImporter_eventOnAudioExportToBufferResult_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	Parms.AudioData=AudioData; \
	OnAudioExportToBufferResult.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_22_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms \
{ \
	URuntimeAudioImporterLibrary* Importer; \
	UImportedSoundWave* ImportedSoundWave; \
	ETranscodingStatus Status; \
}; \
static inline void FOnAudioImporterResult_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterResult, URuntimeAudioImporterLibrary* Importer, UImportedSoundWave* ImportedSoundWave, ETranscodingStatus Status) \
{ \
	_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms Parms; \
	Parms.Importer=Importer; \
	Parms.ImportedSoundWave=ImportedSoundWave; \
	Parms.Status=Status; \
	OnAudioImporterResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_16_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms \
{ \
	int32 Percentage; \
}; \
static inline void FOnAudioImporterProgress_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterProgress, int32 Percentage) \
{ \
	_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms Parms; \
	Parms.Percentage=Percentage; \
	OnAudioImporterProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_SPARSE_DATA
#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertSecondsToString); \
	DECLARE_FUNCTION(execGetAudioFormatAdvanced); \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execExportSoundWaveToBuffer); \
	DECLARE_FUNCTION(execExportSoundWaveToFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertSecondsToString); \
	DECLARE_FUNCTION(execGetAudioFormatAdvanced); \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execExportSoundWaveToBuffer); \
	DECLARE_FUNCTION(execExportSoundWaveToFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	NO_API URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public:


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	NO_API URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary)


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_56_PROLOG
#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_RPC_WRAPPERS \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_INCLASS \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeAudioImporterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_Marketplace_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
