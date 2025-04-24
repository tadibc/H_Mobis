// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineScenarioActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineScenarioActorBase() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActorBase_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActorBase();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineEventActorBase();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorStepContext();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMlineScenarioActorBase::execAndroid_Quit_Game)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Android_Quit_Game();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActorBase::execNextStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActorBase::execFinalizeStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActorBase::execEndStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActorBase::execStartStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioActorBase::execInitializeStep)
	{
		P_GET_STRUCT(FActorStepContext,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStep_Implementation(Z_Param_context);
		P_NATIVE_END;
	}
	static FName NAME_AMlineScenarioActorBase_EndStep = FName(TEXT("EndStep"));
	void AMlineScenarioActorBase::EndStep(FActorStepContext context)
	{
		MlineScenarioActorBase_eventEndStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_EndStep),&Parms);
	}
	static FName NAME_AMlineScenarioActorBase_FinalizeStep = FName(TEXT("FinalizeStep"));
	void AMlineScenarioActorBase::FinalizeStep(FActorStepContext context)
	{
		MlineScenarioActorBase_eventFinalizeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_FinalizeStep),&Parms);
	}
	static FName NAME_AMlineScenarioActorBase_InitializeStep = FName(TEXT("InitializeStep"));
	void AMlineScenarioActorBase::InitializeStep(FActorStepContext context)
	{
		MlineScenarioActorBase_eventInitializeStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_InitializeStep),&Parms);
	}
	static FName NAME_AMlineScenarioActorBase_JumpInteraction = FName(TEXT("JumpInteraction"));
	void AMlineScenarioActorBase::JumpInteraction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_JumpInteraction),NULL);
	}
	static FName NAME_AMlineScenarioActorBase_NextStep = FName(TEXT("NextStep"));
	void AMlineScenarioActorBase::NextStep(FActorStepContext context)
	{
		MlineScenarioActorBase_eventNextStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_NextStep),&Parms);
	}
	static FName NAME_AMlineScenarioActorBase_StartInteraction = FName(TEXT("StartInteraction"));
	void AMlineScenarioActorBase::StartInteraction(AMlineScenarioManagerBase* manager)
	{
		MlineScenarioActorBase_eventStartInteraction_Parms Parms;
		Parms.manager=manager;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_StartInteraction),&Parms);
	}
	static FName NAME_AMlineScenarioActorBase_StartStep = FName(TEXT("StartStep"));
	void AMlineScenarioActorBase::StartStep(FActorStepContext context)
	{
		MlineScenarioActorBase_eventStartStep_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_StartStep),&Parms);
	}
	static FName NAME_AMlineScenarioActorBase_StepEnded = FName(TEXT("StepEnded"));
	void AMlineScenarioActorBase::StepEnded(FActorStepContext context)
	{
		MlineScenarioActorBase_eventStepEnded_Parms Parms;
		Parms.context=context;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioActorBase_StepEnded),&Parms);
	}
	void AMlineScenarioActorBase::StaticRegisterNativesAMlineScenarioActorBase()
	{
		UClass* Class = AMlineScenarioActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Android_Quit_Game", &AMlineScenarioActorBase::execAndroid_Quit_Game },
			{ "EndStep", &AMlineScenarioActorBase::execEndStep },
			{ "FinalizeStep", &AMlineScenarioActorBase::execFinalizeStep },
			{ "InitializeStep", &AMlineScenarioActorBase::execInitializeStep },
			{ "NextStep", &AMlineScenarioActorBase::execNextStep },
			{ "StartStep", &AMlineScenarioActorBase::execStartStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "Android_Quit_Game", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventEndStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "EndStep", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventEndStep_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_EndStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_EndStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventFinalizeStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "FinalizeStep", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventFinalizeStep_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventInitializeStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "InitializeStep", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventInitializeStep_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "JumpInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventNextStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "NextStep", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventNextStep_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_NextStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_NextStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::NewProp_manager = { "manager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventStartInteraction_Parms, manager), Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::NewProp_manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "StartInteraction", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventStartInteraction_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventStartStep_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "StartStep", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventStartStep_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_StartStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_StartStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioActorBase_eventStepEnded_Parms, context), Z_Construct_UScriptStruct_FActorStepContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioActorBase, nullptr, "StepEnded", nullptr, nullptr, sizeof(MlineScenarioActorBase_eventStepEnded_Parms), Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineScenarioActorBase_NoRegister()
	{
		return AMlineScenarioActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AMlineScenarioActorBase_Statics
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
	UObject* (*const Z_Construct_UClass_AMlineScenarioActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMlineEventActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineScenarioActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_Android_Quit_Game, "Android_Quit_Game" }, // 1999388982
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_EndStep, "EndStep" }, // 4231003375
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_FinalizeStep, "FinalizeStep" }, // 2403188195
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_InitializeStep, "InitializeStep" }, // 3246828740
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_JumpInteraction, "JumpInteraction" }, // 162959812
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_NextStep, "NextStep" }, // 200527354
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_StartInteraction, "StartInteraction" }, // 97066472
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_StartStep, "StartStep" }, // 2758944743
		{ &Z_Construct_UFunction_AMlineScenarioActorBase_StepEnded, "StepEnded" }, // 2457270556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineScenarioActorBase.h" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionScene_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionScene = { "interactionScene", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioActorBase, interactionScene), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionStep_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionStep = { "interactionStep", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioActorBase, interactionStep), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_controlledManager_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_controlledManager = { "controlledManager", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioActorBase, controlledManager), Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_controlledManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_controlledManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd_MetaData[] = {
		{ "Category", "MlineEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioActorBase.h" },
	};
#endif
	void Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd_SetBit(void* Obj)
	{
		((AMlineScenarioActorBase*)Obj)->bIsInteractionEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd = { "bIsInteractionEnd", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineScenarioActorBase), &Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineScenarioActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_interactionStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_controlledManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioActorBase_Statics::NewProp_bIsInteractionEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineScenarioActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineScenarioActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineScenarioActorBase_Statics::ClassParams = {
		&AMlineScenarioActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineScenarioActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineScenarioActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineScenarioActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineScenarioActorBase, 956556689);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineScenarioActorBase>()
	{
		return AMlineScenarioActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineScenarioActorBase(Z_Construct_UClass_AMlineScenarioActorBase, &AMlineScenarioActorBase::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineScenarioActorBase"), false, nullptr, nullptr, nullptr);

	void AMlineScenarioActorBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
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

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineScenarioActorBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineScenarioActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
