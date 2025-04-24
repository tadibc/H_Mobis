// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineScenarioManagerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineScenarioManagerController() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerController_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_ESceneEvent();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EPlayerType();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMlineScenarioManagerController::execInitEndedEventFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEndedEventFlag_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMlineScenarioManagerController::execSetEndedEventFlag)
	{
		P_GET_ENUM(ESceneEvent,Z_Param_eventFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndedEventFlag_Implementation(ESceneEvent(Z_Param_eventFlag));
		P_NATIVE_END;
	}
	static FName NAME_AMlineScenarioManagerController_InitEndedEventFlag = FName(TEXT("InitEndedEventFlag"));
	void AMlineScenarioManagerController::InitEndedEventFlag()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerController_InitEndedEventFlag),NULL);
	}
	static FName NAME_AMlineScenarioManagerController_SetEndedEventFlag = FName(TEXT("SetEndedEventFlag"));
	void AMlineScenarioManagerController::SetEndedEventFlag(ESceneEvent eventFlag)
	{
		MlineScenarioManagerController_eventSetEndedEventFlag_Parms Parms;
		Parms.eventFlag=eventFlag;
		ProcessEvent(FindFunctionChecked(NAME_AMlineScenarioManagerController_SetEndedEventFlag),&Parms);
	}
	void AMlineScenarioManagerController::StaticRegisterNativesAMlineScenarioManagerController()
	{
		UClass* Class = AMlineScenarioManagerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitEndedEventFlag", &AMlineScenarioManagerController::execInitEndedEventFlag },
			{ "SetEndedEventFlag", &AMlineScenarioManagerController::execSetEndedEventFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioManagerController" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerController, nullptr, "InitEndedEventFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::NewProp_eventFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::NewProp_eventFlag = { "eventFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MlineScenarioManagerController_eventSetEndedEventFlag_Parms, eventFlag), Z_Construct_UEnum_MlineCorePlugin_ESceneEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::NewProp_eventFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::NewProp_eventFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "MlineScenarioManagerController" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMlineScenarioManagerController, nullptr, "SetEndedEventFlag", nullptr, nullptr, sizeof(MlineScenarioManagerController_eventSetEndedEventFlag_Parms), Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMlineScenarioManagerController_NoRegister()
	{
		return AMlineScenarioManagerController::StaticClass();
	}
	struct Z_Construct_UClass_AMlineScenarioManagerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndedEventFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndedEventFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScenarioManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineScenarioManagerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMlineScenarioManagerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMlineScenarioManagerController_InitEndedEventFlag, "InitEndedEventFlag" }, // 3423075859
		{ &Z_Construct_UFunction_AMlineScenarioManagerController_SetEndedEventFlag, "SetEndedEventFlag" }, // 935986450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineScenarioManagerController.h" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType_MetaData[] = {
		{ "Category", "MlineScenarioManagerController" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType = { "playerType", nullptr, (EPropertyFlags)0x0011000000020035, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerController, playerType), Z_Construct_UEnum_MlineCorePlugin_EPlayerType, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_EndedEventFlag_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESceneEvent" },
		{ "Category", "MlineScenarioManagerController" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_EndedEventFlag = { "EndedEventFlag", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerController, EndedEventFlag), METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_EndedEventFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_EndedEventFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_ScenarioManager_MetaData[] = {
		{ "Category", "MlineScenarioManagerController" },
		{ "ModuleRelativePath", "Public/MlineScenarioManagerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_ScenarioManager = { "ScenarioManager", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineScenarioManagerController, ScenarioManager), Z_Construct_UClass_AMlineScenarioManagerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_ScenarioManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_ScenarioManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineScenarioManagerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_playerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_EndedEventFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineScenarioManagerController_Statics::NewProp_ScenarioManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineScenarioManagerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineScenarioManagerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineScenarioManagerController_Statics::ClassParams = {
		&AMlineScenarioManagerController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMlineScenarioManagerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineScenarioManagerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineScenarioManagerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineScenarioManagerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineScenarioManagerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineScenarioManagerController, 1856911085);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<AMlineScenarioManagerController>()
	{
		return AMlineScenarioManagerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineScenarioManagerController(Z_Construct_UClass_AMlineScenarioManagerController, &AMlineScenarioManagerController::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("AMlineScenarioManagerController"), false, nullptr, nullptr, nullptr);

	void AMlineScenarioManagerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_playerType(TEXT("playerType"));
		static const FName Name_EndedEventFlag(TEXT("EndedEventFlag"));
		static const FName Name_ScenarioManager(TEXT("ScenarioManager"));

		const bool bIsValid = true
			&& Name_playerType == ClassReps[(int32)ENetFields_Private::playerType].Property->GetFName()
			&& Name_EndedEventFlag == ClassReps[(int32)ENetFields_Private::EndedEventFlag].Property->GetFName()
			&& Name_ScenarioManager == ClassReps[(int32)ENetFields_Private::ScenarioManager].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMlineScenarioManagerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineScenarioManagerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
