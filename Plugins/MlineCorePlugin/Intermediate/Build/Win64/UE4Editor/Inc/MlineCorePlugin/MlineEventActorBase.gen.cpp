// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineEventActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineEventActorBase() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineEventActorBase_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineEventActorBase();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActorBase();
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
	DEFINE_FUNCTION(AMlineEventActorBase::execBlinkMaterialSetting_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlinkMaterialSetting_cpp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execEndBlink_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndBlink_cpp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execStartBlink_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBlink_cpp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execNiagaraEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventNiagaraEffect,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NiagaraEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execParticleEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventParticleEffect,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParticleEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execAnimationEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventAnimation,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimationEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSoundEvent_cpp)
	{
		P_GET_STRUCT_REF(FMlineEventSound,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SoundEvent_cpp(Z_Param_Out_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execUIEvent_cpp)
	{
		P_GET_STRUCT(FMlineEventUI,Z_Param_data);
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UIEvent_cpp(Z_Param_data,Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGuideArrowEvent_cpp)
	{
		P_GET_UBOOL(Z_Param_bGuideArrow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GuideArrowEvent_cpp(Z_Param_bGuideArrow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execHighLightEvent_cpp)
	{
		P_GET_UBOOL(Z_Param_highLight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighLightEvent_cpp(Z_Param_highLight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execTransformEvent_cpp)
	{
		P_GET_STRUCT(FTransform,Z_Param_transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformEvent_cpp(Z_Param_transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execVisibleEvent_cpp)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VisibleEvent_cpp(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execDeactiveEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactiveEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execActiveEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execOnRep_newTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_newTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execOnRep_isGuideArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isGuideArrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execOnRep_isHighLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isHighLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execOnRep_isInteractionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isInteractionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execOnRep_isVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_isVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSetTransformOverride)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformOverride_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSetNewTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewTransform_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSetIsGuideArrow)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsGuideArrow_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSetIsHighLight)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsHighLight_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSetIsInteractionTime)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInteractionTime_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execSetIsVisible)
	{
		P_GET_UBOOL(Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsVisible_Implementation(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGetTransformOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransformOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGetNewTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetNewTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGetIsGuideArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsGuideArrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGetIsHighLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsHighLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGetIsInteractionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInteractionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineEventActorBase::execGetIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsVisible();
		P_NATIVE_END;
	}
	static FName NAME_AMlineEventActorBase_SetIsGuideArrow = FName(TEXT("SetIsGuideArrow"));
	void AMlineEventActorBase::SetIsGuideArrow(bool data)
	{
		MlineEventActorBase_eventSetIsGuideArrow_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActorBase_SetIsGuideArrow),&Parms);
	}
	static FName NAME_AMlineEventActorBase_SetIsHighLight = FName(TEXT("SetIsHighLight"));
	void AMlineEventActorBase::SetIsHighLight(bool data)
	{
		MlineEventActorBase_eventSetIsHighLight_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActorBase_SetIsHighLight),&Parms);
	}
	static FName NAME_AMlineEventActorBase_SetIsInteractionTime = FName(TEXT("SetIsInteractionTime"));
	void AMlineEventActorBase::SetIsInteractionTime(bool data)
	{
		MlineEventActorBase_eventSetIsInteractionTime_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActorBase_SetIsInteractionTime),&Parms);
	}
	static FName NAME_AMlineEventActorBase_SetIsVisible = FName(TEXT("SetIsVisible"));
	void AMlineEventActorBase::SetIsVisible(bool data)
	{
		MlineEventActorBase_eventSetIsVisible_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActorBase_SetIsVisible),&Parms);
	}
	static FName NAME_AMlineEventActorBase_SetNewTransform = FName(TEXT("SetNewTransform"));
	void AMlineEventActorBase::SetNewTransform(FTransform data)
	{
		MlineEventActorBase_eventSetNewTransform_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActorBase_SetNewTransform),&Parms);
	}
	static FName NAME_AMlineEventActorBase_SetTransformOverride = FName(TEXT("SetTransformOverride"));
	void AMlineEventActorBase::SetTransformOverride(bool data)
	{
		MlineEventActorBase_eventSetTransformOverride_Parms Parms;
		Parms.data=data ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMlineEventActorBase_SetTransformOverride),&Parms);
	}
	void AMlineEventActorBase::StaticRegisterNativesAMlineEventActorBase()
	{
		UClass* Class = AMlineEventActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveEvent", &AMlineEventActorBase::execActiveEvent },
			{ "AnimationEvent_cpp", &AMlineEventActorBase::execAnimationEvent_cpp },
			{ "BlinkMaterialSetting_cpp", &AMlineEventActorBase::execBlinkMaterialSetting_cpp },
			{ "DeactiveEvent", &AMlineEventActorBase::execDeactiveEvent },
			{ "EndBlink_cpp", &AMlineEventActorBase::execEndBlink_cpp },
			{ "GetIsGuideArrow", &AMlineEventActorBase::execGetIsGuideArrow },
			{ "GetIsHighLight", &AMlineEventActorBase::execGetIsHighLight },
			{ "GetIsInteractionTime", &AMlineEventActorBase::execGetIsInteractionTime },
			{ "GetIsVisible", &AMlineEventActorBase::execGetIsVisible },
			{ "GetNewTransform", &AMlineEventActorBase::execGetNewTransform },
			{ "GetTransformOverride", &AMlineEventActorBase::execGetTransformOverride },
			{ "GuideArrowEvent_cpp", &AMlineEventActorBase::execGuideArrowEvent_cpp },
			{ "HighLightEvent_cpp", &AMlineEventActorBase::execHighLightEvent_cpp },
			{ "NiagaraEvent_cpp", &AMlineEventActorBase::execNiagaraEvent_cpp },
			{ "OnRep_isGuideArrow", &AMlineEventActorBase::execOnRep_isGuideArrow },
			{ "OnRep_isHighLight", &AMlineEventActorBase::execOnRep_isHighLight },
			{ "OnRep_isInteractionTime", &AMlineEventActorBase::execOnRep_isInteractionTime },
			{ "OnRep_isVisible", &AMlineEventActorBase::execOnRep_isVisible },
			{ "OnRep_newTransform", &AMlineEventActorBase::execOnRep_newTransform },
			{ "ParticleEvent_cpp", &AMlineEventActorBase::execParticleEvent_cpp },
			{ "SetIsGuideArrow", &AMlineEventActorBase::execSetIsGuideArrow },
			{ "SetIsHighLight", &AMlineEventActorBase::execSetIsHighLight },
			{ "SetIsInteractionTime", &AMlineEventActorBase::execSetIsInteractionTime },
			{ "SetIsVisible", &AMlineEventActorBase::execSetIsVisible },
			{ "SetNewTransform", &AMlineEventActorBase::execSetNewTransform },
			{ "SetTransformOverride", &AMlineEventActorBase::execSetTransformOverride },
			{ "SoundEvent_cpp", &AMlineEventActorBase::execSoundEvent_cpp },
			{ "StartBlink_cpp", &AMlineEventActorBase::execStartBlink_cpp },
			{ "TransformEvent_cpp", &AMlineEventActorBase::execTransformEvent_cpp },
			{ "UIEvent_cpp", &AMlineEventActorBase::execUIEvent_cpp },
			{ "VisibleEvent_cpp", &AMlineEventActorBase::execVisibleEvent_cpp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "ActiveEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventAnimationEvent_cpp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventAnimationEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventAnimation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventAnimationEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventAnimationEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "AnimationEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventAnimationEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "BlinkMaterialSetting_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "DeactiveEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "EndBlink_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics
	{
		struct MlineEventActorBase_eventGetIsGuideArrow_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventGetIsGuideArrow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventGetIsGuideArrow_Parms), &Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GetIsGuideArrow", nullptr, nullptr, sizeof(MlineEventActorBase_eventGetIsGuideArrow_Parms), Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics
	{
		struct MlineEventActorBase_eventGetIsHighLight_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventGetIsHighLight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventGetIsHighLight_Parms), &Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GetIsHighLight", nullptr, nullptr, sizeof(MlineEventActorBase_eventGetIsHighLight_Parms), Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics
	{
		struct MlineEventActorBase_eventGetIsInteractionTime_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventGetIsInteractionTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventGetIsInteractionTime_Parms), &Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GetIsInteractionTime", nullptr, nullptr, sizeof(MlineEventActorBase_eventGetIsInteractionTime_Parms), Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics
	{
		struct MlineEventActorBase_eventGetIsVisible_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventGetIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventGetIsVisible_Parms), &Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GetIsVisible", nullptr, nullptr, sizeof(MlineEventActorBase_eventGetIsVisible_Parms), Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics
	{
		struct MlineEventActorBase_eventGetNewTransform_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventGetNewTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GetNewTransform", nullptr, nullptr, sizeof(MlineEventActorBase_eventGetNewTransform_Parms), Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics
	{
		struct MlineEventActorBase_eventGetTransformOverride_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventGetTransformOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventGetTransformOverride_Parms), &Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GetTransformOverride", nullptr, nullptr, sizeof(MlineEventActorBase_eventGetTransformOverride_Parms), Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventGuideArrowEvent_cpp_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventGuideArrowEvent_cpp_Parms*)Obj)->bGuideArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow = { "bGuideArrow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventGuideArrowEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::NewProp_bGuideArrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "GuideArrowEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventGuideArrowEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventHighLightEvent_cpp_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::NewProp_highLight_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventHighLightEvent_cpp_Parms*)Obj)->highLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::NewProp_highLight = { "highLight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventHighLightEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::NewProp_highLight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::NewProp_highLight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "HighLightEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventHighLightEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventNiagaraEvent_cpp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventNiagaraEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventNiagaraEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventNiagaraEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventNiagaraEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "NiagaraEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventNiagaraEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "OnRep_isGuideArrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "OnRep_isHighLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "OnRep_isInteractionTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "OnRep_isVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "OnRep_newTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventParticleEvent_cpp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventParticleEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventParticleEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventParticleEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventParticleEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "ParticleEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventParticleEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventSetIsGuideArrow_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventSetIsGuideArrow_Parms), &Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SetIsGuideArrow", nullptr, nullptr, sizeof(MlineEventActorBase_eventSetIsGuideArrow_Parms), Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventSetIsHighLight_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventSetIsHighLight_Parms), &Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SetIsHighLight", nullptr, nullptr, sizeof(MlineEventActorBase_eventSetIsHighLight_Parms), Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventSetIsInteractionTime_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventSetIsInteractionTime_Parms), &Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SetIsInteractionTime", nullptr, nullptr, sizeof(MlineEventActorBase_eventSetIsInteractionTime_Parms), Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventSetIsVisible_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventSetIsVisible_Parms), &Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SetIsVisible", nullptr, nullptr, sizeof(MlineEventActorBase_eventSetIsVisible_Parms), Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventSetNewTransform_Parms, data), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SetNewTransform", nullptr, nullptr, sizeof(MlineEventActorBase_eventSetNewTransform_Parms), Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics
	{
		static void NewProp_data_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::NewProp_data_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventSetTransformOverride_Parms*)Obj)->data = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventSetTransformOverride_Parms), &Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::NewProp_data_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SetTransformOverride", nullptr, nullptr, sizeof(MlineEventActorBase_eventSetTransformOverride_Parms), Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventSoundEvent_cpp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventSoundEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventSound, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventSoundEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventSoundEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "SoundEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventSoundEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "StartBlink_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventTransformEvent_cpp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventTransformEvent_cpp_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::NewProp_transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "TransformEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventTransformEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventUIEvent_cpp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineEventActorBase_eventUIEvent_cpp_Parms, data), Z_Construct_UScriptStruct_FMlineEventUI, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventUIEvent_cpp_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventUIEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "UIEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventUIEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics
	{
		struct MlineEventActorBase_eventVisibleEvent_cpp_Parms
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
	void Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((MlineEventActorBase_eventVisibleEvent_cpp_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MlineEventActorBase_eventVisibleEvent_cpp_Parms), &Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineEventActorBase, nullptr, "VisibleEvent_cpp", nullptr, nullptr, sizeof(MlineEventActorBase_eventVisibleEvent_cpp_Parms), Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineEventActorBase_NoRegister()
	{
		return AMlineEventActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AMlineEventActorBase_Statics
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
	UObject* (*const Z_Construct_UClass_AMlineEventActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMlineActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineEventActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineEventActorBase_ActiveEvent, "ActiveEvent" }, // 2321742884
		{ &Z_Construct_UFunction_AMlineEventActorBase_AnimationEvent_cpp, "AnimationEvent_cpp" }, // 3690947095
		{ &Z_Construct_UFunction_AMlineEventActorBase_BlinkMaterialSetting_cpp, "BlinkMaterialSetting_cpp" }, // 3847866564
		{ &Z_Construct_UFunction_AMlineEventActorBase_DeactiveEvent, "DeactiveEvent" }, // 1339849598
		{ &Z_Construct_UFunction_AMlineEventActorBase_EndBlink_cpp, "EndBlink_cpp" }, // 2888489951
		{ &Z_Construct_UFunction_AMlineEventActorBase_GetIsGuideArrow, "GetIsGuideArrow" }, // 2216498001
		{ &Z_Construct_UFunction_AMlineEventActorBase_GetIsHighLight, "GetIsHighLight" }, // 159789544
		{ &Z_Construct_UFunction_AMlineEventActorBase_GetIsInteractionTime, "GetIsInteractionTime" }, // 4280622650
		{ &Z_Construct_UFunction_AMlineEventActorBase_GetIsVisible, "GetIsVisible" }, // 3219889920
		{ &Z_Construct_UFunction_AMlineEventActorBase_GetNewTransform, "GetNewTransform" }, // 2399012383
		{ &Z_Construct_UFunction_AMlineEventActorBase_GetTransformOverride, "GetTransformOverride" }, // 351111078
		{ &Z_Construct_UFunction_AMlineEventActorBase_GuideArrowEvent_cpp, "GuideArrowEvent_cpp" }, // 4138566832
		{ &Z_Construct_UFunction_AMlineEventActorBase_HighLightEvent_cpp, "HighLightEvent_cpp" }, // 2424639687
		{ &Z_Construct_UFunction_AMlineEventActorBase_NiagaraEvent_cpp, "NiagaraEvent_cpp" }, // 1572270482
		{ &Z_Construct_UFunction_AMlineEventActorBase_OnRep_isGuideArrow, "OnRep_isGuideArrow" }, // 662300626
		{ &Z_Construct_UFunction_AMlineEventActorBase_OnRep_isHighLight, "OnRep_isHighLight" }, // 3396295356
		{ &Z_Construct_UFunction_AMlineEventActorBase_OnRep_isInteractionTime, "OnRep_isInteractionTime" }, // 986478998
		{ &Z_Construct_UFunction_AMlineEventActorBase_OnRep_isVisible, "OnRep_isVisible" }, // 3416477852
		{ &Z_Construct_UFunction_AMlineEventActorBase_OnRep_newTransform, "OnRep_newTransform" }, // 327032221
		{ &Z_Construct_UFunction_AMlineEventActorBase_ParticleEvent_cpp, "ParticleEvent_cpp" }, // 4127422109
		{ &Z_Construct_UFunction_AMlineEventActorBase_SetIsGuideArrow, "SetIsGuideArrow" }, // 1260067702
		{ &Z_Construct_UFunction_AMlineEventActorBase_SetIsHighLight, "SetIsHighLight" }, // 3606821579
		{ &Z_Construct_UFunction_AMlineEventActorBase_SetIsInteractionTime, "SetIsInteractionTime" }, // 3595371028
		{ &Z_Construct_UFunction_AMlineEventActorBase_SetIsVisible, "SetIsVisible" }, // 2456569696
		{ &Z_Construct_UFunction_AMlineEventActorBase_SetNewTransform, "SetNewTransform" }, // 391877373
		{ &Z_Construct_UFunction_AMlineEventActorBase_SetTransformOverride, "SetTransformOverride" }, // 1415440678
		{ &Z_Construct_UFunction_AMlineEventActorBase_SoundEvent_cpp, "SoundEvent_cpp" }, // 2536237971
		{ &Z_Construct_UFunction_AMlineEventActorBase_StartBlink_cpp, "StartBlink_cpp" }, // 1870490744
		{ &Z_Construct_UFunction_AMlineEventActorBase_TransformEvent_cpp, "TransformEvent_cpp" }, // 2436311271
		{ &Z_Construct_UFunction_AMlineEventActorBase_UIEvent_cpp, "UIEvent_cpp" }, // 3511307574
		{ &Z_Construct_UFunction_AMlineEventActorBase_VisibleEvent_cpp, "VisibleEvent_cpp" }, // 3345950607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineEventActorBase.h" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_eventFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EEventFlag" },
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_eventFlags = { "eventFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, eventFlags), METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_eventFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_eventFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents_Inner = { "soundEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventSound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "EditCondition", "eventFlags & EEventFlag::Audio" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents = { "soundEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, soundEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents_Inner = { "particleEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventParticleEffect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents_MetaData[] = {
		{ "Category", "MlineEvent|ParticleEffect" },
		{ "EditCondition", "eventFlags & EEventFlag::ParticleEffect" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents = { "particleEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, particleEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents_Inner = { "niagaraEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventNiagaraEffect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents_MetaData[] = {
		{ "Category", "MlineEvent|NiagaraEffect" },
		{ "EditCondition", "eventFlags & EEventFlag::NiagaraEffect" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents = { "niagaraEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, niagaraEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents_Inner = { "animationEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "EditCondition", "eventFlags & EEventFlag::Animaition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents = { "animationEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, animationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents_Inner = { "UIEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineEventUI, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "EditCondition", "eventFlags & EEventFlag::UI" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents = { "UIEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, UIEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents_Inner = { "customEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMlineCustomEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents_MetaData[] = {
		{ "Category", "MlineEvent|Custom" },
		{ "EditCondition", "eventFlags & EEventFlag::CustomEvent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents = { "customEvents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, customEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible = { "isVisible", "OnRep_isVisible", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isInteractionTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime = { "isInteractionTime", "OnRep_isInteractionTime", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isHighLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight = { "isHighLight", "OnRep_isHighLight", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isGuideArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow = { "isGuideArrow", "OnRep_isGuideArrow", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_newTransform_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_newTransform = { "newTransform", "OnRep_newTransform", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, newTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_newTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_newTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isTransformOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride = { "isTransformOverride", nullptr, (EPropertyFlags)0x0040000000000021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isVisible_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD = { "isVisible_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isInteractionTime_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD = { "isInteractionTime_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isHighLight_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD = { "isHighLight_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isGuideArrow_OLD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD = { "isGuideArrow_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_Transform_OLD_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_Transform_OLD = { "Transform_OLD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, Transform_OLD), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_Transform_OLD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_Transform_OLD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_guideArrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_guideArrow = { "guideArrow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, guideArrow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_guideArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_guideArrow_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance_Inner = { "blinkMaterialInstance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance = { "blinkMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineEventActorBase, blinkMaterialInstance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isHighlightActivate_cpp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp = { "isHighlightActivate_cpp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineEventActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp_SetBit(void* Obj)
	{
		((AMlineEventActorBase*)Obj)->isGuideArrowActivate_cpp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp = { "isGuideArrowActivate_cpp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineEventActorBase), &Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineEventActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_eventFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_soundEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_particleEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_niagaraEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_animationEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_UIEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_customEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_newTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isTransformOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isVisible_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isInteractionTime_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighLight_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrow_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_Transform_OLD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_guideArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_blinkMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isHighlightActivate_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineEventActorBase_Statics::NewProp_isGuideArrowActivate_cpp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineEventActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineEventActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineEventActorBase_Statics::ClassParams = {
		&AMlineEventActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineEventActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineEventActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineEventActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineEventActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineEventActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineEventActorBase, 1018020403);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineEventActorBase>()
	{
		return AMlineEventActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineEventActorBase(Z_Construct_UClass_AMlineEventActorBase, &AMlineEventActorBase::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineEventActorBase"), false, nullptr, nullptr, nullptr);

	void AMlineEventActorBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
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

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineEventActorBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineEventActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
