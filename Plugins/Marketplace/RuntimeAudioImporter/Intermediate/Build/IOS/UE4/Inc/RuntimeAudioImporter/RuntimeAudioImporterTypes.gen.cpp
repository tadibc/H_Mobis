// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioImporterTypes() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus();
	RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FEditableSubtitleCue();
	RUNTIMEAUDIOIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedSoundWaveInfo();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
// End Cross Module References
	static UEnum* ERAWAudioFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ERAWAudioFormat"));
		}
		return Singleton;
	}
	template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERAWAudioFormat>()
	{
		return ERAWAudioFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERAWAudioFormat(ERAWAudioFormat_StaticEnum, TEXT("/Script/RuntimeAudioImporter"), TEXT("ERAWAudioFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat_Hash() { return 4142764541U; }
	UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERAWAudioFormat"), 0, Get_Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERAWAudioFormat::Int16", (int64)ERAWAudioFormat::Int16 },
				{ "ERAWAudioFormat::Int32", (int64)ERAWAudioFormat::Int32 },
				{ "ERAWAudioFormat::UInt8", (int64)ERAWAudioFormat::UInt8 },
				{ "ERAWAudioFormat::Float32", (int64)ERAWAudioFormat::Float32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Runtime Audio Importer" },
				{ "Comment", "/** Possible RAW (uncompressed) audio formats */" },
				{ "Float32.DisplayName", "32-bit float" },
				{ "Float32.Name", "ERAWAudioFormat::Float32" },
				{ "Int16.DisplayName", "Signed 16-bit PCM" },
				{ "Int16.Name", "ERAWAudioFormat::Int16" },
				{ "Int32.DisplayName", "Signed 32-bit PCM" },
				{ "Int32.Name", "ERAWAudioFormat::Int32" },
				{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
				{ "ToolTip", "Possible RAW (uncompressed) audio formats" },
				{ "UInt8.DisplayName", "Unsigned 8-bit PCM" },
				{ "UInt8.Name", "ERAWAudioFormat::UInt8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
				nullptr,
				"ERAWAudioFormat",
				"ERAWAudioFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAudioFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("EAudioFormat"));
		}
		return Singleton;
	}
	template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<EAudioFormat>()
	{
		return EAudioFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioFormat(EAudioFormat_StaticEnum, TEXT("/Script/RuntimeAudioImporter"), TEXT("EAudioFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat_Hash() { return 3051030774U; }
	UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioFormat"), 0, Get_Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioFormat::Auto", (int64)EAudioFormat::Auto },
				{ "EAudioFormat::Mp3", (int64)EAudioFormat::Mp3 },
				{ "EAudioFormat::Wav", (int64)EAudioFormat::Wav },
				{ "EAudioFormat::Flac", (int64)EAudioFormat::Flac },
				{ "EAudioFormat::OggVorbis", (int64)EAudioFormat::OggVorbis },
				{ "EAudioFormat::Invalid", (int64)EAudioFormat::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.DisplayName", "Determine format automatically" },
				{ "Auto.Name", "EAudioFormat::Auto" },
				{ "BlueprintType", "true" },
				{ "Category", "Runtime Audio Importer" },
				{ "Comment", "/** Possible audio formats (extensions) */" },
				{ "Flac.DisplayName", "flac" },
				{ "Flac.Name", "EAudioFormat::Flac" },
				{ "Invalid.DisplayName", "invalid (not defined format, internal use only)" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EAudioFormat::Invalid" },
				{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
				{ "Mp3.DisplayName", "mp3" },
				{ "Mp3.Name", "EAudioFormat::Mp3" },
				{ "OggVorbis.DisplayName", "ogg vorbis" },
				{ "OggVorbis.Name", "EAudioFormat::OggVorbis" },
				{ "ToolTip", "Possible audio formats (extensions)" },
				{ "Wav.DisplayName", "wav" },
				{ "Wav.Name", "EAudioFormat::Wav" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
				nullptr,
				"EAudioFormat",
				"EAudioFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETranscodingStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ETranscodingStatus"));
		}
		return Singleton;
	}
	template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ETranscodingStatus>()
	{
		return ETranscodingStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETranscodingStatus(ETranscodingStatus_StaticEnum, TEXT("/Script/RuntimeAudioImporter"), TEXT("ETranscodingStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus_Hash() { return 3088311911U; }
	UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETranscodingStatus"), 0, Get_Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETranscodingStatus::SuccessfulImport", (int64)ETranscodingStatus::SuccessfulImport },
				{ "ETranscodingStatus::FailedToReadAudioDataArray", (int64)ETranscodingStatus::FailedToReadAudioDataArray },
				{ "ETranscodingStatus::SoundWaveDeclarationError", (int64)ETranscodingStatus::SoundWaveDeclarationError },
				{ "ETranscodingStatus::InvalidAudioFormat", (int64)ETranscodingStatus::InvalidAudioFormat },
				{ "ETranscodingStatus::AudioDoesNotExist", (int64)ETranscodingStatus::AudioDoesNotExist },
				{ "ETranscodingStatus::LoadFileToArrayError", (int64)ETranscodingStatus::LoadFileToArrayError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioDoesNotExist.Comment", "/** The audio file does not exist */" },
				{ "AudioDoesNotExist.DisplayName", "Audio does not exist" },
				{ "AudioDoesNotExist.Name", "ETranscodingStatus::AudioDoesNotExist" },
				{ "AudioDoesNotExist.ToolTip", "The audio file does not exist" },
				{ "BlueprintType", "true" },
				{ "Category", "Runtime Audio Importer" },
				{ "Comment", "/** Possible audio importing results */" },
				{ "FailedToReadAudioDataArray.Comment", "/** Failed to read Audio Data Array */" },
				{ "FailedToReadAudioDataArray.DisplayName", "Failed to read Audio Data Array" },
				{ "FailedToReadAudioDataArray.Name", "ETranscodingStatus::FailedToReadAudioDataArray" },
				{ "FailedToReadAudioDataArray.ToolTip", "Failed to read Audio Data Array" },
				{ "InvalidAudioFormat.Comment", "/** Invalid audio format (Can't determine the format of the audio file) */" },
				{ "InvalidAudioFormat.DisplayName", "Invalid audio format" },
				{ "InvalidAudioFormat.Name", "ETranscodingStatus::InvalidAudioFormat" },
				{ "InvalidAudioFormat.ToolTip", "Invalid audio format (Can't determine the format of the audio file)" },
				{ "LoadFileToArrayError.Comment", "/** Load file to array error */" },
				{ "LoadFileToArrayError.DisplayName", "Load file to array error" },
				{ "LoadFileToArrayError.Name", "ETranscodingStatus::LoadFileToArrayError" },
				{ "LoadFileToArrayError.ToolTip", "Load file to array error" },
				{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
				{ "SoundWaveDeclarationError.Comment", "/** SoundWave declaration error */" },
				{ "SoundWaveDeclarationError.DisplayName", "SoundWave declaration error" },
				{ "SoundWaveDeclarationError.Name", "ETranscodingStatus::SoundWaveDeclarationError" },
				{ "SoundWaveDeclarationError.ToolTip", "SoundWave declaration error" },
				{ "SuccessfulImport.Comment", "/** Successful import */" },
				{ "SuccessfulImport.DisplayName", "Success" },
				{ "SuccessfulImport.Name", "ETranscodingStatus::SuccessfulImport" },
				{ "SuccessfulImport.ToolTip", "Successful import" },
				{ "ToolTip", "Possible audio importing results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
				nullptr,
				"ETranscodingStatus",
				"ETranscodingStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEditableSubtitleCue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEAUDIOIMPORTER_API uint32 Get_Z_Construct_UScriptStruct_FEditableSubtitleCue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditableSubtitleCue, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("EditableSubtitleCue"), sizeof(FEditableSubtitleCue), Get_Z_Construct_UScriptStruct_FEditableSubtitleCue_Hash());
	}
	return Singleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FEditableSubtitleCue>()
{
	return FEditableSubtitleCue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditableSubtitleCue(FEditableSubtitleCue::StaticStruct, TEXT("/Script/RuntimeAudioImporter"), TEXT("EditableSubtitleCue"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeAudioImporter_StaticRegisterNativesFEditableSubtitleCue
{
	FScriptStruct_RuntimeAudioImporter_StaticRegisterNativesFEditableSubtitleCue()
	{
		UScriptStruct::DeferCppStructOps<FEditableSubtitleCue>(FName(TEXT("EditableSubtitleCue")));
	}
} ScriptStruct_RuntimeAudioImporter_StaticRegisterNativesFEditableSubtitleCue;
	struct Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** A line of subtitle text and the time at which it should be displayed. This is the same as FSubtitleCue but editable in Blueprints */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "A line of subtitle text and the time at which it should be displayed. This is the same as FSubtitleCue but editable in Blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditableSubtitleCue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** The text to appear in the subtitle */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "The text to appear in the subtitle" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditableSubtitleCue, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditableSubtitleCue, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
		nullptr,
		&NewStructOps,
		"EditableSubtitleCue",
		sizeof(FEditableSubtitleCue),
		alignof(FEditableSubtitleCue),
		Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditableSubtitleCue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditableSubtitleCue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditableSubtitleCue"), sizeof(FEditableSubtitleCue), Get_Z_Construct_UScriptStruct_FEditableSubtitleCue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditableSubtitleCue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditableSubtitleCue_Hash() { return 2667772447U; }
class UScriptStruct* FCompressedSoundWaveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEAUDIOIMPORTER_API uint32 Get_Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("CompressedSoundWaveInfo"), sizeof(FCompressedSoundWaveInfo), Get_Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Hash());
	}
	return Singleton;
}
template<> RUNTIMEAUDIOIMPORTER_API UScriptStruct* StaticStruct<FCompressedSoundWaveInfo>()
{
	return FCompressedSoundWaveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompressedSoundWaveInfo(FCompressedSoundWaveInfo::StaticStruct, TEXT("/Script/RuntimeAudioImporter"), TEXT("CompressedSoundWaveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeAudioImporter_StaticRegisterNativesFCompressedSoundWaveInfo
{
	FScriptStruct_RuntimeAudioImporter_StaticRegisterNativesFCompressedSoundWaveInfo()
	{
		UScriptStruct::DeferCppStructOps<FCompressedSoundWaveInfo>(FName(TEXT("CompressedSoundWaveInfo")));
	}
} ScriptStruct_RuntimeAudioImporter_StaticRegisterNativesFCompressedSoundWaveInfo;
	struct Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** Compressed sound wave information */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "Compressed sound wave information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedSoundWaveInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** Sound group */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "Sound group" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup = { "SoundGroup", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompressedSoundWaveInfo, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** If set, when played directly (not through a sound cue) the wave will be played looping */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "If set, when played directly (not through a sound cue) the wave will be played looping" },
	};
#endif
	void Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FCompressedSoundWaveInfo*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCompressedSoundWaveInfo), &Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Playback volume of sound 0 to 1 - Default is 1.0 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompressedSoundWaveInfo, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.125" },
		{ "Comment", "/** Playback pitch for sound. */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
		{ "ToolTip", "Playback pitch for sound." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompressedSoundWaveInfo, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_SoundGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::NewProp_Pitch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
		nullptr,
		&NewStructOps,
		"CompressedSoundWaveInfo",
		sizeof(FCompressedSoundWaveInfo),
		alignof(FCompressedSoundWaveInfo),
		Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompressedSoundWaveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompressedSoundWaveInfo"), sizeof(FCompressedSoundWaveInfo), Get_Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompressedSoundWaveInfo_Hash() { return 423260674U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
