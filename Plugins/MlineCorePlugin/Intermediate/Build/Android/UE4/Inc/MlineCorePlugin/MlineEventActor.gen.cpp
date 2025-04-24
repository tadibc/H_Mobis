// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineEventActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineEventActor() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineEventActor_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineEventActor();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActor();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventNiagaraEffect();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventParticleEffect();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventSound();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventUI();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineCustomEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMlineEventActor::execBlinkMaterialSetting_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlinkMaterialSetting_cpp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execEndBlink_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndBlink_cpp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execStartBlink_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBlink_cpp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execNiagaraEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventNiagaraEffect,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NiagaraEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execParticleEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventParticleEffect,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParticleEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execAnimationEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventAnimation,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimationEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSoundEvent_cpp)
	{
		P_GET_STRUCT_REF(FMlineEventSound,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SoundEvent_cpp(Z_Param_Out_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execUIEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventUI,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UIEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGuideArrowEvent_cpp)
	{
		P_GET_UBOOL(Z_Param_bGuideArrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GuideArrowEvent_cpp(Z_Param_bGuideArrow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execHighLightEvent_cpp)
	{
		P_GET_UBOOL(Z_Param_highLight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighLightEvent_cpp(Z_Param_highLight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execTransformEvent_cpp)
	{
		P_GET_STRUCT(FTransform,Z_Param_transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformEvent_cpp(Z_Param_transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execVisibleEvent_cpp)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VisibleEvent_cpp(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execDeactiveEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactiveEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execActiveEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execOnRep_newTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_newTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execOnRep_isGuideArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isGuideArrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execOnRep_isHighLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isHighLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execOnRep_isInteractionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isInteractionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execOnRep_isVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSetTransformOverride)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformOverride_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSetNewTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewTransform_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSetIsGuideArrow)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsGuideArrow_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSetIsHighLight)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsHighLight_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSetIsInteractionTime)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInteractionTime_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execSetIsVisible)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsVisible_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGetTransformOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransformOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGetNewTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetNewTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGetIsGuideArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsGuideArrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGetIsHighLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsHighLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGetIsInteractionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInteractionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActor::execGetIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsVisible();
		P_NATIVE_END;
	}
	static FName NAME_AMlineEventActor_SetIsGuideArrow = FName(TEXT("SetIsGuideArrow"));
	void AMlineEventActor::SetIsGuideArrow(bool data)
	{
		MlineEventActor_eventSetIsGuideArrow_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActor_SetIsGuideArrow),&Parms);
	}
	static FName NAME_AMlineEventActor_SetIsHighLight = FName(TEXT("SetIsHighLight"));
	void AMlineEventActor::SetIsHighLight(bool data)
	{
		MlineEventActor_eventSetIsHighLight_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActor_SetIsHighLight),&Parms);
	}
	static FName NAME_AMlineEventActor_SetIsInteractionTime = FName(TEXT("SetIsInteractionTime"));
	void AMlineEventActor::SetIsInteractionTime(bool data)
	{
		MlineEventActor_eventSetIsInteractionTime_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActor_SetIsInteractionTime),&Parms);
	}
	static FName NAME_AMlineEventActor_SetIsVisible = FName(TEXT("SetIsVisible"));
	void AMlineEventActor::SetIsVisible(bool data)
	{
		MlineEventActor_eventSetIsVisible_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActor_SetIsVisible),&Parms);
	}
	static FName NAME_AMlineEventActor_SetNewTransform = FName(TEXT("SetNewTransform"));
	void AMlineEventActor::SetNewTransform(FTransform data)
	{
		MlineEventActor_eventSetNewTransform_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActor_SetNewTransform),&Parms);
	}
	static FName NAME_AMlineEventActor_SetTransformOverride = FName(TEXT("SetTransformOverride"));
	void AMlineEventActor::SetTransformOverride(bool data)
	{
		MlineEventActor_eventSetTransformOverride_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActor_SetTransformOverride),&Parms);
	}
	void AMlineEventActor::StaticRegisterNativesAMlineEventActor()
	{
		UClass* Class = AMlineEventActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveEvent", &AMlineEventActor::execActiveEvent },
			{ "AnimationEvent_cpp", &AMlineEventActor::execAnimationEvent_cpp },
			{ "BlinkMaterialSetting_cpp", &AMlineEventActor::execBlinkMaterialSetting_cpp },
			{ "DeactiveEvent", &AMlineEventActor::execDeactiveEvent },
			{ "EndBlink_cpp", &AMlineEventActor::execEndBlink_cpp },
			{ "GetIsGuideArrow", &AMlineEventActor::execGetIsGuideArrow },
			{ "GetIsHighLight", &AMlineEventActor::execGetIsHighLight },
			{ "GetIsInteractionTime", &AMlineEventActor::execGetIsInteractionTime },
			{ "GetIsVisible", &AMlineEventActor::execGetIsVisible },
			{ "GetNewTransform", &AMlineEventActor::execGetNewTransform },
			{ "GetTransformOverride", &AMlineEventActor::execGetTransformOverride },
			{ "GuideArrowEvent_cpp", &AMlineEventActor::execGuideArrowEvent_cpp },
			{ "HighLightEvent_cpp", &AMlineEventActor::execHighLightEvent_cpp },
			{ "NiagaraEvent_cpp", &AMlineEventActor::execNiagaraEvent_cpp },
			{ "OnRep_isGuideArrow", &AMlineEventActor::execOnRep_isGuideArrow },
			{ "OnRep_isHighLight", &AMlineEventActor::execOnRep_isHighLight },
			{ "OnRep_isInteractionTime", &AMlineEventActor::execOnRep_isInteractionTime },
			{ "OnRep_isVisible", &AMlineEventActor::execOnRep_isVisible },
			{ "OnRep_newTransform", &AMlineEventActor::execOnRep_newTransform },
			{ "ParticleEvent_cpp", &AMlineEventActor::execParticleEvent_cpp },
			{ "SetIsGuideArrow", &AMlineEventActor::execSetIsGuideArrow },
			{ "SetIsHighLight", &AMlineEventActor::execSetIsHighLight },
			{ "SetIsInteractionTime", &AMlineEventActor::execSetIsInteractionTime },
			{ "SetIsVisible", &AMlineEventActor::execSetIsVisible },
			{ "SetNewTransform", &AMlineEventActor::execSetNewTransform },
			{ "SetTransformOverride", &AMlineEventActor::execSetTransformOverride },
			{ "SoundEvent_cpp", &AMlineEventActor::execSoundEvent_cpp },
			{ "StartBlink_cpp", &AMlineEventActor::execStartBlink_cpp },
			{ "TransformEvent_cpp", &AMlineEventActor::execTransformEvent_cpp },
			{ "UIEvent_cpp", &AMlineEventActor::execUIEvent_cpp },
			{ "VisibleEvent_cpp", &AMlineEventActor::execVisibleEvent_cpp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineEventActor_ActiveEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_ActiveEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_ActiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "ActiveEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_ActiveEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_ActiveEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_ActiveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_ActiveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics
	{
		struct MlineEventActor_eventAnimationEvent_cpp_Parms
		{
			FMlineEventAnimation data;
			bool isActive;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventAnimationEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventAnimation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActor_eventAnimationEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventAnimationEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "AnimationEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventAnimationEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "BlinkMaterialSetting_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_DeactiveEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_DeactiveEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_DeactiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "DeactiveEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_DeactiveEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_DeactiveEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_DeactiveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_DeactiveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "EndBlink_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics
	{
		struct MlineEventActor_eventGetIsGuideArrow_Parms
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
	void Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActor_eventGetIsGuideArrow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventGetIsGuideArrow_Parms), &Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GetIsGuideArrow", nullptr, nullptr, sizeof(MlineEventActor_eventGetIsGuideArrow_Parms), Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics
	{
		struct MlineEventActor_eventGetIsHighLight_Parms
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
	void Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActor_eventGetIsHighLight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventGetIsHighLight_Parms), &Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GetIsHighLight", nullptr, nullptr, sizeof(MlineEventActor_eventGetIsHighLight_Parms), Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GetIsHighLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GetIsHighLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics
	{
		struct MlineEventActor_eventGetIsInteractionTime_Parms
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
	void Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActor_eventGetIsInteractionTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventGetIsInteractionTime_Parms), &Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GetIsInteractionTime", nullptr, nullptr, sizeof(MlineEventActor_eventGetIsInteractionTime_Parms), Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics
	{
		struct MlineEventActor_eventGetIsVisible_Parms
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
	void Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActor_eventGetIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventGetIsVisible_Parms), &Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GetIsVisible", nullptr, nullptr, sizeof(MlineEventActor_eventGetIsVisible_Parms), Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics
	{
		struct MlineEventActor_eventGetNewTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventGetNewTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GetNewTransform", nullptr, nullptr, sizeof(MlineEventActor_eventGetNewTransform_Parms), Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GetNewTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GetNewTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics
	{
		struct MlineEventActor_eventGetTransformOverride_Parms
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
	void Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActor_eventGetTransformOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventGetTransformOverride_Parms), &Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GetTransformOverride", nullptr, nullptr, sizeof(MlineEventActor_eventGetTransformOverride_Parms), Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GetTransformOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GetTransformOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics
	{
		struct MlineEventActor_eventGuideArrowEvent_cpp_Parms
		{
			bool bGuideArrow;
		};
		static void NewProp_bGuideArrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGuideArrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow_SetBit(void* Obj)
	{
		((MlineEventActor_eventGuideArrowEvent_cpp_Parms*)Obj)->bGuideArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow = { "bGuideArrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventGuideArrowEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "GuideArrowEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventGuideArrowEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics
	{
		struct MlineEventActor_eventHighLightEvent_cpp_Parms
		{
			bool highLight;
		};
		static void NewProp_highLight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_highLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::NewProp_highLight_SetBit(void* Obj)
	{
		((MlineEventActor_eventHighLightEvent_cpp_Parms*)Obj)->highLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::NewProp_highLight = { "highLight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventHighLightEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::NewProp_highLight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::NewProp_highLight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "HighLightEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventHighLightEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics
	{
		struct MlineEventActor_eventNiagaraEvent_cpp_Parms
		{
			FMlineEventNiagaraEffect data;
			bool isActive;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventNiagaraEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventNiagaraEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActor_eventNiagaraEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventNiagaraEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "NiagaraEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventNiagaraEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "OnRep_isGuideArrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "OnRep_isHighLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "OnRep_isInteractionTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "OnRep_isVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "OnRep_newTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics
	{
		struct MlineEventActor_eventParticleEvent_cpp_Parms
		{
			FMlineEventParticleEffect data;
			bool isActive;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventParticleEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventParticleEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActor_eventParticleEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventParticleEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "ParticleEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventParticleEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActor_eventSetIsGuideArrow_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventSetIsGuideArrow_Parms), &Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SetIsGuideArrow", nullptr, nullptr, sizeof(MlineEventActor_eventSetIsGuideArrow_Parms), Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActor_eventSetIsHighLight_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventSetIsHighLight_Parms), &Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SetIsHighLight", nullptr, nullptr, sizeof(MlineEventActor_eventSetIsHighLight_Parms), Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SetIsHighLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SetIsHighLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActor_eventSetIsInteractionTime_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventSetIsInteractionTime_Parms), &Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SetIsInteractionTime", nullptr, nullptr, sizeof(MlineEventActor_eventSetIsInteractionTime_Parms), Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActor_eventSetIsVisible_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventSetIsVisible_Parms), &Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SetIsVisible", nullptr, nullptr, sizeof(MlineEventActor_eventSetIsVisible_Parms), Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventSetNewTransform_Parms, data), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SetNewTransform", nullptr, nullptr, sizeof(MlineEventActor_eventSetNewTransform_Parms), Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SetNewTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SetNewTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActor_eventSetTransformOverride_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventSetTransformOverride_Parms), &Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SetTransformOverride", nullptr, nullptr, sizeof(MlineEventActor_eventSetTransformOverride_Parms), Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SetTransformOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SetTransformOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics
	{
		struct MlineEventActor_eventSoundEvent_cpp_Parms
		{
			FMlineEventSound data;
			bool isActive;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventSoundEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventSound, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActor_eventSoundEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventSoundEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "SoundEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventSoundEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "StartBlink_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics
	{
		struct MlineEventActor_eventTransformEvent_cpp_Parms
		{
			FTransform transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventTransformEvent_cpp_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::NewProp_transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "TransformEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventTransformEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics
	{
		struct MlineEventActor_eventUIEvent_cpp_Parms
		{
			FMlineEventUI data;
			bool isActive;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActor_eventUIEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventUI, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActor_eventUIEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventUIEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "UIEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventUIEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics
	{
		struct MlineEventActor_eventVisibleEvent_cpp_Parms
		{
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((MlineEventActor_eventVisibleEvent_cpp_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActor_eventVisibleEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActor, nullptr, "VisibleEvent_cpp", nullptr, nullptr, sizeof(MlineEventActor_eventVisibleEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineEventActor_NoRegister()
	{
		return AMlineEventActor::StaticClass();
	}
	struct Z_Construct_UClass_AMlineEventActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_eventFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_soundEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_soundEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_soundEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_particleEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particleEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_particleEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_niagaraEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_niagaraEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_niagaraEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animationEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animationEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_animationEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UIEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[];
#endif
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInteractionTime_MetaData[];
#endif
		static void NewProp_isInteractionTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInteractionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHighLight_MetaData[];
#endif
		static void NewProp_isHighLight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHighLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGuideArrow_MetaData[];
#endif
		static void NewProp_isGuideArrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGuideArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTransformOverride_MetaData[];
#endif
		static void NewProp_isTransformOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTransformOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_OLD_MetaData[];
#endif
		static void NewProp_isVisible_OLD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible_OLD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInteractionTime_OLD_MetaData[];
#endif
		static void NewProp_isInteractionTime_OLD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInteractionTime_OLD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHighLight_OLD_MetaData[];
#endif
		static void NewProp_isHighLight_OLD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHighLight_OLD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGuideArrow_OLD_MetaData[];
#endif
		static void NewProp_isGuideArrow_OLD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGuideArrow_OLD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_OLD_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform_OLD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guideArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_guideArrow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blinkMaterialInstance_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blinkMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_blinkMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHighlightActivate_cpp_MetaData[];
#endif
		static void NewProp_isHighlightActivate_cpp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHighlightActivate_cpp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGuideArrowActivate_cpp_MetaData[];
#endif
		static void NewProp_isGuideArrowActivate_cpp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGuideArrowActivate_cpp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineEventActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMlineActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineEventActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineEventActor_ActiveEvent, "ActiveEvent" }, // 3757544096
		{ &Z_Construct_UFunction_AMlineEventActor_AnimationEvent_cpp, "AnimationEvent_cpp" }, // 1906827280
		{ &Z_Construct_UFunction_AMlineEventActor_BlinkMaterialSetting_cpp, "BlinkMaterialSetting_cpp" }, // 1837748908
		{ &Z_Construct_UFunction_AMlineEventActor_DeactiveEvent, "DeactiveEvent" }, // 2384362947
		{ &Z_Construct_UFunction_AMlineEventActor_EndBlink_cpp, "EndBlink_cpp" }, // 4205567745
		{ &Z_Construct_UFunction_AMlineEventActor_GetIsGuideArrow, "GetIsGuideArrow" }, // 2302573200
		{ &Z_Construct_UFunction_AMlineEventActor_GetIsHighLight, "GetIsHighLight" }, // 1871978479
		{ &Z_Construct_UFunction_AMlineEventActor_GetIsInteractionTime, "GetIsInteractionTime" }, // 1797659743
		{ &Z_Construct_UFunction_AMlineEventActor_GetIsVisible, "GetIsVisible" }, // 312441828
		{ &Z_Construct_UFunction_AMlineEventActor_GetNewTransform, "GetNewTransform" }, // 753703635
		{ &Z_Construct_UFunction_AMlineEventActor_GetTransformOverride, "GetTransformOverride" }, // 3864212576
		{ &Z_Construct_UFunction_AMlineEventActor_GuideArrowEvent_cpp, "GuideArrowEvent_cpp" }, // 26301489
		{ &Z_Construct_UFunction_AMlineEventActor_HighLightEvent_cpp, "HighLightEvent_cpp" }, // 3924076125
		{ &Z_Construct_UFunction_AMlineEventActor_NiagaraEvent_cpp, "NiagaraEvent_cpp" }, // 1360429059
		{ &Z_Construct_UFunction_AMlineEventActor_OnRep_isGuideArrow, "OnRep_isGuideArrow" }, // 3868558081
		{ &Z_Construct_UFunction_AMlineEventActor_OnRep_isHighLight, "OnRep_isHighLight" }, // 2020153459
		{ &Z_Construct_UFunction_AMlineEventActor_OnRep_isInteractionTime, "OnRep_isInteractionTime" }, // 516721653
		{ &Z_Construct_UFunction_AMlineEventActor_OnRep_isVisible, "OnRep_isVisible" }, // 312444344
		{ &Z_Construct_UFunction_AMlineEventActor_OnRep_newTransform, "OnRep_newTransform" }, // 1163090697
		{ &Z_Construct_UFunction_AMlineEventActor_ParticleEvent_cpp, "ParticleEvent_cpp" }, // 2057998905
		{ &Z_Construct_UFunction_AMlineEventActor_SetIsGuideArrow, "SetIsGuideArrow" }, // 2087709202
		{ &Z_Construct_UFunction_AMlineEventActor_SetIsHighLight, "SetIsHighLight" }, // 580852981
		{ &Z_Construct_UFunction_AMlineEventActor_SetIsInteractionTime, "SetIsInteractionTime" }, // 3741349234
		{ &Z_Construct_UFunction_AMlineEventActor_SetIsVisible, "SetIsVisible" }, // 2444400910
		{ &Z_Construct_UFunction_AMlineEventActor_SetNewTransform, "SetNewTransform" }, // 2542582904
		{ &Z_Construct_UFunction_AMlineEventActor_SetTransformOverride, "SetTransformOverride" }, // 3468700561
		{ &Z_Construct_UFunction_AMlineEventActor_SoundEvent_cpp, "SoundEvent_cpp" }, // 977356169
		{ &Z_Construct_UFunction_AMlineEventActor_StartBlink_cpp, "StartBlink_cpp" }, // 1560132597
		{ &Z_Construct_UFunction_AMlineEventActor_TransformEvent_cpp, "TransformEvent_cpp" }, // 1107273444
		{ &Z_Construct_UFunction_AMlineEventActor_UIEvent_cpp, "UIEvent_cpp" }, // 2812027617
		{ &Z_Construct_UFunction_AMlineEventActor_VisibleEvent_cpp, "VisibleEvent_cpp" }, // 4284865165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineEventActor.h" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_eventFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EEventFlag" },
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_eventFlags = { "eventFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, eventFlags), METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_eventFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_eventFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents_Inner = { "soundEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventSound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "EditCondition", "eventFlags & EEventFlag::Audio" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents = { "soundEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, soundEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents_Inner = { "particleEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventParticleEffect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents_MetaData[] = {
		{ "Category", "MlineEvent|ParticleEffect" },
		{ "EditCondition", "eventFlags & EEventFlag::ParticleEffect" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents = { "particleEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, particleEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents_Inner = { "niagaraEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventNiagaraEffect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents_MetaData[] = {
		{ "Category", "MlineEvent|NiagaraEffect" },
		{ "EditCondition", "eventFlags & EEventFlag::NiagaraEffect" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents = { "niagaraEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, niagaraEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents_Inner = { "animationEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "EditCondition", "eventFlags & EEventFlag::Animaition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents = { "animationEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, animationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents_Inner = { "UIEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventUI, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "EditCondition", "eventFlags & EEventFlag::UI" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents = { "UIEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, UIEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents_Inner = { "customEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineCustomEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents_MetaData[] = {
		{ "Category", "MlineEvent|Custom" },
		{ "EditCondition", "eventFlags & EEventFlag::CustomEvent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents = { "customEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, customEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible = { "isVisible", "OnRep_isVisible", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isInteractionTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime = { "isInteractionTime", "OnRep_isInteractionTime", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isHighLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight = { "isHighLight", "OnRep_isHighLight", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isGuideArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow = { "isGuideArrow", "OnRep_isGuideArrow", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_newTransform_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_newTransform = { "newTransform", "OnRep_newTransform", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, newTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_newTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_newTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isTransformOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride = { "isTransformOverride", nullptr, (EPropertyFlags)0x0040000000000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isVisible_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD = { "isVisible_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isInteractionTime_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD = { "isInteractionTime_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isHighLight_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD = { "isHighLight_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isGuideArrow_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD = { "isGuideArrow_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_Transform_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_Transform_OLD = { "Transform_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, Transform_OLD), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_Transform_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_Transform_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_guideArrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_guideArrow = { "guideArrow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, guideArrow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_guideArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_guideArrow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance_Inner = { "blinkMaterialInstance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance = { "blinkMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActor, blinkMaterialInstance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isHighlightActivate_cpp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp = { "isHighlightActivate_cpp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp_SetBit(void* Obj)
	{
		((AMlineEventActor*)Obj)->isGuideArrowActivate_cpp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp = { "isGuideArrowActivate_cpp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActor), &Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineEventActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_eventFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_soundEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_particleEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_niagaraEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_animationEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_UIEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_customEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_newTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isTransformOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isVisible_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isInteractionTime_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighLight_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrow_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_Transform_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_guideArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_blinkMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isHighlightActivate_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActor_Statics::NewProp_isGuideArrowActivate_cpp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineEventActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineEventActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineEventActor_Statics::ClassParams = {
		&AMlineEventActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineEventActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineEventActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineEventActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineEventActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineEventActor, 4225539439);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineEventActor>()
	{
		return AMlineEventActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineEventActor(Z_Construct_UClass_AMlineEventActor, &AMlineEventActor::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineEventActor"), false, nullptr, nullptr, nullptr);

	void AMlineEventActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_isVisible(TEXT("isVisible"));
		static const FName Name_isInteractionTime(TEXT("isInteractionTime"));
		static const FName Name_isHighLight(TEXT("isHighLight"));
		static const FName Name_isGuideArrow(TEXT("isGuideArrow"));
		static const FName Name_newTransform(TEXT("newTransform"));
		static const FName Name_isTransformOverride(TEXT("isTransformOverride"));

		const bool bIsValid = true
			&& Name_isVisible == ClassReps[(int32)ENetFields_Private::isVisible].Property->GetFName()
			&& Name_isInteractionTime == ClassReps[(int32)ENetFields_Private::isInteractionTime].Property->GetFName()
			&& Name_isHighLight == ClassReps[(int32)ENetFields_Private::isHighLight].Property->GetFName()
			&& Name_isGuideArrow == ClassReps[(int32)ENetFields_Private::isGuideArrow].Property->GetFName()
			&& Name_newTransform == ClassReps[(int32)ENetFields_Private::newTransform].Property->GetFName()
			&& Name_isTransformOverride == ClassReps[(int32)ENetFields_Private::isTransformOverride].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineEventActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineEventActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
