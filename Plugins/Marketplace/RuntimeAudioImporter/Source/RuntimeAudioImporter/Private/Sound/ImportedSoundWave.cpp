// Georgy Treshchev 2022.

#include "Sound/ImportedSoundWave.h"
#include "RuntimeAudioImporterDefines.h"
#include "AudioDevice.h"
#include "Async/Async.h"
#include "Transcoders/VorbisTranscoder.h"
#include "UObject/GCObjectScopeGuard.h"

UImportedSoundWave::UImportedSoundWave(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
  , DurationOffset(0)
  , PlaybackFinishedBroadcast(false)
  , PlayedNumOfFrames(0)
  , PCMBufferInfo(MakeUnique<FPCMStruct>())
  , bStopSoundOnPlaybackFinish(true)
{
	ensure(PCMBufferInfo);

	SetSampleRate(0);
	NumChannels = 0;
	Duration = 0;
	bProcedural = true;
	DecompressionType = EDecompressionType::DTYPE_Procedural;
	SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	SetPrecacheState(ESoundWavePrecacheState::Done);
}

UImportedSoundWave* UImportedSoundWave::CreateImportedSoundWave()
{
	if (!IsInGameThread())
	{
		UE_LOG(LogRuntimeAudioImporter, Error, TEXT("Unable to create a sound wave outside of the game thread"));
		return nullptr;
	}

	return NewObject<UImportedSoundWave>();
}

Audio::EAudioMixerStreamDataFormat::Type UImportedSoundWave::GetGeneratedPCMDataFormat() const
{
	return Audio::EAudioMixerStreamDataFormat::Type::Float;
}

#if WITH_RUNTIMEAUDIOIMPORTER_METASOUND_SUPPORT
TUniquePtr<Audio::IProxyData> UImportedSoundWave::CreateNewProxyData(const Audio::FProxyDataInitParams& InitParams)
{
	if (SoundWaveDataPtr)
	{
		SoundWaveDataPtr->OverrideRuntimeFormat(Audio::NAME_OGG);
	}
	return USoundWave::CreateNewProxyData(InitParams);
}

bool UImportedSoundWave::InitAudioResource(FName Format)
{
	// Only OGG format is supported for audio resource initialization
	if (Format != Audio::NAME_OGG)
	{
		ensureMsgf(false, TEXT("RuntimeAudioImporter does not support audio format '%s' for initialization. Please explicitly set the audio format to '%s' in your project settings"), *Format.ToString(), *Audio::NAME_OGG.ToString());
		return false;
	}

	if (SoundWaveDataPtr->GetResourceSize() > 0)
	{
		return true;
	}

	FDecodedAudioStruct DecodedAudioInfo;
	{
		FScopeLock Lock(&DataGuard);
		{
			DecodedAudioInfo.PCMInfo = GetPCMBuffer();
			FSoundWaveBasicStruct SoundWaveBasicInfo;
			{
				SoundWaveBasicInfo.NumOfChannels = NumChannels;
				SoundWaveBasicInfo.SampleRate = GetSampleRate();
				SoundWaveBasicInfo.Duration = Duration;
			}
			DecodedAudioInfo.SoundWaveBasicInfo = SoundWaveBasicInfo;
		}
	}

	FEncodedAudioStruct EncodedAudioInfo;
	if (!VorbisTranscoder::Encode(MoveTemp(DecodedAudioInfo), EncodedAudioInfo, 100))
	{
		UE_LOG(LogRuntimeAudioImporter, Error, TEXT("Something went wrong while encoding Vorbis audio data"));
		return false;
	}

	if (EncodedAudioInfo.AudioData.GetView().Num() <= 0)
	{
		return false;
	}

	FByteBulkData CompressedBulkData;

	// Filling in the compressed data
	{
		CompressedBulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(CompressedBulkData.Realloc(EncodedAudioInfo.AudioData.GetView().Num()), EncodedAudioInfo.AudioData.GetView().GetData(), EncodedAudioInfo.AudioData.GetView().Num());
		CompressedBulkData.Unlock();
	}

	USoundWave::InitAudioResource(CompressedBulkData);

	return true;
}

bool UImportedSoundWave::IsSeekable() const
{
	FScopeLock Lock(&DataGuard);
	return PCMBufferInfo.IsValid() && PCMBufferInfo.Get()->PCMData.GetView().Num() > 0 && PCMBufferInfo.Get()->PCMNumOfFrames > 0;
}
#endif

int32 UImportedSoundWave::OnGeneratePCMAudio(TArray<uint8>& OutAudio, int32 NumSamples)
{
	FScopeLock Lock(&DataGuard);

	if (!PCMBufferInfo.IsValid())
	{
		return 0;
	}

	// Ensure there is enough number of frames. Lack of frames means audio playback has finished
	if (GetNumOfPlayedFrames_Internal() >= PCMBufferInfo->PCMNumOfFrames)
	{
		return 0;
	}

	// Getting the remaining number of samples if the required number of samples is greater than the total available number
	if (GetNumOfPlayedFrames_Internal() + (static_cast<uint32>(NumSamples) / static_cast<uint32>(NumChannels)) >= PCMBufferInfo->PCMNumOfFrames)
	{
		NumSamples = (PCMBufferInfo->PCMNumOfFrames - GetNumOfPlayedFrames_Internal()) * NumChannels;
	}

	// Retrieving a part of PCM data
	float* RetrievedPCMDataPtr = PCMBufferInfo->PCMData.GetView().GetData() + (GetNumOfPlayedFrames_Internal() * NumChannels);
	const int32 RetrievedPCMDataSize = NumSamples * sizeof(float);

	// Ensure we got a valid PCM data
	if (RetrievedPCMDataSize <= 0 || !RetrievedPCMDataPtr)
	{
		UE_LOG(LogRuntimeAudioImporter, Error, TEXT("Unable to get PCM audio from imported sound wave since the retrieved PCM data is invalid"));
		return 0;
	}

	// Filling in OutAudio array with the retrieved PCM data
	OutAudio = TArray<uint8>(reinterpret_cast<uint8*>(RetrievedPCMDataPtr), RetrievedPCMDataSize);

	// Increasing the number of frames played
	SetNumOfPlayedFrames_Internal(GetNumOfPlayedFrames_Internal() + (NumSamples / NumChannels));
	
	if (OnGeneratePCMDataNative.IsBound() || OnGeneratePCMData.IsBound())
	{
		TArray<float> PCMData(RetrievedPCMDataPtr, NumSamples);
		AsyncTask(ENamedThreads::GameThread, [this, PCMData = MoveTemp(PCMData)]
		{
			if (OnGeneratePCMDataNative.IsBound())
			{
				OnGeneratePCMDataNative.Broadcast(PCMData);
			}

			if (OnGeneratePCMData.IsBound())
			{
				OnGeneratePCMData.Broadcast(PCMData);
			}
		});
	}

	return NumSamples;
}

void UImportedSoundWave::BeginDestroy()
{
	UE_LOG(LogRuntimeAudioImporter, Warning, TEXT("Imported sound wave ('%s') data will be cleared because it is being unloaded"), *GetName());

	Super::BeginDestroy();
}

void UImportedSoundWave::Parse(FAudioDevice* AudioDevice, const UPTRINT NodeWaveInstanceHash, FActiveSound& ActiveSound, const FSoundParseParameters& ParseParams, TArray<FWaveInstance*>& WaveInstances)
{
	FScopeLock Lock(&DataGuard);

#if ENGINE_MAJOR_VERSION >= 5
	if (ActiveSound.PlaybackTime == 0.f)
	{
		RewindPlaybackTime_Internal(ParseParams.StartTime);
	}
#endif

	ActiveSound.PlaybackTime = GetPlaybackTime_Internal();

	if (IsPlaybackFinished_Internal())
	{
		if (!PlaybackFinishedBroadcast)
		{
			UE_LOG(LogRuntimeAudioImporter, Warning, TEXT("Playback of the sound wave '%s' has been completed"), *GetName());

			PlaybackFinishedBroadcast = true;

			if (OnAudioPlaybackFinishedNative.IsBound() || OnAudioPlaybackFinished.IsBound())
			{
				AsyncTask(ENamedThreads::GameThread, [this]()
				{
					if (OnAudioPlaybackFinishedNative.IsBound())
					{
						OnAudioPlaybackFinishedNative.Broadcast();
					}

					if (OnAudioPlaybackFinished.IsBound())
					{
						OnAudioPlaybackFinished.Broadcast();
					}
				});
			}
		}

		if (!bLooping)
		{
			if (bStopSoundOnPlaybackFinish)
			{
				UE_LOG(LogRuntimeAudioImporter, Log, TEXT("Playback of the sound wave '%s' has reached the end and will be stopped"), *GetName());
				AudioDevice->StopActiveSound(&ActiveSound);
			}
		}
		else
		{
			UE_LOG(LogRuntimeAudioImporter, Log, TEXT("The sound wave '%s' will be looped"), *GetName());
			ActiveSound.PlaybackTime = 0.f;
			RewindPlaybackTime_Internal(0.f);
		}
	}

	Super::Parse(AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances);
}

void UImportedSoundWave::PopulateAudioDataFromDecodedInfo(FDecodedAudioStruct&& DecodedAudioInfo)
{
	FScopeLock Lock(&DataGuard);

	const FString DecodedAudioInfoString = DecodedAudioInfo.ToString();

	Duration = DecodedAudioInfo.SoundWaveBasicInfo.Duration;
	SetSampleRate(DecodedAudioInfo.SoundWaveBasicInfo.SampleRate);
	NumChannels = DecodedAudioInfo.SoundWaveBasicInfo.NumOfChannels;

	PCMBufferInfo->PCMData = MoveTemp(DecodedAudioInfo.PCMInfo.PCMData);
	PCMBufferInfo->PCMNumOfFrames = DecodedAudioInfo.PCMInfo.PCMNumOfFrames;

	UE_LOG(LogRuntimeAudioImporter, Log, TEXT("The audio data has been populated successfully. Information about audio data:\n%s"), *DecodedAudioInfoString);
}

void UImportedSoundWave::PrepareSoundWaveForMetaSounds(const FOnPreparedSoundWaveForMetaSounds& Result)
{
#if WITH_RUNTIMEAUDIOIMPORTER_METASOUND_SUPPORT
	PrepareSoundWaveForMetaSounds(FOnPreparedSoundWaveForMetaSoundsNative::CreateWeakLambda(this, [Result](bool bSucceeded)
	{
		Result.ExecuteIfBound(bSucceeded);
	}));
#else
	UE_LOG(LogRuntimeAudioImporter, Error, TEXT("PrepareSoundWaveForMetaSounds works only for Unreal Engine version >= 5.2"));
	Result.ExecuteIfBound(false);
#endif
}

void UImportedSoundWave::PrepareSoundWaveForMetaSounds(const FOnPreparedSoundWaveForMetaSoundsNative& Result)
{
#if WITH_RUNTIMEAUDIOIMPORTER_METASOUND_SUPPORT
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [this, Result]()
	{
		FGCObjectScopeGuard Guard(this);

		auto ExecuteResult = [Result](bool bSucceeded)
		{
			AsyncTask(ENamedThreads::GameThread, [Result, bSucceeded]()
			{
				Result.ExecuteIfBound(bSucceeded);
			});
		};

		ExecuteResult(InitAudioResource(Audio::NAME_OGG));
	});
#else
	UE_LOG(LogRuntimeAudioImporter, Error, TEXT("PrepareSoundWaveForMetaSounds works only for Unreal Engine version >= 5.2"));
	Result.ExecuteIfBound(false);
#endif
}

void UImportedSoundWave::ReleaseMemory()
{
	FScopeLock Lock(&DataGuard);
	UE_LOG(LogRuntimeAudioImporter, Warning, TEXT("Releasing memory for the sound wave '%s'"), *GetName());
	PCMBufferInfo.Reset();
}

void UImportedSoundWave::ReleasePlayedAudioData()
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [this]() mutable
	{
		FGCObjectScopeGuard Guard(this);
		FScopeLock Lock(&DataGuard);

		if (GetNumOfPlayedFrames_Internal() == 0)
		{
			UE_LOG(LogRuntimeAudioImporter, Warning, TEXT("No audio data will be released because the current playback time is zero"));
			return;
		}

		const int64 OldNumOfPCMData = PCMBufferInfo->PCMData.GetView().Num();

		if (GetNumOfPlayedFrames_Internal() >= PCMBufferInfo->PCMNumOfFrames)
		{
			ReleaseMemory();
			UE_LOG(LogRuntimeAudioImporter, Log, TEXT("Successfully released all PCM data (%lld)"), OldNumOfPCMData);
			return;
		}

		const int64 NewPCMDataSize = (PCMBufferInfo->PCMNumOfFrames - GetNumOfPlayedFrames_Internal()) * NumChannels * sizeof(float);
		float* NewPCMDataPtr = static_cast<float*>(FMemory::Malloc(NewPCMDataSize * sizeof(float)));

		if (!NewPCMDataPtr)
		{
			UE_LOG(LogRuntimeAudioImporter, Error, TEXT("Failed to allocate new memory to free already played audio data"));
			return;
		}

		// PCM data offset to retrieve remaining data for playback
		const int64 PCMDataOffset = GetNumOfPlayedFrames_Internal() * NumChannels;

		FMemory::Memcpy(NewPCMDataPtr, PCMBufferInfo->PCMData.GetView().GetData() + PCMDataOffset, NewPCMDataSize);

		PCMBufferInfo->PCMData = FRuntimeBulkDataBuffer<float>(NewPCMDataPtr, NewPCMDataSize);

		// Decreasing the amount of PCM frames
		PCMBufferInfo->PCMNumOfFrames -= GetNumOfPlayedFrames_Internal();

		// Decreasing duration and increasing duration offset
		{
			const float DurationOffsetToReduce = GetNumOfPlayedFrames_Internal() / SampleRate;
			Duration -= DurationOffsetToReduce;
			DurationOffset += DurationOffsetToReduce;
		}

		PlayedNumOfFrames = 0;

		UE_LOG(LogRuntimeAudioImporter, Log, TEXT("Successfully released %lld number of PCM data"), static_cast<int64>(OldNumOfPCMData - PCMBufferInfo->PCMData.GetView().Num()));
	});
}

void UImportedSoundWave::SetLooping(bool bLoop)
{
	bLooping = bLoop;
}

void UImportedSoundWave::SetSubtitles(const TArray<FEditableSubtitleCue>& InSubtitles)
{
	Subtitles.Empty();

	for (const FEditableSubtitleCue& Subtitle : InSubtitles)
	{
		FSubtitleCue ConvertedSubtitle;
		{
			ConvertedSubtitle.Text = Subtitle.Text;
			ConvertedSubtitle.Time = Subtitle.Time;
		}

		Subtitles.Add(ConvertedSubtitle);
	}
}

void UImportedSoundWave::SetVolume(float InVolume)
{
	Volume = InVolume;
}

void UImportedSoundWave::SetPitch(float InPitch)
{
	Pitch = InPitch;
}

bool UImportedSoundWave::RewindPlaybackTime(float PlaybackTime)
{
	FScopeLock Lock(&DataGuard);
	return RewindPlaybackTime_Internal(PlaybackTime - GetDurationOffset_Internal());
}

bool UImportedSoundWave::RewindPlaybackTime_Internal(float PlaybackTime)
{
	if (PlaybackTime > Duration)
	{
		UE_LOG(LogRuntimeAudioImporter, Warning, TEXT("Unable to rewind playback time for the imported sound wave '%s' by time '%f' because total length is '%f'"), *GetName(), PlaybackTime, Duration);
		return false;
	}

	return SetNumOfPlayedFrames_Internal(PlaybackTime * SampleRate);
}

bool UImportedSoundWave::SetNumOfPlayedFrames(uint32 NumOfFrames)
{
	FScopeLock Lock(&DataGuard);
	return SetNumOfPlayedFrames_Internal(NumOfFrames);
}

bool UImportedSoundWave::SetNumOfPlayedFrames_Internal(uint32 NumOfFrames)
{
	if (NumOfFrames < 0 || NumOfFrames > PCMBufferInfo->PCMNumOfFrames)
	{
		UE_LOG(LogRuntimeAudioImporter, Error, TEXT("Cannot change the current frame for the imported sound wave '%s' to frame '%d' because the total number of frames is '%d'"), *GetName(), NumOfFrames, PCMBufferInfo->PCMNumOfFrames);
		return false;
	}

	PlayedNumOfFrames = NumOfFrames;

	ResetPlaybackFinish();

	return true;
}

uint32 UImportedSoundWave::GetNumOfPlayedFrames() const
{
	FScopeLock Lock(&DataGuard);
	return GetNumOfPlayedFrames_Internal();
}

uint32 UImportedSoundWave::GetNumOfPlayedFrames_Internal() const
{
	return PlayedNumOfFrames;
}

float UImportedSoundWave::GetPlaybackTime() const
{
	FScopeLock Lock(&DataGuard);
	return GetPlaybackTime_Internal() + GetDurationOffset_Internal();
}

float UImportedSoundWave::GetPlaybackTime_Internal() const
{
	if (GetNumOfPlayedFrames() == 0 || SampleRate <= 0)
	{
		return 0;
	}

	return static_cast<float>(GetNumOfPlayedFrames()) / SampleRate;
}

float UImportedSoundWave::GetDurationConst() const
{
	FScopeLock Lock(&DataGuard);
	return GetDurationConst_Internal() + GetDurationOffset_Internal();
}

float UImportedSoundWave::GetDurationConst_Internal() const
{
	return Duration;
}

float UImportedSoundWave::GetDuration()
#if ENGINE_MAJOR_VERSION >= 5
const
#endif
{
	return GetDurationConst();
}

int32 UImportedSoundWave::GetSampleRate() const
{
	return SampleRate;
}

float UImportedSoundWave::GetPlaybackPercentage() const
{
	FScopeLock Lock(&DataGuard);

	if (GetNumOfPlayedFrames_Internal() == 0 || PCMBufferInfo->PCMNumOfFrames == 0)
	{
		return 0;
	}

	return static_cast<float>(GetNumOfPlayedFrames_Internal()) / PCMBufferInfo->PCMNumOfFrames * 100;
}

bool UImportedSoundWave::IsPlaybackFinished() const
{
	FScopeLock Lock(&DataGuard);
	return IsPlaybackFinished_Internal();
}

float UImportedSoundWave::GetDurationOffset() const
{
	FScopeLock Lock(&DataGuard);
	return DurationOffset;
}

float UImportedSoundWave::GetDurationOffset_Internal() const
{
	return DurationOffset;
}

bool UImportedSoundWave::IsPlaybackFinished_Internal() const
{
	// Are there enough frames for future playback from the current ones or not
	const bool bOutOfFrames = GetNumOfPlayedFrames_Internal() >= PCMBufferInfo->PCMNumOfFrames;

	// Is PCM data valid
	const bool bValidPCMData = PCMBufferInfo.IsValid();

	return bOutOfFrames && bValidPCMData;
}

void UImportedSoundWave::ResetPlaybackFinish()
{
	PlaybackFinishedBroadcast = false;
}

const FPCMStruct& UImportedSoundWave::GetPCMBuffer() const
{
	return *PCMBufferInfo.Get();
}
