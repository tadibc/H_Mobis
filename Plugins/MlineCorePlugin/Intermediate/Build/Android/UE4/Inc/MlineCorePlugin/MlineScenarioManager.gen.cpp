// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineScenarioManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineScenarioManager() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManager_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFadeData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoveData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNarrationData();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActor_NoRegister();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultStepContext();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSceneEventData();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EScenarioState();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EStepState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMlineScenarioManager::execCallScenarioEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Scene);
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallScenarioEvent(Z_Param_Scene,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execNextStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execFinalizeStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execEndStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execStayStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StayStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execStartStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execInitializeStep)
	{
		P_GET_STRUCT(FDefaultStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execJumpStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_scene);
		P_GET_PROPERTY(FIntProperty,Z_Param_step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpStep(Z_Param_scene,Z_Param_step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execShiftStepByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftStepByName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execShiftStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_scene);
		P_GET_PROPERTY(FIntProperty,Z_Param_step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftStep_Implementation(Z_Param_scene,Z_Param_step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execStepEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StepEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execPrev)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prev();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Next();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execScenarioStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScenarioStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManager::execSetEventActors_cpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventActors_cpp();
		P_NATIVE_END;
	}
	static FName NAME_AMlineScenarioManager_CallFade = FName(TEXT("CallFade"));
	void AMlineScenarioManager::CallFade(FFadeData data)
	{
		MlineScenarioManager_eventCallFade_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_CallFade),&Parms);
	}
	static FName NAME_AMlineScenarioManager_CallInteraction = FName(TEXT("CallInteraction"));
	void AMlineScenarioManager::CallInteraction(FInteractionData data)
	{
		MlineScenarioManager_eventCallInteraction_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_CallInteraction),&Parms);
	}
	static FName NAME_AMlineScenarioManager_CallLocaLevel = FName(TEXT("CallLocaLevel"));
	void AMlineScenarioManager::CallLocaLevel(FLoadLevelData data)
	{
		MlineScenarioManager_eventCallLocaLevel_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_CallLocaLevel),&Parms);
	}
	static FName NAME_AMlineScenarioManager_CallMove = FName(TEXT("CallMove"));
	void AMlineScenarioManager::CallMove(FMoveData data)
	{
		MlineScenarioManager_eventCallMove_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_CallMove),&Parms);
	}
	static FName NAME_AMlineScenarioManager_CallNarration = FName(TEXT("CallNarration"));
	void AMlineScenarioManager::CallNarration(FNarrationData data)
	{
		MlineScenarioManager_eventCallNarration_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_CallNarration),&Parms);
	}
	static FName NAME_AMlineScenarioManager_EndInteraction = FName(TEXT("EndInteraction"));
	void AMlineScenarioManager::EndInteraction(int32 Scene, int32 Step, AMlineScenarioActor* endActor)
	{
		MlineScenarioManager_eventEndInteraction_Parms Parms;
		Parms.Scene=Scene;
		Parms.Step=Step;
		Parms.endActor=endActor;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_EndInteraction),&Parms);
	}
	static FName NAME_AMlineScenarioManager_EndStep = FName(TEXT("EndStep"));
	void AMlineScenarioManager::EndStep(FDefaultStepContext context)
	{
		MlineScenarioManager_eventEndStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_EndStep),&Parms);
	}
	static FName NAME_AMlineScenarioManager_FinalizeStep = FName(TEXT("FinalizeStep"));
	void AMlineScenarioManager::FinalizeStep(FDefaultStepContext context)
	{
		MlineScenarioManager_eventFinalizeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_FinalizeStep),&Parms);
	}
	static FName NAME_AMlineScenarioManager_InitializeStep = FName(TEXT("InitializeStep"));
	void AMlineScenarioManager::InitializeStep(FDefaultStepContext context)
	{
		MlineScenarioManager_eventInitializeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_InitializeStep),&Parms);
	}
	static FName NAME_AMlineScenarioManager_NextStep = FName(TEXT("NextStep"));
	void AMlineScenarioManager::NextStep(FDefaultStepContext context)
	{
		MlineScenarioManager_eventNextStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_NextStep),&Parms);
	}
	static FName NAME_AMlineScenarioManager_ShiftStep = FName(TEXT("ShiftStep"));
	void AMlineScenarioManager::ShiftStep(int32 scene, int32 step)
	{
		MlineScenarioManager_eventShiftStep_Parms Parms;
		Parms.scene=scene;
		Parms.step=step;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_ShiftStep),&Parms);
	}
	static FName NAME_AMlineScenarioManager_StartStep = FName(TEXT("StartStep"));
	void AMlineScenarioManager::StartStep(FDefaultStepContext context)
	{
		MlineScenarioManager_eventStartStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_StartStep),&Parms);
	}
	static FName NAME_AMlineScenarioManager_StayStep = FName(TEXT("StayStep"));
	void AMlineScenarioManager::StayStep(FDefaultStepContext context)
	{
		MlineScenarioManager_eventStayStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManager_StayStep),&Parms);
	}
	void AMlineScenarioManager::StaticRegisterNativesAMlineScenarioManager()
	{
		UClass* Class = AMlineScenarioManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallScenarioEvent", &AMlineScenarioManager::execCallScenarioEvent },
			{ "EndStep", &AMlineScenarioManager::execEndStep },
			{ "FinalizeStep", &AMlineScenarioManager::execFinalizeStep },
			{ "InitializeStep", &AMlineScenarioManager::execInitializeStep },
			{ "JumpStep", &AMlineScenarioManager::execJumpStep },
			{ "Next", &AMlineScenarioManager::execNext },
			{ "NextStep", &AMlineScenarioManager::execNextStep },
			{ "Prev", &AMlineScenarioManager::execPrev },
			{ "ScenarioStart", &AMlineScenarioManager::execScenarioStart },
			{ "SetEventActors_cpp", &AMlineScenarioManager::execSetEventActors_cpp },
			{ "ShiftStep", &AMlineScenarioManager::execShiftStep },
			{ "ShiftStepByName", &AMlineScenarioManager::execShiftStepByName },
			{ "StartStep", &AMlineScenarioManager::execStartStep },
			{ "StayStep", &AMlineScenarioManager::execStayStep },
			{ "StepEnd", &AMlineScenarioManager::execStepEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallFade_Parms, data), Z_Construct_UScriptStruct_FFadeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "CallFade", nullptr, nullptr, sizeof(MlineScenarioManager_eventCallFade_Parms), Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_CallFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_CallFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallInteraction_Parms, data), Z_Construct_UScriptStruct_FInteractionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "CallInteraction", nullptr, nullptr, sizeof(MlineScenarioManager_eventCallInteraction_Parms), Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_CallInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_CallInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallLocaLevel_Parms, data), Z_Construct_UScriptStruct_FLoadLevelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "CallLocaLevel", nullptr, nullptr, sizeof(MlineScenarioManager_eventCallLocaLevel_Parms), Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallMove_Parms, data), Z_Construct_UScriptStruct_FMoveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "CallMove", nullptr, nullptr, sizeof(MlineScenarioManager_eventCallMove_Parms), Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_CallMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_CallMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallNarration_Parms, data), Z_Construct_UScriptStruct_FNarrationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "CallNarration", nullptr, nullptr, sizeof(MlineScenarioManager_eventCallNarration_Parms), Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_CallNarration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_CallNarration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics
	{
		struct MlineScenarioManager_eventCallScenarioEvent_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallScenarioEvent_Parms, Scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventCallScenarioEvent_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = \"MlineScenarioEvent\")\n//\x09void MoveStep_cpp(int scene, int step);\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = \"MlineScenarioEvent\")\n       void MoveStep_cpp(int scene, int step);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "CallScenarioEvent", nullptr, nullptr, sizeof(MlineScenarioManager_eventCallScenarioEvent_Parms), Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventEndInteraction_Parms, Scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventEndInteraction_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::NewProp_endActor = { "endActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventEndInteraction_Parms, endActor), Z_Construct_UClass_AMlineScenarioActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::NewProp_endActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "EndInteraction", nullptr, nullptr, sizeof(MlineScenarioManager_eventEndInteraction_Parms), Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_EndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_EndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventEndStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "EndStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventEndStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_EndStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_EndStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventFinalizeStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "FinalizeStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventFinalizeStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventInitializeStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "Comment", "//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void InitializeStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void StartStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void StayStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void EndStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void FinalizeStep_Multicast(FStepContext context);\n//UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n//\x09void NextStep_Multicast(FStepContext context);\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
		{ "ToolTip", "UFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void InitializeStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void StartStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void StayStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void EndStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void FinalizeStep_Multicast(FStepContext context);\nUFUNCTION(NetMulticast, Reliable, Category = \"MlineScenarioEvent\")\n       void NextStep_Multicast(FStepContext context);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "InitializeStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventInitializeStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_InitializeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_InitializeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics
	{
		struct MlineScenarioManager_eventJumpStep_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventJumpStep_Parms, scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventJumpStep_Parms, step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::NewProp_scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::NewProp_step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "JumpStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventJumpStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_JumpStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_JumpStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_Next_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_Next_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "Next", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventNextStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "NextStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventNextStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_NextStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_NextStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_Prev_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_Prev_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_Prev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "Prev", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_Prev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_Prev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_Prev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_Prev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "ScenarioStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MlineScenarioEvent" },
		{ "Comment", "//UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = \"MlineScenarioData\")\n//\x09""FName saveStepName_Cpp;\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
		{ "ToolTip", "UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = \"MlineScenarioData\")\n       FName saveStepName_Cpp;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "SetEventActors_cpp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scene;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventShiftStep_Parms, scene), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventShiftStep_Parms, step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::NewProp_scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::NewProp_step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "ShiftStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventShiftStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_ShiftStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_ShiftStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics
	{
		struct MlineScenarioManager_eventShiftStepByName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventShiftStepByName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "Comment", "/// <summary>\n/// ?\xcc\xb1???\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
		{ "ToolTip", "<summary>\n?\xcc\xb1???\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "ShiftStepByName", nullptr, nullptr, sizeof(MlineScenarioManager_eventShiftStepByName_Parms), Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventStartStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "StartStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventStartStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_StartStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_StartStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManager_eventStayStep_Parms, context), Z_Construct_UScriptStruct_FDefaultStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "StayStep", nullptr, nullptr, sizeof(MlineScenarioManager_eventStayStep_Parms), Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_StayStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_StayStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManager_StepEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManager_StepEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioFlowControll" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManager_StepEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManager, nullptr, "StepEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManager_StepEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManager_StepEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManager_StepEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManager_StepEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineScenarioManager_NoRegister()
	{
		return AMlineScenarioManager::StaticClass();
	}
	struct Z_Construct_UClass_AMlineScenarioManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentStep;
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
	UObject* (*const Z_Construct_UClass_AMlineScenarioManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineScenarioManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineScenarioManager_CallFade, "CallFade" }, // 517181065
		{ &Z_Construct_UFunction_AMlineScenarioManager_CallInteraction, "CallInteraction" }, // 1835973999
		{ &Z_Construct_UFunction_AMlineScenarioManager_CallLocaLevel, "CallLocaLevel" }, // 3236441335
		{ &Z_Construct_UFunction_AMlineScenarioManager_CallMove, "CallMove" }, // 3335647717
		{ &Z_Construct_UFunction_AMlineScenarioManager_CallNarration, "CallNarration" }, // 207308120
		{ &Z_Construct_UFunction_AMlineScenarioManager_CallScenarioEvent, "CallScenarioEvent" }, // 710744364
		{ &Z_Construct_UFunction_AMlineScenarioManager_EndInteraction, "EndInteraction" }, // 764496878
		{ &Z_Construct_UFunction_AMlineScenarioManager_EndStep, "EndStep" }, // 1053935622
		{ &Z_Construct_UFunction_AMlineScenarioManager_FinalizeStep, "FinalizeStep" }, // 4079867237
		{ &Z_Construct_UFunction_AMlineScenarioManager_InitializeStep, "InitializeStep" }, // 944222905
		{ &Z_Construct_UFunction_AMlineScenarioManager_JumpStep, "JumpStep" }, // 3790500462
		{ &Z_Construct_UFunction_AMlineScenarioManager_Next, "Next" }, // 1905072738
		{ &Z_Construct_UFunction_AMlineScenarioManager_NextStep, "NextStep" }, // 112299946
		{ &Z_Construct_UFunction_AMlineScenarioManager_Prev, "Prev" }, // 2943246315
		{ &Z_Construct_UFunction_AMlineScenarioManager_ScenarioStart, "ScenarioStart" }, // 1551365836
		{ &Z_Construct_UFunction_AMlineScenarioManager_SetEventActors_cpp, "SetEventActors_cpp" }, // 2878759765
		{ &Z_Construct_UFunction_AMlineScenarioManager_ShiftStep, "ShiftStep" }, // 1548842106
		{ &Z_Construct_UFunction_AMlineScenarioManager_ShiftStepByName, "ShiftStepByName" }, // 179116745
		{ &Z_Construct_UFunction_AMlineScenarioManager_StartStep, "StartStep" }, // 3253124329
		{ &Z_Construct_UFunction_AMlineScenarioManager_StayStep, "StayStep" }, // 1373074896
		{ &Z_Construct_UFunction_AMlineScenarioManager_StepEnd, "StepEnd" }, // 18918996
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineScenarioManager.h" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentScene_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentScene = { "currentScene", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, currentScene), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentStep_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentStep = { "currentStep", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, currentStep), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentStep_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp_Inner = { "ScenarioEvent_cpp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSceneEventData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp = { "ScenarioEvent_cpp", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, ScenarioEvent_cpp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp_Inner = { "scenarioActors_cpp", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMlineScenarioActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp = { "scenarioActors_cpp", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, scenarioActors_cpp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState = { "ScenarioState", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, ScenarioState), Z_Construct_UEnum_MlineCorePlugin_EScenarioState, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState = { "StepState", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, StepState), Z_Construct_UEnum_MlineCorePlugin_EStepState, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EndedEventFlag_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESceneEvent" },
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EndedEventFlag = { "EndedEventFlag", nullptr, (EPropertyFlags)0x0010040000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, EndedEventFlag), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EndedEventFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EndedEventFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioFlowTimerHandle_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioFlowTimerHandle = { "ScenarioFlowTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, ScenarioFlowTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioFlowTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioFlowTimerHandle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers_Inner = { "ManagerControllers", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMlineScenarioManagerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers = { "ManagerControllers", nullptr, (EPropertyFlags)0x0010040000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, ManagerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EventChecker_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESceneEvent" },
		{ "Category", "MlineScenarioEvent" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EventChecker = { "EventChecker", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManager, EventChecker), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EventChecker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EventChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineScenarioManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_currentStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioEvent_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_scenarioActors_cpp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_StepState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EndedEventFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ScenarioFlowTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_ManagerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManager_Statics::NewProp_EventChecker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineScenarioManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineScenarioManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineScenarioManager_Statics::ClassParams = {
		&AMlineScenarioManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineScenarioManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineScenarioManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineScenarioManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineScenarioManager, 2249275879);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineScenarioManager>()
	{
		return AMlineScenarioManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineScenarioManager(Z_Construct_UClass_AMlineScenarioManager, &AMlineScenarioManager::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineScenarioManager"), false, nullptr, nullptr, nullptr);

	void AMlineScenarioManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_currentScene(TEXT("currentScene"));
		static const FName Name_currentStep(TEXT("currentStep"));
		static const FName Name_ScenarioState(TEXT("ScenarioState"));
		static const FName Name_StepState(TEXT("StepState"));
		static const FName Name_EndedEventFlag(TEXT("EndedEventFlag"));

		const bool bIsValid = true
			&& Name_currentScene == ClassReps[(int32)ENetFields_Private::currentScene].Property->GetFName()
			&& Name_currentStep == ClassReps[(int32)ENetFields_Private::currentStep].Property->GetFName()
			&& Name_ScenarioState == ClassReps[(int32)ENetFields_Private::ScenarioState].Property->GetFName()
			&& Name_StepState == ClassReps[(int32)ENetFields_Private::StepState].Property->GetFName()
			&& Name_EndedEventFlag == ClassReps[(int32)ENetFields_Private::EndedEventFlag].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineScenarioManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineScenarioManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
