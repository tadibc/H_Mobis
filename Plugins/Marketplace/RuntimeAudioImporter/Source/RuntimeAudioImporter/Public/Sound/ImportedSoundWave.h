// Georgy Treshchev 2022.

#pragma once

#include "RuntimeAudioImporterTypes.h"
#include "Sound/SoundWaveProcedural.h"
#include "ImportedSoundWave.generated.h"

/** Static delegate broadcast to track the end of audio playback */
DECLARE_MULTICAST_DELEGATE(FOnAudioPlaybackFinishedNative);

/** Dynamic delegate broadcast to track the end of audio playback */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioPlaybackFinished);


/** Static delegate broadcast PCM data during a generation request */
DECLARE_MULTICAST_DELEGATE_OneParam(FOnGeneratePCMDataNative, const TArray<float>&);

/** Dynamic delegate broadcast PCM data during a generation request */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGeneratePCMData, const TArray<float>&, PCMData);


/** Static delegate broadcasting the result of preparing a sound wave for MetaSounds */
DECLARE_DELEGATE_OneParam(FOnPreparedSoundWaveForMetaSoundsNative, bool);

/** Dynamic delegate broadcasting the result of preparing a sound wave for MetaSounds */
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPreparedSoundWaveForMetaSounds, bool, bSucceeded);


/**
 * Imported sound wave. Assumed to be dynamically populated once from the decoded audio data.
 * Audio data preparation takes place in the Runtime Audio Importer library
 */
UCLASS(BlueprintType, Category = "Imported Sound Wave")
class RUNTIMEAUDIOIMPORTER_API UImportedSoundWave : public USoundWaveProcedural
{
	GENERATED_BODY()

public:
	UImportedSoundWave(const FObjectInitializer& ObjectInitializer);

	/**
	 * Create a new instance of the imported sound wave
	 *
	 * @return Created imported sound wave
	 */
	static UImportedSoundWave* CreateImportedSoundWave();

	//~ Begin USoundWave Interface
	virtual void BeginDestroy() override;
	virtual void Parse(class FAudioDevice* AudioDevice, const UPTRINT NodeWaveInstanceHash, FActiveSound& ActiveSound, const FSoundParseParameters& ParseParams, TArray<FWaveInstance*>& WaveInstances) override;
	virtual Audio::EAudioMixerStreamDataFormat::Type GetGeneratedPCMDataFormat() const override;
#if WITH_RUNTIMEAUDIOIMPORTER_METASOUND_SUPPORT
	virtual TUniquePtr<Audio::IProxyData> CreateNewProxyData(const Audio::FProxyDataInitParams& InitParams) override;
	virtual bool InitAudioResource(FName Format) override;
	virtual bool IsSeekable() const override;
#endif
	//~ End USoundWave Interface

	//~ Begin USoundWaveProcedural Interface
	virtual int32 OnGeneratePCMAudio(TArray<uint8>& OutAudio, int32 NumSamples) override;
	//~ End USoundWaveProcedural Interface

	/**
	 * Populate audio data from decoded info
	 *
	 * @param DecodedAudioInfo Decoded audio data
	 */
	virtual void PopulateAudioDataFromDecodedInfo(FDecodedAudioStruct&& DecodedAudioInfo);

	/**
	 * Prepare this sound wave to be able to set wave parameter for MetaSounds
	 * @param Result Delegate broadcasting the result. Set the wave parameter only after it has been broadcast
	 * @warning This works if bEnableMetaSoundSupport is enabled in RuntimeAudioImporter.Build.cs/RuntimeAudioImporterEditor.Build.cs and only on Unreal Engine version >= 5.2
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|MetaSounds")
	void PrepareSoundWaveForMetaSounds(const FOnPreparedSoundWaveForMetaSounds& Result);

	/**
	 * Prepare this sound wave to be able to set wave parameter for MetaSounds. Suitable for use in C++
	 * @param Result Delegate broadcasting the result. Set the wave parameter only after it has been broadcast
	 */
	void PrepareSoundWaveForMetaSounds(const FOnPreparedSoundWaveForMetaSoundsNative& Result);

	/**
	 * Release sound wave data. Call it manually only if you are sure of it
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Miscellaneous")
	void ReleaseMemory();

	/**
	 * Remove previously played audio data. Adds a duration offset from the removed audio data
	 * This re-allocates all audio data memory, so should not be called too frequently
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Miscellaneous")
	void ReleasePlayedAudioData();

	/**
	 * Set whether the sound should loop or not
	 *
	 * @param bLoop Whether the sound should loop or not
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties")
	void SetLooping(bool bLoop);

	/**
	 * Set subtitle cues
	 *
	 * @param InSubtitles Subtitles cues
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties")
	void SetSubtitles(UPARAM(DisplayName = "Subtitles") const TArray<FEditableSubtitleCue>& InSubtitles);

	/**
	 * Set sound playback volume
	 *
	 * @param InVolume Volume
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties")
	void SetVolume(UPARAM(DisplayName = "Volume") float InVolume = 1);

	/**
	 * Set sound playback pitch
	 *
	 * @param InPitch Pitch
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Properties")
	void SetPitch(UPARAM(DisplayName = "Pitch") float InPitch = 1);

	/**
	 * Rewind the sound for the specified time
	 *
	 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)
	 * @param PlaybackTime How long to rewind the sound
	 * @return Whether the sound was rewound or not
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Main")
	bool RewindPlaybackTime(float PlaybackTime);

	/**
	 * Thread-unsafe equivalent of RewindPlaybackTime
	 * Should only be used if DataGuard is locked
	 * @note This does not add a duration offset
	 */
	bool RewindPlaybackTime_Internal(float PlaybackTime);

	/**
	 * Change the number of frames played back. Used to rewind the sound
	 *
	 * @param NumOfFrames The new number of frames from which to continue playing sound
	 * @return Whether the frames were changed or not
	 */
	bool SetNumOfPlayedFrames(uint32 NumOfFrames);

	/**
	 * Thread-unsafe equivalent of SetNumOfPlayedFrames
	 * Should only be used if DataGuard is locked
	 */
	bool SetNumOfPlayedFrames_Internal(uint32 NumOfFrames);

	/**
	 * Get the number of frames played back
	 *
	 * @return The number of frames played back
	 */
	uint32 GetNumOfPlayedFrames() const;

	/**
	 * Thread-unsafe equivalent of GetNumOfPlayedFrames
	 * Should only be used if DataGuard is locked
	 */
	uint32 GetNumOfPlayedFrames_Internal() const;

	/**
	 * Get the current sound wave playback time, in seconds
	 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info")
	float GetPlaybackTime() const;

	/**
	 * Thread-unsafe equivalent of GetPlaybackTime
	 * Should only be used if DataGuard is locked
	 * @note This does not add a duration offset
	 */
	float GetPlaybackTime_Internal() const;

	/**
	 * Constant alternative for getting the length of the sound wave, in seconds
	 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info", meta = (DisplayName = "Get Duration"))
	float GetDurationConst() const;

	/**
	 * Thread-unsafe equivalent of GetDurationConst
	 * Should only be used if DataGuard is locked
	 * @note This does not add a duration offset
	 */
	float GetDurationConst_Internal() const;

	/**
	 * Get the length of the sound wave, in seconds
	 * @note This adds a duration offset (relevant if ReleasePlayedAudioData was used)
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info")
	virtual float GetDuration()
#if ENGINE_MAJOR_VERSION < 5
	override;
#else
	const override;
#endif

	/**
	 * Get sample rate
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info")
	int32 GetSampleRate() const;

	/**
	 * Get the current sound playback percentage, 0-100%
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info")
	float GetPlaybackPercentage() const;

	/**
	 * Check if audio playback has finished or not
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info")
	bool IsPlaybackFinished() const;

	/**
	 * Get the duration offset if some played back audio data was removed during playback (eg in ReleasePlayedAudioData)
	 * The sound wave starts playing from this time as from the very beginning
	 */
	UFUNCTION(BlueprintCallable, Category = "Imported Sound Wave|Info")
	float GetDurationOffset() const;

	/**
	 * Thread-unsafe equivalent of GetDurationOffset
	 * Should only be used if DataGuard is locked
	 */
	float GetDurationOffset_Internal() const;

	/**
	 * Thread-unsafe equivalent of IsPlaybackFinished
	 * Should only be used if DataGuard is locked
	 */
	bool IsPlaybackFinished_Internal() const;

protected:
	/**
	 * Makes it possible to broadcast OnAudioPlaybackFinished again
	 */
	void ResetPlaybackFinish();

public:
	/** Bind to this delegate to know when the audio playback is finished. Suitable for use in C++ */
	FOnAudioPlaybackFinishedNative OnAudioPlaybackFinishedNative;

	/** Bind to this delegate to know when the audio playback is finished */
	UPROPERTY(BlueprintAssignable, Category = "Imported Sound Wave|Delegates")
	FOnAudioPlaybackFinished OnAudioPlaybackFinished;

	/** Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data). Suitable for use in C++ */
	FOnGeneratePCMDataNative OnGeneratePCMDataNative;

	/** Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data) */
	UPROPERTY(BlueprintAssignable, Category = "Imported Sound Wave|Delegates")
	FOnGeneratePCMData OnGeneratePCMData;

	/**
	 * Get immutable PCM buffer. Use PopulateAudioDataFromDecodedInfo to populate it
	 *
	 * @return PCM buffer
	 */
	const FPCMStruct& GetPCMBuffer() const;

	/** Data guard (mutex) for thread safety */
	mutable FCriticalSection DataGuard;

protected:
	/** Duration offset, needed to track the clearing of part of the audio data of the sound wave during playback (see ReleasePlayedAudioData) */
	float DurationOffset;

	/** Bool to control the behaviour of the OnAudioPlaybackFinished delegate */
	bool PlaybackFinishedBroadcast;

	/** The number of frames played. Increments during playback, should not be > PCMBufferInfo.PCMNumOfFrames */
	uint32 PlayedNumOfFrames;

	/** Contains PCM data for sound wave playback */
	TUniquePtr<FPCMStruct> PCMBufferInfo;

	/** Whether to stop the sound at the end of playback or not. Sound wave will not be garbage collected if playback was completed while this parameter is set to false */
	bool bStopSoundOnPlaybackFinish;
};
