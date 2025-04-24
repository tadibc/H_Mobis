// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
class UObject;
class APlayerState;
class APlayerVoiceChatActor;
#ifdef UNIVERSALVOICECHATPRO_PlayerVoiceChatActor_generated_h
#error "PlayerVoiceChatActor.generated.h already included, missing '#pragma once' in PlayerVoiceChatActor.h"
#endif
#define UNIVERSALVOICECHATPRO_PlayerVoiceChatActor_generated_h

#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_SPARSE_DATA
#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_RPC_WRAPPERS \
	virtual void RPCClientAskRemoveChannel_Implementation(int32 channelToRemove); \
	virtual void RPCClientAskAddChannel_Implementation(int32 channelToAdd); \
	virtual void RPCServerUpdatePosAudioComp_Implementation(FVector worldPos); \
	virtual void RPCClientSetMicrophoneVolume_Implementation(float volume); \
 \
	DECLARE_FUNCTION(execRPCClientAskRemoveChannel); \
	DECLARE_FUNCTION(execRPCClientAskAddChannel); \
	DECLARE_FUNCTION(execRPCServerUpdatePosAudioComp); \
	DECLARE_FUNCTION(execRPCClientSetMicrophoneVolume); \
	DECLARE_FUNCTION(execServerSetMaxProximityRange); \
	DECLARE_FUNCTION(execServerSetAllowUseProximity); \
	DECLARE_FUNCTION(execServerSetAttenuation); \
	DECLARE_FUNCTION(execServerRemoveChannel); \
	DECLARE_FUNCTION(execServerAddChannel); \
	DECLARE_FUNCTION(execServerSetAllowUseGlobal); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execRepNotifyVoiceVolume); \
	DECLARE_FUNCTION(execRepNotifyAttenuationAsset); \
	DECLARE_FUNCTION(execRepNotifyMicComp); \
	DECLARE_FUNCTION(execDelegateEndPlayOwner);


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCClientAskRemoveChannel_Implementation(int32 channelToRemove); \
	virtual void RPCClientAskAddChannel_Implementation(int32 channelToAdd); \
	virtual void RPCServerUpdatePosAudioComp_Implementation(FVector worldPos); \
	virtual void RPCClientSetMicrophoneVolume_Implementation(float volume); \
 \
	DECLARE_FUNCTION(execRPCClientAskRemoveChannel); \
	DECLARE_FUNCTION(execRPCClientAskAddChannel); \
	DECLARE_FUNCTION(execRPCServerUpdatePosAudioComp); \
	DECLARE_FUNCTION(execRPCClientSetMicrophoneVolume); \
	DECLARE_FUNCTION(execServerSetMaxProximityRange); \
	DECLARE_FUNCTION(execServerSetAllowUseProximity); \
	DECLARE_FUNCTION(execServerSetAttenuation); \
	DECLARE_FUNCTION(execServerRemoveChannel); \
	DECLARE_FUNCTION(execServerAddChannel); \
	DECLARE_FUNCTION(execServerSetAllowUseGlobal); \
	DECLARE_FUNCTION(execmuteAudio); \
	DECLARE_FUNCTION(execRepNotifyVoiceVolume); \
	DECLARE_FUNCTION(execRepNotifyAttenuationAsset); \
	DECLARE_FUNCTION(execRepNotifyMicComp); \
	DECLARE_FUNCTION(execDelegateEndPlayOwner);


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_EVENT_PARMS \
	struct PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms \
	{ \
		int32 channelToAdd; \
	}; \
	struct PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms \
	{ \
		int32 channelToRemove; \
	}; \
	struct PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms \
	{ \
		float volume; \
	}; \
	struct PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms \
	{ \
		FVector worldPos; \
	};


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_CALLBACK_WRAPPERS
#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerVoiceChatActor(); \
	friend struct Z_Construct_UClass_APlayerVoiceChatActor_Statics; \
public: \
	DECLARE_CLASS(APlayerVoiceChatActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(APlayerVoiceChatActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		microphoneSpeakComponent=NETFIELD_REP_START, \
		ownerPlayerState, \
		idVoiceChat, \
		voiceVolume, \
		radioChannelSubscribed, \
		pathToAttenuationAsset, \
		NETFIELD_REP_END=pathToAttenuationAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerVoiceChatActor(); \
	friend struct Z_Construct_UClass_APlayerVoiceChatActor_Statics; \
public: \
	DECLARE_CLASS(APlayerVoiceChatActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(APlayerVoiceChatActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		microphoneSpeakComponent=NETFIELD_REP_START, \
		ownerPlayerState, \
		idVoiceChat, \
		voiceVolume, \
		radioChannelSubscribed, \
		pathToAttenuationAsset, \
		NETFIELD_REP_END=pathToAttenuationAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerVoiceChatActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerVoiceChatActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerVoiceChatActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerVoiceChatActor(APlayerVoiceChatActor&&); \
	NO_API APlayerVoiceChatActor(const APlayerVoiceChatActor&); \
public:


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerVoiceChatActor(APlayerVoiceChatActor&&); \
	NO_API APlayerVoiceChatActor(const APlayerVoiceChatActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerVoiceChatActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerVoiceChatActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerVoiceChatActor)


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_20_PROLOG \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_EVENT_PARMS


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_RPC_WRAPPERS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_CALLBACK_WRAPPERS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_INCLASS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_CALLBACK_WRAPPERS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<class APlayerVoiceChatActor>();

#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_SPARSE_DATA
#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVoiceChatAskMicrophonePermission); \
	DECLARE_FUNCTION(execVoiceChatHasMicrophonePermission); \
	DECLARE_FUNCTION(execVoiceChatRemoveChannel); \
	DECLARE_FUNCTION(execVoiceChatAddChannel); \
	DECLARE_FUNCTION(execVoiceChatCheckRegisteredToChannel); \
	DECLARE_FUNCTION(execVoiceChatLocalIsMutedSomeone); \
	DECLARE_FUNCTION(execVoiceChatLocalMuteSomeone); \
	DECLARE_FUNCTION(execVoiceChatSetMicrophoneVolume); \
	DECLARE_FUNCTION(execVoiceChatStopSpeak); \
	DECLARE_FUNCTION(execVoiceChatStartSpeak); \
	DECLARE_FUNCTION(execVoiceChatWasInitAudioVoiceChatQuality); \
	DECLARE_FUNCTION(execVoiceChatInitAudioVoiceChatQuality); \
	DECLARE_FUNCTION(execVoiceChatGetMyLocalPlayerVoiceChat);


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVoiceChatAskMicrophonePermission); \
	DECLARE_FUNCTION(execVoiceChatHasMicrophonePermission); \
	DECLARE_FUNCTION(execVoiceChatRemoveChannel); \
	DECLARE_FUNCTION(execVoiceChatAddChannel); \
	DECLARE_FUNCTION(execVoiceChatCheckRegisteredToChannel); \
	DECLARE_FUNCTION(execVoiceChatLocalIsMutedSomeone); \
	DECLARE_FUNCTION(execVoiceChatLocalMuteSomeone); \
	DECLARE_FUNCTION(execVoiceChatSetMicrophoneVolume); \
	DECLARE_FUNCTION(execVoiceChatStopSpeak); \
	DECLARE_FUNCTION(execVoiceChatStartSpeak); \
	DECLARE_FUNCTION(execVoiceChatWasInitAudioVoiceChatQuality); \
	DECLARE_FUNCTION(execVoiceChatInitAudioVoiceChatQuality); \
	DECLARE_FUNCTION(execVoiceChatGetMyLocalPlayerVoiceChat);


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniversalVoiceChat(); \
	friend struct Z_Construct_UClass_UUniversalVoiceChat_Statics; \
public: \
	DECLARE_CLASS(UUniversalVoiceChat, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(UUniversalVoiceChat)


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_INCLASS \
private: \
	static void StaticRegisterNativesUUniversalVoiceChat(); \
	friend struct Z_Construct_UClass_UUniversalVoiceChat_Statics; \
public: \
	DECLARE_CLASS(UUniversalVoiceChat, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniversalVoiceChatPro"), NO_API) \
	DECLARE_SERIALIZER(UUniversalVoiceChat)


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniversalVoiceChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniversalVoiceChat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniversalVoiceChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniversalVoiceChat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniversalVoiceChat(UUniversalVoiceChat&&); \
	NO_API UUniversalVoiceChat(const UUniversalVoiceChat&); \
public:


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniversalVoiceChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniversalVoiceChat(UUniversalVoiceChat&&); \
	NO_API UUniversalVoiceChat(const UUniversalVoiceChat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniversalVoiceChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniversalVoiceChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniversalVoiceChat)


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_137_PROLOG
#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_RPC_WRAPPERS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_INCLASS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_SPARSE_DATA \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<class UUniversalVoiceChat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_Marketplace_UniversalVoiceChatPro_Source_UniversalVoiceChatPro_Public_PlayerVoiceChatActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
