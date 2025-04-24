// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalVoiceChatPro/Public/PlayerVoiceChatActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerVoiceChatActor() {}
// Cross Module References
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_APlayerVoiceChatActor_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_APlayerVoiceChatActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UniversalVoiceChatPro();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UUniversalVoiceChat_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UUniversalVoiceChat();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCClientAskRemoveChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientAskRemoveChannel_Implementation(Z_Param_channelToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCClientAskAddChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientAskAddChannel_Implementation(Z_Param_channelToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCServerUpdatePosAudioComp)
	{
		P_GET_STRUCT(FVector,Z_Param_worldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCServerUpdatePosAudioComp_Implementation(Z_Param_worldPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRPCClientSetMicrophoneVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCClientSetMicrophoneVolume_Implementation(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetMaxProximityRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__maxProximityRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetMaxProximityRange(Z_Param__maxProximityRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetAllowUseProximity)
	{
		P_GET_UBOOL(Z_Param__allowUseRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAllowUseProximity(Z_Param__allowUseRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetAttenuation)
	{
		P_GET_UBOOL(Z_Param_enableAttenuation);
		P_GET_PROPERTY(FStrProperty,Z_Param__pathToAttenuationAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAttenuation(Z_Param_enableAttenuation,Z_Param__pathToAttenuationAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerRemoveChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemoveChannel(Z_Param_channelToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerAddChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddChannel(Z_Param_channelToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execServerSetAllowUseGlobal)
	{
		P_GET_UBOOL(Z_Param__allowUseGlobal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAllowUseGlobal(Z_Param__allowUseGlobal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execmuteAudio)
	{
		P_GET_UBOOL(Z_Param_isMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->muteAudio(Z_Param_isMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRepNotifyVoiceVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepNotifyVoiceVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRepNotifyAttenuationAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepNotifyAttenuationAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execRepNotifyMicComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepNotifyMicComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerVoiceChatActor::execDelegateEndPlayOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_act);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegateEndPlayOwner(Z_Param_act,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	static FName NAME_APlayerVoiceChatActor_RPCClientAskAddChannel = FName(TEXT("RPCClientAskAddChannel"));
	void APlayerVoiceChatActor::RPCClientAskAddChannel(int32 channelToAdd)
	{
		PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms Parms;
		Parms.channelToAdd=channelToAdd;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCClientAskAddChannel),&Parms);
	}
	static FName NAME_APlayerVoiceChatActor_RPCClientAskRemoveChannel = FName(TEXT("RPCClientAskRemoveChannel"));
	void APlayerVoiceChatActor::RPCClientAskRemoveChannel(int32 channelToRemove)
	{
		PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms Parms;
		Parms.channelToRemove=channelToRemove;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCClientAskRemoveChannel),&Parms);
	}
	static FName NAME_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume = FName(TEXT("RPCClientSetMicrophoneVolume"));
	void APlayerVoiceChatActor::RPCClientSetMicrophoneVolume(float volume)
	{
		PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms Parms;
		Parms.volume=volume;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume),&Parms);
	}
	static FName NAME_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp = FName(TEXT("RPCServerUpdatePosAudioComp"));
	void APlayerVoiceChatActor::RPCServerUpdatePosAudioComp(FVector worldPos)
	{
		PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms Parms;
		Parms.worldPos=worldPos;
		ProcessEvent(FindFunctionChecked(NAME_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp),&Parms);
	}
	void APlayerVoiceChatActor::StaticRegisterNativesAPlayerVoiceChatActor()
	{
		UClass* Class = APlayerVoiceChatActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegateEndPlayOwner", &APlayerVoiceChatActor::execDelegateEndPlayOwner },
			{ "muteAudio", &APlayerVoiceChatActor::execmuteAudio },
			{ "RepNotifyAttenuationAsset", &APlayerVoiceChatActor::execRepNotifyAttenuationAsset },
			{ "RepNotifyMicComp", &APlayerVoiceChatActor::execRepNotifyMicComp },
			{ "RepNotifyVoiceVolume", &APlayerVoiceChatActor::execRepNotifyVoiceVolume },
			{ "RPCClientAskAddChannel", &APlayerVoiceChatActor::execRPCClientAskAddChannel },
			{ "RPCClientAskRemoveChannel", &APlayerVoiceChatActor::execRPCClientAskRemoveChannel },
			{ "RPCClientSetMicrophoneVolume", &APlayerVoiceChatActor::execRPCClientSetMicrophoneVolume },
			{ "RPCServerUpdatePosAudioComp", &APlayerVoiceChatActor::execRPCServerUpdatePosAudioComp },
			{ "ServerAddChannel", &APlayerVoiceChatActor::execServerAddChannel },
			{ "ServerRemoveChannel", &APlayerVoiceChatActor::execServerRemoveChannel },
			{ "ServerSetAllowUseGlobal", &APlayerVoiceChatActor::execServerSetAllowUseGlobal },
			{ "ServerSetAllowUseProximity", &APlayerVoiceChatActor::execServerSetAllowUseProximity },
			{ "ServerSetAttenuation", &APlayerVoiceChatActor::execServerSetAttenuation },
			{ "ServerSetMaxProximityRange", &APlayerVoiceChatActor::execServerSetMaxProximityRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics
	{
		struct PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms
		{
			AActor* act;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_act;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_act = { "act", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms, act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_act,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "Comment", "/* delegate to clean up this actor*/" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "delegate to clean up this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "DelegateEndPlayOwner", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventDelegateEndPlayOwner_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics
	{
		struct PlayerVoiceChatActor_eventmuteAudio_Parms
		{
			bool isMute;
		};
		static void NewProp_isMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventmuteAudio_Parms*)Obj)->isMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute = { "isMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventmuteAudio_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::NewProp_isMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "muteAudio", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventmuteAudio_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RepNotifyAttenuationAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RepNotifyMicComp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RepNotifyVoiceVolume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::NewProp_channelToAdd = { "channelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms, channelToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::NewProp_channelToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "Comment", "// client ask radio/team channel add\n" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "client ask radio/team channel add" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCClientAskAddChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCClientAskAddChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::NewProp_channelToRemove = { "channelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms, channelToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::NewProp_channelToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "Comment", "// client ask radio/team channel remove\n" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "client ask radio/team channel remove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCClientAskRemoveChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCClientAskRemoveChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "Comment", "// client ask radio/team channel add\n" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "client ask radio/team channel add" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCClientSetMicrophoneVolume", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCClientSetMicrophoneVolume_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_worldPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_worldPos = { "worldPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms, worldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::NewProp_worldPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "Comment", "// server update audio pos\n" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "server update audio pos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "RPCServerUpdatePosAudioComp", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventRPCServerUpdatePosAudioComp_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics
	{
		struct PlayerVoiceChatActor_eventServerAddChannel_Parms
		{
			int32 channelToAdd;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::NewProp_channelToAdd = { "channelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerAddChannel_Parms, channelToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::NewProp_channelToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerAddChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerAddChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics
	{
		struct PlayerVoiceChatActor_eventServerRemoveChannel_Parms
		{
			int32 channelToRemove;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::NewProp_channelToRemove = { "channelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerRemoveChannel_Parms, channelToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::NewProp_channelToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerRemoveChannel", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerRemoveChannel_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms
		{
			bool _allowUseGlobal;
		};
		static void NewProp__allowUseGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowUseGlobal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms*)Obj)->_allowUseGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal = { "_allowUseGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::NewProp__allowUseGlobal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetAllowUseGlobal", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetAllowUseGlobal_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms
		{
			bool _allowUseRange;
		};
		static void NewProp__allowUseRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__allowUseRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms*)Obj)->_allowUseRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange = { "_allowUseRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::NewProp__allowUseRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetAllowUseProximity", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetAllowUseProximity_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetAttenuation_Parms
		{
			bool enableAttenuation;
			FString _pathToAttenuationAsset;
		};
		static void NewProp_enableAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enableAttenuation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pathToAttenuationAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation_SetBit(void* Obj)
	{
		((PlayerVoiceChatActor_eventServerSetAttenuation_Parms*)Obj)->enableAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation = { "enableAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerVoiceChatActor_eventServerSetAttenuation_Parms), &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset = { "_pathToAttenuationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerSetAttenuation_Parms, _pathToAttenuationAsset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp_enableAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::NewProp__pathToAttenuationAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetAttenuation", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetAttenuation_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics
	{
		struct PlayerVoiceChatActor_eventServerSetMaxProximityRange_Parms
		{
			float _maxProximityRange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxProximityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::NewProp__maxProximityRange = { "_maxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerVoiceChatActor_eventServerSetMaxProximityRange_Parms, _maxProximityRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::NewProp__maxProximityRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerVoiceChatActor, nullptr, "ServerSetMaxProximityRange", nullptr, nullptr, sizeof(PlayerVoiceChatActor_eventServerSetMaxProximityRange_Parms), Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerVoiceChatActor_NoRegister()
	{
		return APlayerVoiceChatActor::StaticClass();
	}
	struct Z_Construct_UClass_APlayerVoiceChatActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_microphoneSpeakComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_microphoneSpeakComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownerPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ownerPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idVoiceChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idVoiceChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voiceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_voiceVolume;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_radioChannelSubscribed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioChannelSubscribed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_radioChannelSubscribed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathToAttenuationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathToAttenuationAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPerformAntiCheat_MetaData[];
#endif
		static void NewProp_ServerPerformAntiCheat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ServerPerformAntiCheat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatAllowUseProximity_MetaData[];
#endif
		static void NewProp_AntiCheatAllowUseProximity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AntiCheatAllowUseProximity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatAllowUseGlobal_MetaData[];
#endif
		static void NewProp_AntiCheatAllowUseGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AntiCheatAllowUseGlobal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiCheatMaxProximityRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntiCheatMaxProximityRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerVoiceChatActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalVoiceChatPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerVoiceChatActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_DelegateEndPlayOwner, "DelegateEndPlayOwner" }, // 2832920703
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_muteAudio, "muteAudio" }, // 41110996
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyAttenuationAsset, "RepNotifyAttenuationAsset" }, // 1561104626
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyMicComp, "RepNotifyMicComp" }, // 1653635069
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RepNotifyVoiceVolume, "RepNotifyVoiceVolume" }, // 2454546381
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskAddChannel, "RPCClientAskAddChannel" }, // 63194499
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientAskRemoveChannel, "RPCClientAskRemoveChannel" }, // 955720308
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCClientSetMicrophoneVolume, "RPCClientSetMicrophoneVolume" }, // 2619105068
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_RPCServerUpdatePosAudioComp, "RPCServerUpdatePosAudioComp" }, // 1631839611
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerAddChannel, "ServerAddChannel" }, // 3749245641
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerRemoveChannel, "ServerRemoveChannel" }, // 1299249503
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseGlobal, "ServerSetAllowUseGlobal" }, // 2897144543
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAllowUseProximity, "ServerSetAllowUseProximity" }, // 463749523
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetAttenuation, "ServerSetAttenuation" }, // 204591328
		{ &Z_Construct_UFunction_APlayerVoiceChatActor_ServerSetMaxProximityRange, "ServerSetMaxProximityRange" }, // 752205434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerVoiceChatActor.h" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Comment", "/* the root scene component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "the root scene component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "Comment", "/* the component used to speak and receive voice*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "the component used to speak and receive voice" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent = { "microphoneSpeakComponent", "RepNotifyMicComp", (EPropertyFlags)0x001000010008203c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, microphoneSpeakComponent), Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState_MetaData[] = {
		{ "Comment", "/* the owner of this actor, used  for muting a player for example */" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "the owner of this actor, used  for muting a player for example" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState = { "ownerPlayerState", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, ownerPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat = { "idVoiceChat", nullptr, (EPropertyFlags)0x0011000000002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, idVoiceChat), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume = { "voiceVolume", "RepNotifyVoiceVolume", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, voiceVolume), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_Inner = { "radioChannelSubscribed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed = { "radioChannelSubscribed", nullptr, (EPropertyFlags)0x0010000000002024, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, radioChannelSubscribed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset = { "pathToAttenuationAsset", "RepNotifyAttenuationAsset", (EPropertyFlags)0x0011000100002025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, pathToAttenuationAsset), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	void Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_SetBit(void* Obj)
	{
		((APlayerVoiceChatActor*)Obj)->ServerPerformAntiCheat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat = { "ServerPerformAntiCheat", nullptr, (EPropertyFlags)0x0011000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerVoiceChatActor), &Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	void Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_SetBit(void* Obj)
	{
		((APlayerVoiceChatActor*)Obj)->AntiCheatAllowUseProximity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity = { "AntiCheatAllowUseProximity", nullptr, (EPropertyFlags)0x0011000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerVoiceChatActor), &Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	void Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_SetBit(void* Obj)
	{
		((APlayerVoiceChatActor*)Obj)->AntiCheatAllowUseGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal = { "AntiCheatAllowUseGlobal", nullptr, (EPropertyFlags)0x0011000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerVoiceChatActor), &Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange_MetaData[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange = { "AntiCheatMaxProximityRange", nullptr, (EPropertyFlags)0x0011000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerVoiceChatActor, AntiCheatMaxProximityRange), METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerVoiceChatActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_microphoneSpeakComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ownerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_idVoiceChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_voiceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_radioChannelSubscribed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_pathToAttenuationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_ServerPerformAntiCheat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatAllowUseGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerVoiceChatActor_Statics::NewProp_AntiCheatMaxProximityRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerVoiceChatActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerVoiceChatActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerVoiceChatActor_Statics::ClassParams = {
		&APlayerVoiceChatActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerVoiceChatActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerVoiceChatActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerVoiceChatActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerVoiceChatActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerVoiceChatActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerVoiceChatActor, 1534660827);
	template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<APlayerVoiceChatActor>()
	{
		return APlayerVoiceChatActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerVoiceChatActor(Z_Construct_UClass_APlayerVoiceChatActor, &APlayerVoiceChatActor::StaticClass, TEXT("/Script/UniversalVoiceChatPro"), TEXT("APlayerVoiceChatActor"), false, nullptr, nullptr, nullptr);

	void APlayerVoiceChatActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_microphoneSpeakComponent(TEXT("microphoneSpeakComponent"));
		static const FName Name_ownerPlayerState(TEXT("ownerPlayerState"));
		static const FName Name_idVoiceChat(TEXT("idVoiceChat"));
		static const FName Name_voiceVolume(TEXT("voiceVolume"));
		static const FName Name_radioChannelSubscribed(TEXT("radioChannelSubscribed"));
		static const FName Name_pathToAttenuationAsset(TEXT("pathToAttenuationAsset"));

		const bool bIsValid = true
			&& Name_microphoneSpeakComponent == ClassReps[(int32)ENetFields_Private::microphoneSpeakComponent].Property->GetFName()
			&& Name_ownerPlayerState == ClassReps[(int32)ENetFields_Private::ownerPlayerState].Property->GetFName()
			&& Name_idVoiceChat == ClassReps[(int32)ENetFields_Private::idVoiceChat].Property->GetFName()
			&& Name_voiceVolume == ClassReps[(int32)ENetFields_Private::voiceVolume].Property->GetFName()
			&& Name_radioChannelSubscribed == ClassReps[(int32)ENetFields_Private::radioChannelSubscribed].Property->GetFName()
			&& Name_pathToAttenuationAsset == ClassReps[(int32)ENetFields_Private::pathToAttenuationAsset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerVoiceChatActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerVoiceChatActor);
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatAskMicrophonePermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniversalVoiceChat::VoiceChatAskMicrophonePermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatHasMicrophonePermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatHasMicrophonePermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatRemoveChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatRemoveChannel(Z_Param_channelToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatAddChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatAddChannel(Z_Param_channelToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatCheckRegisteredToChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_channelToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatCheckRegisteredToChannel(Z_Param_channelToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatLocalIsMutedSomeone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerState,Z_Param_playerToCheckMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatLocalIsMutedSomeone(Z_Param_WorldContextObject,Z_Param_playerToCheckMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatLocalMuteSomeone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerState,Z_Param_playerToMute);
		P_GET_UBOOL(Z_Param_shouldMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUniversalVoiceChat::VoiceChatLocalMuteSomeone(Z_Param_WorldContextObject,Z_Param_playerToMute,Z_Param_shouldMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatSetMicrophoneVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatSetMicrophoneVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatStopSpeak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatStopSpeak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatStartSpeak)
	{
		P_GET_UBOOL(Z_Param__shouldHearMyOwnVoice);
		P_GET_UBOOL(Z_Param_isGlobal);
		P_GET_PROPERTY(FIntProperty,Z_Param_radioChannel);
		P_GET_UBOOL(Z_Param_useProximity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxProximityRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatStartSpeak(Z_Param__shouldHearMyOwnVoice,Z_Param_isGlobal,Z_Param_radioChannel,Z_Param_useProximity,Z_Param_maxProximityRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatWasInitAudioVoiceChatQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatWasInitAudioVoiceChatQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatInitAudioVoiceChatQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param__numChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUniversalVoiceChat::VoiceChatInitAudioVoiceChatQuality(Z_Param__sampleRate,Z_Param__numChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniversalVoiceChat::execVoiceChatGetMyLocalPlayerVoiceChat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerVoiceChatActor**)Z_Param__Result=UUniversalVoiceChat::VoiceChatGetMyLocalPlayerVoiceChat();
		P_NATIVE_END;
	}
	void UUniversalVoiceChat::StaticRegisterNativesUUniversalVoiceChat()
	{
		UClass* Class = UUniversalVoiceChat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VoiceChatAddChannel", &UUniversalVoiceChat::execVoiceChatAddChannel },
			{ "VoiceChatAskMicrophonePermission", &UUniversalVoiceChat::execVoiceChatAskMicrophonePermission },
			{ "VoiceChatCheckRegisteredToChannel", &UUniversalVoiceChat::execVoiceChatCheckRegisteredToChannel },
			{ "VoiceChatGetMyLocalPlayerVoiceChat", &UUniversalVoiceChat::execVoiceChatGetMyLocalPlayerVoiceChat },
			{ "VoiceChatHasMicrophonePermission", &UUniversalVoiceChat::execVoiceChatHasMicrophonePermission },
			{ "VoiceChatInitAudioVoiceChatQuality", &UUniversalVoiceChat::execVoiceChatInitAudioVoiceChatQuality },
			{ "VoiceChatLocalIsMutedSomeone", &UUniversalVoiceChat::execVoiceChatLocalIsMutedSomeone },
			{ "VoiceChatLocalMuteSomeone", &UUniversalVoiceChat::execVoiceChatLocalMuteSomeone },
			{ "VoiceChatRemoveChannel", &UUniversalVoiceChat::execVoiceChatRemoveChannel },
			{ "VoiceChatSetMicrophoneVolume", &UUniversalVoiceChat::execVoiceChatSetMicrophoneVolume },
			{ "VoiceChatStartSpeak", &UUniversalVoiceChat::execVoiceChatStartSpeak },
			{ "VoiceChatStopSpeak", &UUniversalVoiceChat::execVoiceChatStopSpeak },
			{ "VoiceChatWasInitAudioVoiceChatQuality", &UUniversalVoiceChat::execVoiceChatWasInitAudioVoiceChatQuality },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatAddChannel_Parms
		{
			int32 channelToAdd;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToAdd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_channelToAdd = { "channelToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatAddChannel_Parms, channelToAdd), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatAddChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatAddChannel_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_channelToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatAddChannel", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatAddChannel_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatAskMicrophonePermission", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms
		{
			int32 channelToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_channelToCheck = { "channelToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms, channelToCheck), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_channelToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatCheckRegisteredToChannel", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatCheckRegisteredToChannel_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatGetMyLocalPlayerVoiceChat_Parms
		{
			APlayerVoiceChatActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatGetMyLocalPlayerVoiceChat_Parms, ReturnValue), Z_Construct_UClass_APlayerVoiceChatActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatGetMyLocalPlayerVoiceChat", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatGetMyLocalPlayerVoiceChat_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatHasMicrophonePermission", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatHasMicrophonePermission_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms
		{
			int32 _sampleRate;
			int32 _numChannels;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numChannels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__sampleRate = { "_sampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms, _sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__numChannels = { "_numChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms, _numChannels), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp__numChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "CPP_Default__numChannels", "1" },
		{ "CPP_Default__sampleRate", "48000" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatInitAudioVoiceChatQuality", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatInitAudioVoiceChatQuality_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms
		{
			const UObject* WorldContextObject;
			APlayerState* playerToCheckMute;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToCheckMute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_playerToCheckMute = { "playerToCheckMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms, playerToCheckMute), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_playerToCheckMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatLocalIsMutedSomeone", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatLocalIsMutedSomeone_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms
		{
			const UObject* WorldContextObject;
			APlayerState* playerToMute;
			bool shouldMute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerToMute;
		static void NewProp_shouldMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_playerToMute = { "playerToMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms, playerToMute), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms*)Obj)->shouldMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute = { "shouldMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_playerToMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::NewProp_shouldMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatLocalMuteSomeone", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatLocalMuteSomeone_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms
		{
			int32 channelToRemove;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_channelToRemove = { "channelToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms, channelToRemove), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_channelToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatRemoveChannel", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatRemoveChannel_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms
		{
			float volume;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatSetMicrophoneVolume", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatSetMicrophoneVolume_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatStartSpeak_Parms
		{
			bool _shouldHearMyOwnVoice;
			bool isGlobal;
			int32 radioChannel;
			bool useProximity;
			float maxProximityRange;
			bool ReturnValue;
		};
		static void NewProp__shouldHearMyOwnVoice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldHearMyOwnVoice;
		static void NewProp_isGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGlobal;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_radioChannel;
		static void NewProp_useProximity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useProximity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxProximityRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->_shouldHearMyOwnVoice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice = { "_shouldHearMyOwnVoice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->isGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal = { "isGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_radioChannel = { "radioChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms, radioChannel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->useProximity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity = { "useProximity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_maxProximityRange = { "maxProximityRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms, maxProximityRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStartSpeak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp__shouldHearMyOwnVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_isGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_radioChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_useProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_maxProximityRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "CPP_Default__shouldHearMyOwnVoice", "true" },
		{ "CPP_Default_isGlobal", "true" },
		{ "CPP_Default_maxProximityRange", "0.000000" },
		{ "CPP_Default_radioChannel", "0" },
		{ "CPP_Default_useProximity", "false" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatStartSpeak", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatStartSpeak_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatStopSpeak_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatStopSpeak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatStopSpeak_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatStopSpeak", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatStopSpeak_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics
	{
		struct UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms), &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceChatUniversal" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniversalVoiceChat, nullptr, "VoiceChatWasInitAudioVoiceChatQuality", nullptr, nullptr, sizeof(UniversalVoiceChat_eventVoiceChatWasInitAudioVoiceChatQuality_Parms), Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUniversalVoiceChat_NoRegister()
	{
		return UUniversalVoiceChat::StaticClass();
	}
	struct Z_Construct_UClass_UUniversalVoiceChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniversalVoiceChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalVoiceChatPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniversalVoiceChat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAddChannel, "VoiceChatAddChannel" }, // 1488767996
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatAskMicrophonePermission, "VoiceChatAskMicrophonePermission" }, // 4235085416
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatCheckRegisteredToChannel, "VoiceChatCheckRegisteredToChannel" }, // 262859224
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatGetMyLocalPlayerVoiceChat, "VoiceChatGetMyLocalPlayerVoiceChat" }, // 3964771822
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatHasMicrophonePermission, "VoiceChatHasMicrophonePermission" }, // 128881679
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatInitAudioVoiceChatQuality, "VoiceChatInitAudioVoiceChatQuality" }, // 1313767710
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalIsMutedSomeone, "VoiceChatLocalIsMutedSomeone" }, // 1440083800
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatLocalMuteSomeone, "VoiceChatLocalMuteSomeone" }, // 2442504033
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatRemoveChannel, "VoiceChatRemoveChannel" }, // 1453648220
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatSetMicrophoneVolume, "VoiceChatSetMicrophoneVolume" }, // 2938315249
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStartSpeak, "VoiceChatStartSpeak" }, // 3616413228
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatStopSpeak, "VoiceChatStopSpeak" }, // 2319798707
		{ &Z_Construct_UFunction_UUniversalVoiceChat_VoiceChatWasInitAudioVoiceChatQuality, "VoiceChatWasInitAudioVoiceChatQuality" }, // 2342568200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalVoiceChat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* bp library */" },
		{ "IncludePath", "PlayerVoiceChatActor.h" },
		{ "ModuleRelativePath", "Public/PlayerVoiceChatActor.h" },
		{ "ToolTip", "bp library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniversalVoiceChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniversalVoiceChat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniversalVoiceChat_Statics::ClassParams = {
		&UUniversalVoiceChat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniversalVoiceChat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalVoiceChat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniversalVoiceChat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniversalVoiceChat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniversalVoiceChat, 1716762449);
	template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<UUniversalVoiceChat>()
	{
		return UUniversalVoiceChat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniversalVoiceChat(Z_Construct_UClass_UUniversalVoiceChat, &UUniversalVoiceChat::StaticClass, TEXT("/Script/UniversalVoiceChatPro"), TEXT("UUniversalVoiceChat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniversalVoiceChat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
