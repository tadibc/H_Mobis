// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMicrophoneSpeakComponent;
#ifdef UNIVERSALVOICECHATPRO_MicrophoneSpeakComponent_generated_h
#error "MicrophoneSpeakComponent.generated.h already included, missing '#pragma once' in MicrophoneSpeakComponent.h"
#endif
#define UNIVERSALVOICECHATPRO_MicrophoneSpeakComponent_generated_h

#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_31_DELEGATE \
struct MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms \
{ \
	TArray<uint8> data; \
}; \
static inline void FDataMicrophoneReceived_DelegateWrapper(const FMulticastScriptDelegate& DataMicrophoneReceived, TArray<uint8> const& data) \
{ \
	MicrophoneSpeakComponent_eventDataMicrophoneReceived_Parms Parms; \
	Parms.data=data; \
	DataMicrophoneReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_SPARSE_DATA
#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_RPC_WRAPPERS \
	virtual void RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize); \
	virtual void RPCServerBroadcastVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize); \
	virtual void RPCClientTransmitVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange); \
 \
	DECLARE_FUNCTION(execsetAttenuationAssetPath); \
	DECLARE_FUNCTION(execpayloadReceivedVoiceData); \
	DECLARE_FUNCTION(execRPCReceiveVoiceFromServer); \
	DECLARE_FUNCTION(execRPCServerBroadcastVoiceData); \
	DECLARE_FUNCTION(execRPCClientTransmitVoiceData); \
	DECLARE_FUNCTION(execSetVoiceVolume); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execendSpeaking); \
	DECLARE_FUNCTION(execstartSpeaking); \
	DECLARE_FUNCTION(execinitAudioResources); \
	DECLARE_FUNCTION(execisPlayingAudioVoice);


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, TArray<uint8> const& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize); \
	virtual void RPCServerBroadcastVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize); \
	virtual void RPCClientTransmitVoiceData_Implementation(TArray<uint8> const& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange); \
 \
	DECLARE_FUNCTION(execsetAttenuationAssetPath); \
	DECLARE_FUNCTION(execpayloadReceivedVoiceData); \
	DECLARE_FUNCTION(execRPCReceiveVoiceFromServer); \
	DECLARE_FUNCTION(execRPCServerBroadcastVoiceData); \
	DECLARE_FUNCTION(execRPCClientTransmitVoiceData); \
	DECLARE_FUNCTION(execSetVoiceVolume); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execendSpeaking); \
	DECLARE_FUNCTION(execstartSpeaking); \
	DECLARE_FUNCTION(execinitAudioResources); \
	DECLARE_FUNCTION(execisPlayingAudioVoice);


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_EVENT_PARMS \
	struct MicrophoneSpeakComponent_eventRPCClientTransmitVoiceData_Parms \
	{ \
		TArray<uint8> data; \
		int32 sampleRate; \
		int32 numchannels; \
		int32 PCMSize; \
		bool _isGlobal; \
		int32 _radioChannel; \
		bool _useRange; \
		float _maxRange; \
	}; \
	struct MicrophoneSpeakComponent_eventRPCReceiveVoiceFromServer_Parms \
	{ \
		UMicrophoneSpeakComponent* compToOutputVoice; \
		TArray<uint8> dataEncoded; \
		int32 sampleRate; \
		int32 numchannels; \
		int32 PCMSize; \
	}; \
	struct MicrophoneSpeakComponent_eventRPCServerBroadcastVoiceData_Parms \
	{ \
		TArray<uint8> data; \
		int32 sampleRate; \
		int32 numchannels; \
		int32 PCMSize; \
	};


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_CALLBACK_WRAPPERS
#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMicrophoneSpeakComponent(); \
	friend struct Z_Construct_UClass_UMicrophoneSpeakComponent_Statics; \
public: \
	DECLARE_CLASS(UMicrophoneSpeakComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(UMicrophoneSpeakComponent)


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMicrophoneSpeakComponent(); \
	friend struct Z_Construct_UClass_UMicrophoneSpeakComponent_Statics; \
public: \
	DECLARE_CLASS(UMicrophoneSpeakComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(UMicrophoneSpeakComponent)


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicrophoneSpeakComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicrophoneSpeakComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicrophoneSpeakComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicrophoneSpeakComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicrophoneSpeakComponent(UMicrophoneSpeakComponent&&); \
	NO_API UMicrophoneSpeakComponent(const UMicrophoneSpeakComponent&); \
public:


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicrophoneSpeakComponent(UMicrophoneSpeakComponent&&); \
	NO_API UMicrophoneSpeakComponent(const UMicrophoneSpeakComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicrophoneSpeakComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicrophoneSpeakComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMicrophoneSpeakComponent)


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_26_PROLOG \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_EVENT_PARMS


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_SPARSE_DATA \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_RPC_WRAPPERS \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_INCLASS \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_SPARSE_DATA \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_CALLBACK_WRAPPERS \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<class UMicrophoneSpeakComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_MicrophoneSpeakComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
