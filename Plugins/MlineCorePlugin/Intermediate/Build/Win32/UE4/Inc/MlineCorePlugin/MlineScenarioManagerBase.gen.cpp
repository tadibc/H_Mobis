// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineScenarioManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineScenarioManagerBase() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFadeData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoveData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNarrationData();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActorBase_NoRegister();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultStepContext();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSceneEventData();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EScenarioState();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EStepState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execCallScenarioEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Scene);
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallScenarioEvent(Z_Param_Scene,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execNextStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execFinalizeStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execEndStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execStayStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StayStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execStartStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execInitializeStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execJumpStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_scene);
		P_GET_PROPERTY(FIntProperty,Z_Param_step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpStep(Z_Param_scene,Z_Param_step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execShiftStepByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftStepByName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execShiftStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_scene);
		P_GET_PROPERTY(FIntProperty,Z_Param_step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftStep_Implementation(Z_Param_scene,Z_Param_step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execStepEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StepEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execPrev)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prev();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Next();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execScenarioStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScenarioStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerBase::execSetEventActors_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventActors_cpp();
		P_NATIVE_END;
	}
	static FName NAME_AMlineScenarioManagerBase_CallFade = FName(TEXT("CallFade"));
	void AMlineScenarioManagerBase::CallFade(FFadeData data)
	{
		MlineScenarioManagerBase_eventCallFade_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_CallFade),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_CallInteraction = FName(TEXT("CallInteraction"));
	void AMlineScenarioManagerBase::CallInteraction(FInteractionData data)
	{
		MlineScenarioManagerBase_eventCallInteraction_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_CallInteraction),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_CallLocaLevel = FName(TEXT("CallLocaLevel"));
	void AMlineScenarioManagerBase::CallLocaLevel(FLoadLevelData data)
	{
		MlineScenarioManagerBase_eventCallLocaLevel_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_CallLocaLevel),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_CallMove = FName(TEXT("CallMove"));
	void AMlineScenarioManagerBase::CallMove(FMoveData data)
	{
		MlineScenarioManagerBase_eventCallMove_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_CallMove),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_CallNarration = FName(TEXT("CallNarration"));
	void AMlineScenarioManagerBase::CallNarration(FNarrationData data)
	{
		MlineScenarioManagerBase_eventCallNarration_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_CallNarration),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_EndInteraction = FName(TEXT("EndInteraction"));
	void AMlineScenarioManagerBase::EndInteraction(int32 Scene, int32 Step, AMlineScenarioActorBase* endActor)
	{
		MlineScenarioManagerBase_eventEndInteraction_Parms Parms;
		Parms.Scene=Scene;
		Parms.Step=Step;
		Parms.endActor=endActor;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_EndInteraction),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_EndStep = FName(TEXT("EndStep"));
	void AMlineScenarioManagerBase::EndStep(FDefaultStepContext context)
	{
		MlineScenarioManagerBase_eventEndStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_EndStep),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_FinalizeStep = FName(TEXT("FinalizeStep"));
	void AMlineScenarioManagerBase::FinalizeStep(FDefaultStepContext context)
	{
		MlineScenarioManagerBase_eventFinalizeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_FinalizeStep),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_InitializeStep = FName(TEXT("InitializeStep"));
	void AMlineScenarioManagerBase::InitializeStep(FDefaultStepContext context)
	{
		MlineScenarioManagerBase_eventInitializeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_InitializeStep),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_NextStep = FName(TEXT("NextStep"));
	void AMlineScenarioManagerBase::NextStep(FDefaultStepContext context)
	{
		MlineScenarioManagerBase_eventNextStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_NextStep),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_ShiftStep = FName(TEXT("ShiftStep"));
	void AMlineScenarioManagerBase::ShiftStep(int32 scene, int32 step)
	{
		MlineScenarioManagerBase_eventShiftStep_Parms Parms;
		Parms.scene=scene;
		Parms.step=step;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_ShiftStep),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_StartStep = FName(TEXT("StartStep"));
	void AMlineScenarioManagerBase::StartStep(FDefaultStepContext context)
	{
		MlineScenarioManagerBase_eventStartStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_StartStep),&Parms);
	}
	static FName NAME_AMlineScenarioManagerBase_StayStep = FName(TEXT("StayStep"));
	void AMlineScenarioManagerBase::StayStep(FDefaultStepContext context)
	{
		MlineScenarioManagerBase_eventStayStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerBase_StayStep),&Parms);
	}
	void AMlineScenarioManagerBase::StaticRegisterNativesAMlineScenarioManagerBase()
	{
		UClass* Class = AMlineScenarioManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallScenarioEvent", &AMlineScenarioManagerBase::execCallScenarioEvent },
			{ "EndStep", &AMlineScenarioManagerBase::execEndStep },
			{ "FinalizeStep", &AMlineScenarioManagerBase::execFinalizeStep },
			{ "InitializeStep", &AMlineScenarioManagerBase::execInitializeStep },
			{ "JumpStep", &AMlineScenarioManagerBase::execJumpStep },
			{ "Next", &AMlineScenarioManagerBase::execNext },
			{ "NextStep", &AMlineScenarioManagerBase::execNextStep },
			{ "Prev", &AMlineScenarioManagerBase::execPrev },
			{ "ScenarioStart", &AMlineScenarioManagerBase::execScenarioStart },
			{ "SetEventActors_cpp", &AMlineScenarioManagerBase::execSetEventActors_cpp },
			{ "ShiftStep", &AMlineScenarioManagerBase::execShiftStep },
			{ "ShiftStepByName", &AMlineScenarioManagerBase::execShiftStepByName },
			{ "StartStep", &AMlineScenarioManagerBase::execStartStep },
			{ "StayStep", &AMlineScenarioManagerBase::execStayStep },
			{ "StepEnd", &AMlineScenarioManagerBase::execStepEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallFade_Parms, data), Z_Construct_UScriptStruct_FFadeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "CallFade", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventCallFade_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallInteraction_Parms, data), Z_Construct_UScriptStruct_FInteractionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "CallInteraction", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventCallInteraction_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallLocaLevel_Parms, data), Z_Construct_UScriptStruct_FLoadLevelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "CallLocaLevel", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventCallLocaLevel_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallMove_Parms, data), Z_Construct_UScriptStruct_FMoveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "CallMove", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventCallMove_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallNarration_Parms, data), Z_Construct_UScriptStruct_FNarrationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "CallNarration", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventCallNarration_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics
	{
		struct MlineScenarioManagerBase_eventCallScenarioEvent_Parms
		{
			int32 Scene;
			int32 Step;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallScenarioEvent_Parms, Scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventCallScenarioEvent_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = \"MlineScenarioEvent\")\n//\x09void MoveStep_cpp(int scene, int step);\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = \"MlineScenarioEvent\")\n       void MoveStep_cpp(int scene, int step);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "CallScenarioEvent", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventCallScenarioEvent_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventEndInteraction_Parms, Scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventEndInteraction_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::NewProp_endActor = { "endActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventEndInteraction_Parms, endActor), Z_Construct_UClass_AMlineScenarioActorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::NewProp_endActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "EndInteraction", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventEndInteraction_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventEndStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "EndStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventEndStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventFinalizeStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "FinalizeStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventFinalizeStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventInitializeStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "Comment", "//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void InitializeStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void StartStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void StayStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void EndStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void FinalizeStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void NextStep_Multicast(FStepContext context);\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
		{ "ToolTip", "UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void InitializeStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void StartStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void StayStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void EndStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void FinalizeStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void NextStep_Multicast(FStepContext context);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "InitializeStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventInitializeStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics
	{
		struct MlineScenarioManagerBase_eventJumpStep_Parms
		{
			int32 scene;
			int32 step;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scene;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventJumpStep_Parms, scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventJumpStep_Parms, step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::NewProp_scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::NewProp_step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "JumpStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventJumpStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_Next_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_Next_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "Next", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventNextStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "NextStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventNextStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_Prev_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_Prev_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_Prev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "Prev", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_Prev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_Prev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_Prev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_Prev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "ScenarioStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MlineScenarioEvent" },
		{ "Comment", "//UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = \"MlineScenarioData\")\n//\x09""FName saveStepName_Cpp;\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
		{ "ToolTip", "UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = \"MlineScenarioData\")\n       FName saveStepName_Cpp;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "SetEventActors_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scene;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventShiftStep_Parms, scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventShiftStep_Parms, step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::NewProp_scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::NewProp_step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "ShiftStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventShiftStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics
	{
		struct MlineScenarioManagerBase_eventShiftStepByName_Parms
		{
			FName name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventShiftStepByName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "Comment", "/// <summary>\n/// ?\xcc\xb1???\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
		{ "ToolTip", "<summary>\n?\xcc\xb1???\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "ShiftStepByName", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventShiftStepByName_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventStartStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "StartStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventStartStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerBase_eventStayStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "StayStep", nullptr, nullptr, sizeof(MlineScenarioManagerBase_eventStayStep_Parms), Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerBase, nullptr, "StepEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister()
	{
		return AMlineScenarioManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AMlineScenarioManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentScene_cpp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentScene_cpp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentStep_cpp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentStep_cpp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScenarioEvent_cpp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioEvent_cpp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScenarioEvent_cpp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scenarioActors_cpp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scenarioActors_cpp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_scenarioActors_cpp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScenarioState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScenarioState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StepState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StepState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndedEventFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndedEventFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioFlowTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScenarioFlowTimerHandle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManagerControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagerControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManagerControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventChecker_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventChecker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineScenarioManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineScenarioManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_CallFade, "CallFade" }, // 2991262754
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_CallInteraction, "CallInteraction" }, // 363005563
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_CallLocaLevel, "CallLocaLevel" }, // 620545366
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_CallMove, "CallMove" }, // 3019639926
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_CallNarration, "CallNarration" }, // 965323543
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_CallScenarioEvent, "CallScenarioEvent" }, // 595990999
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_EndInteraction, "EndInteraction" }, // 1987564179
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_EndStep, "EndStep" }, // 2434816676
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_FinalizeStep, "FinalizeStep" }, // 2816407975
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_InitializeStep, "InitializeStep" }, // 1144310575
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_JumpStep, "JumpStep" }, // 2448329197
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_Next, "Next" }, // 932984647
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_NextStep, "NextStep" }, // 4227501190
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_Prev, "Prev" }, // 2424258091
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_ScenarioStart, "ScenarioStart" }, // 3458414551
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_SetEventActors_cpp, "SetEventActors_cpp" }, // 2746898130
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStep, "ShiftStep" }, // 787741976
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_ShiftStepByName, "ShiftStepByName" }, // 1494065112
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_StartStep, "StartStep" }, // 3494373728
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_StayStep, "StayStep" }, // 365871496
		{ &Z_Construct_UFunction_AMlineScenarioManagerBase_StepEnd, "StepEnd" }, // 1220577696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineScenarioManagerBase.h" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentScene_cpp_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentScene_cpp = { "currentScene_cpp", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, currentScene_cpp), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentScene_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentScene_cpp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentStep_cpp_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentStep_cpp = { "currentStep_cpp", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, currentStep_cpp), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentStep_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentStep_cpp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp_Inner = { "ScenarioEvent_cpp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSceneEventData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp = { "ScenarioEvent_cpp", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, ScenarioEvent_cpp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp_Inner = { "scenarioActors_cpp", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMlineScenarioActorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp = { "scenarioActors_cpp", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, scenarioActors_cpp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState = { "ScenarioState", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, ScenarioState), Z_Construct_UEnum_MlineCorePlugin_EScenarioState, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState = { "StepState", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, StepState), Z_Construct_UEnum_MlineCorePlugin_EStepState, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EndedEventFlag_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESceneEvent" },
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EndedEventFlag = { "EndedEventFlag", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, EndedEventFlag), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EndedEventFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EndedEventFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioFlowTimerHandle_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioFlowTimerHandle = { "ScenarioFlowTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, ScenarioFlowTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioFlowTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioFlowTimerHandle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers_Inner = { "ManagerControllers", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMlineScenarioManagerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers = { "ManagerControllers", nullptr, (EPropertyFlags)0x0010040000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, ManagerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EventChecker_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESceneEvent" },
		{ "Category", "MlineScenarioEvent" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EventChecker = { "EventChecker", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerBase, EventChecker), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EventChecker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EventChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineScenarioManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentScene_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_currentStep_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioEvent_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_scenarioActors_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_StepState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EndedEventFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ScenarioFlowTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_ManagerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerBase_Statics::NewProp_EventChecker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineScenarioManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineScenarioManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineScenarioManagerBase_Statics::ClassParams = {
		&AMlineScenarioManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineScenarioManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineScenarioManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineScenarioManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineScenarioManagerBase, 2370139591);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineScenarioManagerBase>()
	{
		return AMlineScenarioManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineScenarioManagerBase(Z_Construct_UClass_AMlineScenarioManagerBase, &AMlineScenarioManagerBase::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineScenarioManagerBase"), false, nullptr, nullptr, nullptr);

	void AMlineScenarioManagerBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_currentScene_cpp(TEXT("currentScene_cpp"));
		static const FName Name_currentStep_cpp(TEXT("currentStep_cpp"));
		static const FName Name_ScenarioState(TEXT("ScenarioState"));
		static const FName Name_StepState(TEXT("StepState"));
		static const FName Name_EndedEventFlag(TEXT("EndedEventFlag"));

		const bool bIsValid = true
			&& Name_currentScene_cpp == ClassReps[(int32)ENetFields_Private::currentScene_cpp].Property->GetFName()
			&& Name_currentStep_cpp == ClassReps[(int32)ENetFields_Private::currentStep_cpp].Property->GetFName()
			&& Name_ScenarioState == ClassReps[(int32)ENetFields_Private::ScenarioState].Property->GetFName()
			&& Name_StepState == ClassReps[(int32)ENetFields_Private::StepState].Property->GetFName()
			&& Name_EndedEventFlag == ClassReps[(int32)ENetFields_Private::EndedEventFlag].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineScenarioManagerBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineScenarioManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
