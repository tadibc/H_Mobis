// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineScenarioActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineScenarioActor() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActor_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActor();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineEventActor();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorStepContext();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMlineScenarioActor::execNextStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActor::execFinalizeStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActor::execEndStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActor::execStartStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActor::execInitializeStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	static FName NAME_AMlineScenarioActor_EndStep = FName(TEXT("EndStep"));
	void AMlineScenarioActor::EndStep(FActorStepContext context)
	{
		MlineScenarioActor_eventEndStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_EndStep),&Parms);
	}
	static FName NAME_AMlineScenarioActor_FinalizeStep = FName(TEXT("FinalizeStep"));
	void AMlineScenarioActor::FinalizeStep(FActorStepContext context)
	{
		MlineScenarioActor_eventFinalizeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_FinalizeStep),&Parms);
	}
	static FName NAME_AMlineScenarioActor_InitializeStep = FName(TEXT("InitializeStep"));
	void AMlineScenarioActor::InitializeStep(FActorStepContext context)
	{
		MlineScenarioActor_eventInitializeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_InitializeStep),&Parms);
	}
	static FName NAME_AMlineScenarioActor_NextStep = FName(TEXT("NextStep"));
	void AMlineScenarioActor::NextStep(FActorStepContext context)
	{
		MlineScenarioActor_eventNextStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_NextStep),&Parms);
	}
	static FName NAME_AMlineScenarioActor_StartInteraction = FName(TEXT("StartInteraction"));
	void AMlineScenarioActor::StartInteraction(AMlineScenarioManager* manager)
	{
		MlineScenarioActor_eventStartInteraction_Parms Parms;
		Parms.manager=manager;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_StartInteraction),&Parms);
	}
	static FName NAME_AMlineScenarioActor_StartStep = FName(TEXT("StartStep"));
	void AMlineScenarioActor::StartStep(FActorStepContext context)
	{
		MlineScenarioActor_eventStartStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_StartStep),&Parms);
	}
	static FName NAME_AMlineScenarioActor_StepEnded = FName(TEXT("StepEnded"));
	void AMlineScenarioActor::StepEnded(FActorStepContext context)
	{
		MlineScenarioActor_eventStepEnded_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActor_StepEnded),&Parms);
	}
	void AMlineScenarioActor::StaticRegisterNativesAMlineScenarioActor()
	{
		UClass* Class = AMlineScenarioActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndStep", &AMlineScenarioActor::execEndStep },
			{ "FinalizeStep", &AMlineScenarioActor::execFinalizeStep },
			{ "InitializeStep", &AMlineScenarioActor::execInitializeStep },
			{ "NextStep", &AMlineScenarioActor::execNextStep },
			{ "StartStep", &AMlineScenarioActor::execStartStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventEndStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "EndStep", nullptr, nullptr, sizeof(MlineScenarioActor_eventEndStep_Parms), Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_EndStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_EndStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventFinalizeStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "FinalizeStep", nullptr, nullptr, sizeof(MlineScenarioActor_eventFinalizeStep_Parms), Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventInitializeStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "InitializeStep", nullptr, nullptr, sizeof(MlineScenarioActor_eventInitializeStep_Parms), Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_InitializeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_InitializeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventNextStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "NextStep", nullptr, nullptr, sizeof(MlineScenarioActor_eventNextStep_Parms), Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_NextStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_NextStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::NewProp_manager = { "manager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventStartInteraction_Parms, manager), Z_Construct_UClass_AMlineScenarioManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::NewProp_manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "StartInteraction", nullptr, nullptr, sizeof(MlineScenarioActor_eventStartInteraction_Parms), Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_StartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_StartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventStartStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "StartStep", nullptr, nullptr, sizeof(MlineScenarioActor_eventStartStep_Parms), Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_StartStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_StartStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActor_eventStepEnded_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActor, nullptr, "StepEnded", nullptr, nullptr, sizeof(MlineScenarioActor_eventStepEnded_Parms), Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActor_StepEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActor_StepEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineScenarioActor_NoRegister()
	{
		return AMlineScenarioActor::StaticClass();
	}
	struct Z_Construct_UClass_AMlineScenarioActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_interactionScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_interactionStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlledManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controlledManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInteractionEnd_MetaData[];
#endif
		static void NewProp_bIsInteractionEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractionEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineScenarioActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMlineEventActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineScenarioActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineScenarioActor_EndStep, "EndStep" }, // 1733838567
		{ &Z_Construct_UFunction_AMlineScenarioActor_FinalizeStep, "FinalizeStep" }, // 3296278104
		{ &Z_Construct_UFunction_AMlineScenarioActor_InitializeStep, "InitializeStep" }, // 2346158807
		{ &Z_Construct_UFunction_AMlineScenarioActor_NextStep, "NextStep" }, // 429522711
		{ &Z_Construct_UFunction_AMlineScenarioActor_StartInteraction, "StartInteraction" }, // 1791990094
		{ &Z_Construct_UFunction_AMlineScenarioActor_StartStep, "StartStep" }, // 1896070625
		{ &Z_Construct_UFunction_AMlineScenarioActor_StepEnded, "StepEnded" }, // 1183568970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineScenarioActor.h" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionScene_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionScene = { "interactionScene", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioActor, interactionScene), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionStep_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionStep = { "interactionStep", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioActor, interactionStep), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_controlledManager_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_controlledManager = { "controlledManager", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioActor, controlledManager), Z_Construct_UClass_AMlineScenarioManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_controlledManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_controlledManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd_SetBit(void* Obj)
	{
		((AMlineScenarioActor*)Obj)->bIsInteractionEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd = { "bIsInteractionEnd", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineScenarioActor), &Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineScenarioActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_interactionStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_controlledManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActor_Statics::NewProp_bIsInteractionEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineScenarioActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineScenarioActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineScenarioActor_Statics::ClassParams = {
		&AMlineScenarioActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineScenarioActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineScenarioActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineScenarioActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineScenarioActor, 3241806372);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineScenarioActor>()
	{
		return AMlineScenarioActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineScenarioActor(Z_Construct_UClass_AMlineScenarioActor, &AMlineScenarioActor::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineScenarioActor"), false, nullptr, nullptr, nullptr);

	void AMlineScenarioActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_interactionScene(TEXT("interactionScene"));
		static const FName Name_interactionStep(TEXT("interactionStep"));
		static const FName Name_controlledManager(TEXT("controlledManager"));
		static const FName Name_bIsInteractionEnd(TEXT("bIsInteractionEnd"));

		const bool bIsValid = true
			&& Name_interactionScene == ClassReps[(int32)ENetFields_Private::interactionScene].Property->GetFName()
			&& Name_interactionStep == ClassReps[(int32)ENetFields_Private::interactionStep].Property->GetFName()
			&& Name_controlledManager == ClassReps[(int32)ENetFields_Private::controlledManager].Property->GetFName()
			&& Name_bIsInteractionEnd == ClassReps[(int32)ENetFields_Private::bIsInteractionEnd].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineScenarioActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineScenarioActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
