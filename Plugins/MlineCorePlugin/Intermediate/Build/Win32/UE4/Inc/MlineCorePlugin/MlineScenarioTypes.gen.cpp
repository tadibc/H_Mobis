// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineScenarioTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineScenarioTypes() {}
// Cross Module References
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EPlayerType();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_ELevelLoadTypeEunm();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EInteractionCountTypeEunm();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EFadeTypeEunm();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EMoveTargetEunm();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EMoveTypeEunm();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EStepState();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EScenarioState();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_ESceneEvent();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultStepContext();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStepContextBase();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorStepContext();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSceneEventData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStepEventData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNarrationData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoveData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFadeData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelData();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScenarioEventDataBase();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineScenarioActorBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EPlayerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EPlayerType, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EPlayerType"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EPlayerType>()
	{
		return EPlayerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerType(EPlayerType_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EPlayerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EPlayerType_Hash() { return 3719650437U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EPlayerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerType"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EPlayerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerType::User", (int64)EPlayerType::User },
				{ "EPlayerType::Admin", (int64)EPlayerType::Admin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Admin.Name", "EPlayerType::Admin" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "User.Name", "EPlayerType::User" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EPlayerType",
				"EPlayerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELevelLoadTypeEunm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_ELevelLoadTypeEunm, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("ELevelLoadTypeEunm"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<ELevelLoadTypeEunm>()
	{
		return ELevelLoadTypeEunm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelLoadTypeEunm(ELevelLoadTypeEunm_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("ELevelLoadTypeEunm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_ELevelLoadTypeEunm_Hash() { return 361934213U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_ELevelLoadTypeEunm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelLoadTypeEunm"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_ELevelLoadTypeEunm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelLoadTypeEunm::OpenLevel", (int64)ELevelLoadTypeEunm::OpenLevel },
				{ "ELevelLoadTypeEunm::LoadLevel", (int64)ELevelLoadTypeEunm::LoadLevel },
				{ "ELevelLoadTypeEunm::UnLoadLevel", (int64)ELevelLoadTypeEunm::UnLoadLevel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoadLevel.Name", "ELevelLoadTypeEunm::LoadLevel" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "OpenLevel.Name", "ELevelLoadTypeEunm::OpenLevel" },
				{ "UnLoadLevel.Name", "ELevelLoadTypeEunm::UnLoadLevel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"ELevelLoadTypeEunm",
				"ELevelLoadTypeEunm",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInteractionCountTypeEunm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EInteractionCountTypeEunm, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EInteractionCountTypeEunm"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EInteractionCountTypeEunm>()
	{
		return EInteractionCountTypeEunm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionCountTypeEunm(EInteractionCountTypeEunm_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EInteractionCountTypeEunm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EInteractionCountTypeEunm_Hash() { return 71878688U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EInteractionCountTypeEunm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionCountTypeEunm"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EInteractionCountTypeEunm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionCountTypeEunm::All_Interaction", (int64)EInteractionCountTypeEunm::All_Interaction },
				{ "EInteractionCountTypeEunm::Count_Interaction", (int64)EInteractionCountTypeEunm::Count_Interaction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All_Interaction.Name", "EInteractionCountTypeEunm::All_Interaction" },
				{ "BlueprintType", "true" },
				{ "Count_Interaction.Name", "EInteractionCountTypeEunm::Count_Interaction" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EInteractionCountTypeEunm",
				"EInteractionCountTypeEunm",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFadeTypeEunm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EFadeTypeEunm, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EFadeTypeEunm"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EFadeTypeEunm>()
	{
		return EFadeTypeEunm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFadeTypeEunm(EFadeTypeEunm_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EFadeTypeEunm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EFadeTypeEunm_Hash() { return 562263932U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EFadeTypeEunm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFadeTypeEunm"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EFadeTypeEunm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFadeTypeEunm::FadeOut", (int64)EFadeTypeEunm::FadeOut },
				{ "EFadeTypeEunm::FadeIn", (int64)EFadeTypeEunm::FadeIn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FadeIn.Name", "EFadeTypeEunm::FadeIn" },
				{ "FadeOut.Name", "EFadeTypeEunm::FadeOut" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EFadeTypeEunm",
				"EFadeTypeEunm",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMoveTargetEunm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EMoveTargetEunm, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EMoveTargetEunm"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EMoveTargetEunm>()
	{
		return EMoveTargetEunm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoveTargetEunm(EMoveTargetEunm_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EMoveTargetEunm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EMoveTargetEunm_Hash() { return 3821271531U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EMoveTargetEunm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoveTargetEunm"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EMoveTargetEunm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoveTargetEunm::Player", (int64)EMoveTargetEunm::Player },
				{ "EMoveTargetEunm::Actor", (int64)EMoveTargetEunm::Actor },
				{ "EMoveTargetEunm::All", (int64)EMoveTargetEunm::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.Name", "EMoveTargetEunm::Actor" },
				{ "All.Name", "EMoveTargetEunm::All" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "Player.Name", "EMoveTargetEunm::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EMoveTargetEunm",
				"EMoveTargetEunm",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMoveTypeEunm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EMoveTypeEunm, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EMoveTypeEunm"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EMoveTypeEunm>()
	{
		return EMoveTypeEunm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoveTypeEunm(EMoveTypeEunm_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EMoveTypeEunm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EMoveTypeEunm_Hash() { return 3195171957U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EMoveTypeEunm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoveTypeEunm"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EMoveTypeEunm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoveTypeEunm::Teleport", (int64)EMoveTypeEunm::Teleport },
				{ "EMoveTypeEunm::SplineMove", (int64)EMoveTypeEunm::SplineMove },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "SplineMove.Name", "EMoveTypeEunm::SplineMove" },
				{ "Teleport.Name", "EMoveTypeEunm::Teleport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EMoveTypeEunm",
				"EMoveTypeEunm",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStepState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EStepState, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EStepState"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EStepState>()
	{
		return EStepState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStepState(EStepState_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EStepState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EStepState_Hash() { return 2854608578U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EStepState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStepState"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EStepState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStepState::Initialize", (int64)EStepState::Initialize },
				{ "EStepState::Start", (int64)EStepState::Start },
				{ "EStepState::Stay", (int64)EStepState::Stay },
				{ "EStepState::End", (int64)EStepState::End },
				{ "EStepState::Finalize", (int64)EStepState::Finalize },
				{ "EStepState::Next", (int64)EStepState::Next },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "End.Name", "EStepState::End" },
				{ "Finalize.Name", "EStepState::Finalize" },
				{ "Initialize.Name", "EStepState::Initialize" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "Next.Name", "EStepState::Next" },
				{ "Start.Name", "EStepState::Start" },
				{ "Stay.Name", "EStepState::Stay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EStepState",
				"EStepState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EScenarioState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EScenarioState, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EScenarioState"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EScenarioState>()
	{
		return EScenarioState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScenarioState(EScenarioState_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EScenarioState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EScenarioState_Hash() { return 2008769053U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EScenarioState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScenarioState"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EScenarioState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScenarioState::Stop", (int64)EScenarioState::Stop },
				{ "EScenarioState::Play", (int64)EScenarioState::Play },
				{ "EScenarioState::Pause", (int64)EScenarioState::Pause },
				{ "EScenarioState::Rewind", (int64)EScenarioState::Rewind },
				{ "EScenarioState::FastForword", (int64)EScenarioState::FastForword },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FastForword.Name", "EScenarioState::FastForword" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "Pause.Name", "EScenarioState::Pause" },
				{ "Play.Name", "EScenarioState::Play" },
				{ "Rewind.Name", "EScenarioState::Rewind" },
				{ "Stop.Name", "EScenarioState::Stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EScenarioState",
				"EScenarioState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESceneEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_ESceneEvent, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("ESceneEvent"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<ESceneEvent>()
	{
		return ESceneEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneEvent(ESceneEvent_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("ESceneEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_ESceneEvent_Hash() { return 3159561271U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_ESceneEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneEvent"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_ESceneEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESceneEvent::None", (int64)ESceneEvent::None },
				{ "ESceneEvent::Narration", (int64)ESceneEvent::Narration },
				{ "ESceneEvent::Move", (int64)ESceneEvent::Move },
				{ "ESceneEvent::Fade", (int64)ESceneEvent::Fade },
				{ "ESceneEvent::Interaction", (int64)ESceneEvent::Interaction },
				{ "ESceneEvent::LoadLevel", (int64)ESceneEvent::LoadLevel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Fade.Name", "ESceneEvent::Fade" },
				{ "Interaction.Name", "ESceneEvent::Interaction" },
				{ "LoadLevel.Name", "ESceneEvent::LoadLevel" },
				{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
				{ "Move.Name", "ESceneEvent::Move" },
				{ "Narration.Name", "ESceneEvent::Narration" },
				{ "None.Name", "ESceneEvent::None" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"ESceneEvent",
				"ESceneEvent",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FDefaultStepContext>() == std::is_polymorphic<FStepContextBase>(), "USTRUCT FDefaultStepContext cannot be polymorphic unless super FStepContextBase is polymorphic");

class UScriptStruct* FDefaultStepContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDefaultStepContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultStepContext, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("DefaultStepContext"), sizeof(FDefaultStepContext), Get_Z_Construct_UScriptStruct_FDefaultStepContext_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FDefaultStepContext>()
{
	return FDefaultStepContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDefaultStepContext(FDefaultStepContext::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("DefaultStepContext"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFDefaultStepContext
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFDefaultStepContext()
	{
		UScriptStruct::DeferCppStructOps<FDefaultStepContext>(FName(TEXT("DefaultStepContext")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFDefaultStepContext;
	struct Z_Construct_UScriptStruct_FDefaultStepContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultStepContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDefaultStepContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultStepContext>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultStepContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FStepContextBase,
		&NewStructOps,
		"DefaultStepContext",
		sizeof(FDefaultStepContext),
		alignof(FDefaultStepContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultStepContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultStepContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDefaultStepContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDefaultStepContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DefaultStepContext"), sizeof(FDefaultStepContext), Get_Z_Construct_UScriptStruct_FDefaultStepContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDefaultStepContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDefaultStepContext_Hash() { return 1959651171U; }

static_assert(std::is_polymorphic<FActorStepContext>() == std::is_polymorphic<FStepContextBase>(), "USTRUCT FActorStepContext cannot be polymorphic unless super FStepContextBase is polymorphic");

class UScriptStruct* FActorStepContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FActorStepContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorStepContext, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("ActorStepContext"), sizeof(FActorStepContext), Get_Z_Construct_UScriptStruct_FActorStepContext_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FActorStepContext>()
{
	return FActorStepContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorStepContext(FActorStepContext::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("ActorStepContext"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFActorStepContext
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFActorStepContext()
	{
		UScriptStruct::DeferCppStructOps<FActorStepContext>(FName(TEXT("ActorStepContext")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFActorStepContext;
	struct Z_Construct_UScriptStruct_FActorStepContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorStepContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorStepContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorStepContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorStepContext_Statics::NewProp_tag_MetaData[] = {
		{ "Category", "MlineScenarioSystem|Context" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorStepContext_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorStepContext, tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorStepContext_Statics::NewProp_tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorStepContext_Statics::NewProp_tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorStepContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorStepContext_Statics::NewProp_tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorStepContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FStepContextBase,
		&NewStructOps,
		"ActorStepContext",
		sizeof(FActorStepContext),
		alignof(FActorStepContext),
		Z_Construct_UScriptStruct_FActorStepContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorStepContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorStepContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorStepContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorStepContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorStepContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorStepContext"), sizeof(FActorStepContext), Get_Z_Construct_UScriptStruct_FActorStepContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorStepContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorStepContext_Hash() { return 3343469697U; }
class UScriptStruct* FStepContextBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStepContextBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStepContextBase, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("StepContextBase"), sizeof(FStepContextBase), Get_Z_Construct_UScriptStruct_FStepContextBase_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FStepContextBase>()
{
	return FStepContextBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStepContextBase(FStepContextBase::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("StepContextBase"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFStepContextBase
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFStepContextBase()
	{
		UScriptStruct::DeferCppStructOps<FStepContextBase>(FName(TEXT("StepContextBase")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFStepContextBase;
	struct Z_Construct_UScriptStruct_FStepContextBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_step_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_step;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepContextBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStepContextBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStepContextBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_scene_MetaData[] = {
		{ "Category", "MlineScenarioSystem|Context" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepContextBase, scene), METADATA_PARAMS(Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_step_MetaData[] = {
		{ "Category", "MlineScenarioSystem|Context" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_step = { "step", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepContextBase, step), METADATA_PARAMS(Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_step_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_step_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_name_MetaData[] = {
		{ "Category", "MlineScenarioSystem|Context" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepContextBase, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStepContextBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepContextBase_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStepContextBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		nullptr,
		&NewStructOps,
		"StepContextBase",
		sizeof(FStepContextBase),
		alignof(FStepContextBase),
		Z_Construct_UScriptStruct_FStepContextBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepContextBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStepContextBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepContextBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStepContextBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStepContextBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StepContextBase"), sizeof(FStepContextBase), Get_Z_Construct_UScriptStruct_FStepContextBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStepContextBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStepContextBase_Hash() { return 2748114305U; }
class UScriptStruct* FSceneEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSceneEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneEventData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("SceneEventData"), sizeof(FSceneEventData), Get_Z_Construct_UScriptStruct_FSceneEventData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FSceneEventData>()
{
	return FSceneEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSceneEventData(FSceneEventData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("SceneEventData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFSceneEventData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFSceneEventData()
	{
		UScriptStruct::DeferCppStructOps<FSceneEventData>(FName(TEXT("SceneEventData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFSceneEventData;
	struct Z_Construct_UScriptStruct_FSceneEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SceneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Step_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSceneEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_SceneName_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_SceneName = { "SceneName", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneEventData, SceneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_SceneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_SceneName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step_Inner = { "Step", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStepEventData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSceneEventData, Step), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSceneEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_SceneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneEventData_Statics::NewProp_Step,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		nullptr,
		&NewStructOps,
		"SceneEventData",
		sizeof(FSceneEventData),
		alignof(FSceneEventData),
		Z_Construct_UScriptStruct_FSceneEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSceneEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSceneEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SceneEventData"), sizeof(FSceneEventData), Get_Z_Construct_UScriptStruct_FSceneEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSceneEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSceneEventData_Hash() { return 2494719720U; }
class UScriptStruct* FStepEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStepEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStepEventData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("StepEventData"), sizeof(FStepEventData), Get_Z_Construct_UScriptStruct_FStepEventData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FStepEventData>()
{
	return FStepEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStepEventData(FStepEventData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("StepEventData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFStepEventData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFStepEventData()
	{
		UScriptStruct::DeferCppStructOps<FStepEventData>(FName(TEXT("StepEventData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFStepEventData;
	struct Z_Construct_UScriptStruct_FStepEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StepName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneEventFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SceneEventFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Narration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Narration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fade_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStepEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStepEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_StepName_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_StepName = { "StepName", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, StepName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_StepName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_StepName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_SceneEventFlag_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESceneEvent" },
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_SceneEventFlag = { "SceneEventFlag", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, SceneEventFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_SceneEventFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_SceneEventFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Narration_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "Editcondition", "SceneEventFlag & ESceneEvent::Narration" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Narration = { "Narration", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, Narration), Z_Construct_UScriptStruct_FNarrationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Narration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Narration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Move_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "Editcondition", "SceneEventFlag & ESceneEvent::Move" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, Move), Z_Construct_UScriptStruct_FMoveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Fade_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "Editcondition", "SceneEventFlag & ESceneEvent::Fade" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Fade = { "Fade", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, Fade), Z_Construct_UScriptStruct_FFadeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Fade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Fade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_InteractionActor_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "Editcondition", "SceneEventFlag & ESceneEvent::Interaction" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_InteractionActor = { "InteractionActor", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, InteractionActor), Z_Construct_UScriptStruct_FInteractionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_InteractionActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_InteractionActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_LoadLevel_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step" },
		{ "Editcondition", "SceneEventFlag & ESceneEvent::LoadLevel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_LoadLevel = { "LoadLevel", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStepEventData, LoadLevel), Z_Construct_UScriptStruct_FLoadLevelData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_LoadLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_LoadLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStepEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_StepName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_SceneEventFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Narration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_Fade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_InteractionActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStepEventData_Statics::NewProp_LoadLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStepEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		nullptr,
		&NewStructOps,
		"StepEventData",
		sizeof(FStepEventData),
		alignof(FStepEventData),
		Z_Construct_UScriptStruct_FStepEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStepEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStepEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStepEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStepEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StepEventData"), sizeof(FStepEventData), Get_Z_Construct_UScriptStruct_FStepEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStepEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStepEventData_Hash() { return 3554216631U; }

static_assert(std::is_polymorphic<FLoadLevelData>() == std::is_polymorphic<FScenarioEventDataBase>(), "USTRUCT FLoadLevelData cannot be polymorphic unless super FScenarioEventDataBase is polymorphic");

class UScriptStruct* FLoadLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLoadLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadLevelData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("LoadLevelData"), sizeof(FLoadLevelData), Get_Z_Construct_UScriptStruct_FLoadLevelData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FLoadLevelData>()
{
	return FLoadLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadLevelData(FLoadLevelData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("LoadLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFLoadLevelData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFLoadLevelData()
	{
		UScriptStruct::DeferCppStructOps<FLoadLevelData>(FName(TEXT("LoadLevelData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFLoadLevelData;
	struct Z_Construct_UScriptStruct_FLoadLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Level_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Level_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Open_Level_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Open_Level_Name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Level_Name_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Level_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadLevelData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|LoadLevel" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type = { "Level_Type", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadLevelData, Level_Type), Z_Construct_UEnum_MlineCorePlugin_ELevelLoadTypeEunm, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Open_Level_Name_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|LoadLevel" },
		{ "EditCondition", "Level_Type == ELevelLoadTypeEunm::OpenLevel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Open_Level_Name = { "Open_Level_Name", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadLevelData, Open_Level_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Open_Level_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Open_Level_Name_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name_Inner = { "Level_Name", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|LoadLevel" },
		{ "EditCondition", "Level_Type != ELevelLoadTypeEunm::OpenLevel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name = { "Level_Name", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadLevelData, Level_Name), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Open_Level_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadLevelData_Statics::NewProp_Level_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FScenarioEventDataBase,
		&NewStructOps,
		"LoadLevelData",
		sizeof(FLoadLevelData),
		alignof(FLoadLevelData),
		Z_Construct_UScriptStruct_FLoadLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadLevelData"), sizeof(FLoadLevelData), Get_Z_Construct_UScriptStruct_FLoadLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadLevelData_Hash() { return 2737090159U; }

static_assert(std::is_polymorphic<FInteractionData>() == std::is_polymorphic<FScenarioEventDataBase>(), "USTRUCT FInteractionData cannot be polymorphic unless super FScenarioEventDataBase is polymorphic");

class UScriptStruct* FInteractionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("InteractionData"), sizeof(FInteractionData), Get_Z_Construct_UScriptStruct_FInteractionData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FInteractionData>()
{
	return FInteractionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionData(FInteractionData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("InteractionData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFInteractionData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFInteractionData()
	{
		UScriptStruct::DeferCppStructOps<FInteractionData>(FName(TEXT("InteractionData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFInteractionData;
	struct Z_Construct_UScriptStruct_FInteractionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IntaractionActor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntaractionActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntaractionActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Interaction_Count_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_Count_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interaction_Count_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_Count_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_End_Count_Interaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_Array_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Interaction_Array_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor_Inner = { "IntaractionActor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMlineScenarioActorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Interaction" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor = { "IntaractionActor", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, IntaractionActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Interaction" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type = { "Interaction_Count_Type", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, Interaction_Count_Type), Z_Construct_UEnum_MlineCorePlugin_EInteractionCountTypeEunm, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_End_Count_Interaction_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Interaction" },
		{ "EditCondition", "Interaction_Count_Type == EInteractionCountTypeEunm::Count_Interaction" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_End_Count_Interaction = { "End_Count_Interaction", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, End_Count_Interaction), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_End_Count_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_End_Count_Interaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Array_Num_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Interaction" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Array_Num = { "Interaction_Array_Num", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, Interaction_Array_Num), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Array_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Array_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Interaction" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_IntaractionActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Count_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_End_Count_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Interaction_Array_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FScenarioEventDataBase,
		&NewStructOps,
		"InteractionData",
		sizeof(FInteractionData),
		alignof(FInteractionData),
		Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionData"), sizeof(FInteractionData), Get_Z_Construct_UScriptStruct_FInteractionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash() { return 3490971767U; }

static_assert(std::is_polymorphic<FFadeData>() == std::is_polymorphic<FScenarioEventDataBase>(), "USTRUCT FFadeData cannot be polymorphic unless super FScenarioEventDataBase is polymorphic");

class UScriptStruct* FFadeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FFadeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFadeData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("FadeData"), sizeof(FFadeData), Get_Z_Construct_UScriptStruct_FFadeData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FFadeData>()
{
	return FFadeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFadeData(FFadeData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("FadeData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFFadeData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFFadeData()
	{
		UScriptStruct::DeferCppStructOps<FFadeData>(FName(TEXT("FadeData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFFadeData;
	struct Z_Construct_UScriptStruct_FFadeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fade_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fade_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Fade_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fade_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fade_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fade_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fade_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFadeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFadeData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Fade" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type = { "Fade_Type", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeData, Fade_Type), Z_Construct_UEnum_MlineCorePlugin_EFadeTypeEunm, METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Time_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Fade" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Time = { "Fade_Time", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeData, Fade_Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Color_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Fade" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Color = { "Fade_Color", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFadeData, Fade_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFadeData_Statics::NewProp_Fade_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFadeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FScenarioEventDataBase,
		&NewStructOps,
		"FadeData",
		sizeof(FFadeData),
		alignof(FFadeData),
		Z_Construct_UScriptStruct_FFadeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFadeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFadeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFadeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFadeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FadeData"), sizeof(FFadeData), Get_Z_Construct_UScriptStruct_FFadeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFadeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFadeData_Hash() { return 2152271224U; }

static_assert(std::is_polymorphic<FMoveData>() == std::is_polymorphic<FScenarioEventDataBase>(), "USTRUCT FMoveData cannot be polymorphic unless super FScenarioEventDataBase is polymorphic");

class UScriptStruct* FMoveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMoveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MoveData"), sizeof(FMoveData), Get_Z_Construct_UScriptStruct_FMoveData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMoveData>()
{
	return FMoveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoveData(FMoveData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MoveData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMoveData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMoveData()
	{
		UScriptStruct::DeferCppStructOps<FMoveData>(FName(TEXT("MoveData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMoveData;
	struct Z_Construct_UScriptStruct_FMoveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Move_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFadeTeleport_MetaData[];
#endif
		static void NewProp_bIsFadeTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFadeTeleport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Teleport_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Teleport_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPawnSplineRotator_MetaData[];
#endif
		static void NewProp_bIsPawnSplineRotator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPawnSplineRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target = { "Move_Target", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Move_Target), Z_Construct_UEnum_MlineCorePlugin_EMoveTargetEunm, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Actor_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "EditCondition", "Move_Target != EMoveTargetEunm::Player" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Actor = { "Move_Actor", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Move_Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Actor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type = { "Move_Type", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Move_Type), Z_Construct_UEnum_MlineCorePlugin_EMoveTypeEunm, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "EditCondition", "Move_Type == EMoveTypeEunm::Teleport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport_SetBit(void* Obj)
	{
		((FMoveData*)Obj)->bIsFadeTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport = { "bIsFadeTeleport", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMoveData), &Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Teleport_Point_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "EditCondition", "Move_Type == EMoveTypeEunm::Teleport" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Teleport_Point = { "Teleport_Point", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Teleport_Point), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Teleport_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Teleport_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Spline_Actor_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "EditCondition", "Move_Type == EMoveTypeEunm::SplineMove" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Spline_Actor = { "Spline_Actor", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Spline_Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Spline_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Spline_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_SplineTime_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "EditCondition", "Move_Type == EMoveTypeEunm::SplineMove" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_SplineTime = { "SplineTime", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, SplineTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_SplineTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_SplineTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Move" },
		{ "EditCondition", "Move_Type == EMoveTypeEunm::SplineMove" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator_SetBit(void* Obj)
	{
		((FMoveData*)Obj)->bIsPawnSplineRotator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator = { "bIsPawnSplineRotator", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMoveData), &Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Move_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsFadeTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Teleport_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Spline_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_SplineTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_bIsPawnSplineRotator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FScenarioEventDataBase,
		&NewStructOps,
		"MoveData",
		sizeof(FMoveData),
		alignof(FMoveData),
		Z_Construct_UScriptStruct_FMoveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoveData"), sizeof(FMoveData), Get_Z_Construct_UScriptStruct_FMoveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoveData_Hash() { return 163776422U; }

static_assert(std::is_polymorphic<FNarrationData>() == std::is_polymorphic<FScenarioEventDataBase>(), "USTRUCT FNarrationData cannot be polymorphic unless super FScenarioEventDataBase is polymorphic");

class UScriptStruct* FNarrationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FNarrationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrationData, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("NarrationData"), sizeof(FNarrationData), Get_Z_Construct_UScriptStruct_FNarrationData_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FNarrationData>()
{
	return FNarrationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNarrationData(FNarrationData::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("NarrationData"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFNarrationData
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFNarrationData()
	{
		UScriptStruct::DeferCppStructOps<FNarrationData>(FName(TEXT("NarrationData")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFNarrationData;
	struct Z_Construct_UScriptStruct_FNarrationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Narration_ID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Narration_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Narration_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNarrationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrationData>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID_Inner = { "Narration_ID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID_MetaData[] = {
		{ "Category", "MlineScenarioEvent|Scene|Step|Narration" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID = { "Narration_ID", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNarrationData, Narration_ID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrationData_Statics::NewProp_Narration_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FScenarioEventDataBase,
		&NewStructOps,
		"NarrationData",
		sizeof(FNarrationData),
		alignof(FNarrationData),
		Z_Construct_UScriptStruct_FNarrationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNarrationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNarrationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNarrationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NarrationData"), sizeof(FNarrationData), Get_Z_Construct_UScriptStruct_FNarrationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNarrationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNarrationData_Hash() { return 4068454717U; }
class UScriptStruct* FScenarioEventDataBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FScenarioEventDataBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScenarioEventDataBase, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("ScenarioEventDataBase"), sizeof(FScenarioEventDataBase), Get_Z_Construct_UScriptStruct_FScenarioEventDataBase_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FScenarioEventDataBase>()
{
	return FScenarioEventDataBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScenarioEventDataBase(FScenarioEventDataBase::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("ScenarioEventDataBase"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFScenarioEventDataBase
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFScenarioEventDataBase()
	{
		UScriptStruct::DeferCppStructOps<FScenarioEventDataBase>(FName(TEXT("ScenarioEventDataBase")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFScenarioEventDataBase;
	struct Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipEndCheck_MetaData[];
#endif
		static void NewProp_bSkipEndCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEndCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScenarioEventDataBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck_MetaData[] = {
		{ "Category", "MlineScenarioEvent" },
		{ "ModuleRelativePath", "Public/MlineScenarioTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck_SetBit(void* Obj)
	{
		((FScenarioEventDataBase*)Obj)->bSkipEndCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck = { "bSkipEndCheck", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScenarioEventDataBase), &Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::NewProp_bSkipEndCheck,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		nullptr,
		&NewStructOps,
		"ScenarioEventDataBase",
		sizeof(FScenarioEventDataBase),
		alignof(FScenarioEventDataBase),
		Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScenarioEventDataBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScenarioEventDataBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScenarioEventDataBase"), sizeof(FScenarioEventDataBase), Get_Z_Construct_UScriptStruct_FScenarioEventDataBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScenarioEventDataBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScenarioEventDataBase_Hash() { return 1922477627U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
