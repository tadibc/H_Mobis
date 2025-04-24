// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineEventTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineEventTypes() {}
// Cross Module References
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EEventFlag();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EAnimationEndType();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EEffectType();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EActorEventType();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineCustomEvent();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventNiagaraEffect();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventParticleEffect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMlineEventSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
// End Cross Module References
	static UEnum* EEventFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EEventFlag, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EEventFlag"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EEventFlag>()
	{
		return EEventFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEventFlag(EEventFlag_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EEventFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EEventFlag_Hash() { return 468444664U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EEventFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEventFlag"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EEventFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEventFlag::None", (int64)EEventFlag::None },
				{ "EEventFlag::Audio", (int64)EEventFlag::Audio },
				{ "EEventFlag::ParticleEffect", (int64)EEventFlag::ParticleEffect },
				{ "EEventFlag::NiagaraEffect", (int64)EEventFlag::NiagaraEffect },
				{ "EEventFlag::Animaition", (int64)EEventFlag::Animaition },
				{ "EEventFlag::UI", (int64)EEventFlag::UI },
				{ "EEventFlag::CustomEvent", (int64)EEventFlag::CustomEvent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animaition.Name", "EEventFlag::Animaition" },
				{ "Audio.Name", "EEventFlag::Audio" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "CustomEvent.Name", "EEventFlag::CustomEvent" },
				{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
				{ "NiagaraEffect.Name", "EEventFlag::NiagaraEffect" },
				{ "None.Name", "EEventFlag::None" },
				{ "ParticleEffect.Name", "EEventFlag::ParticleEffect" },
				{ "UI.Name", "EEventFlag::UI" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EEventFlag",
				"EEventFlag",
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
	static UEnum* EAnimationEndType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EAnimationEndType, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EAnimationEndType"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EAnimationEndType>()
	{
		return EAnimationEndType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimationEndType(EAnimationEndType_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EAnimationEndType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EAnimationEndType_Hash() { return 1095623413U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EAnimationEndType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimationEndType"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EAnimationEndType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimationEndType::Keep", (int64)EAnimationEndType::Keep },
				{ "EAnimationEndType::Return", (int64)EAnimationEndType::Return },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Keep.DisplayName", "Keep" },
				{ "Keep.Name", "EAnimationEndType::Keep" },
				{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
				{ "Return.DisplayName", "Return" },
				{ "Return.Name", "EAnimationEndType::Return" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EAnimationEndType",
				"EAnimationEndType",
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
	static UEnum* EEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EEffectType, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EEffectType"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EEffectType>()
	{
		return EEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectType(EEffectType_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EEffectType_Hash() { return 666634986U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectType"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectType::ParticleSystem", (int64)EEffectType::ParticleSystem },
				{ "EEffectType::NiagaraSystem", (int64)EEffectType::NiagaraSystem },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
				{ "NiagaraSystem.DisplayName", "NiagaraSystem" },
				{ "NiagaraSystem.Name", "EEffectType::NiagaraSystem" },
				{ "ParticleSystem.DisplayName", "ParticleSystem" },
				{ "ParticleSystem.Name", "EEffectType::ParticleSystem" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EEffectType",
				"EEffectType",
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
	static UEnum* EActorEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EActorEventType, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EActorEventType"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EActorEventType>()
	{
		return EActorEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorEventType(EActorEventType_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EActorEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EActorEventType_Hash() { return 3629596913U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EActorEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorEventType"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EActorEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActorEventType::None", (int64)EActorEventType::None },
				{ "EActorEventType::Audio", (int64)EActorEventType::Audio },
				{ "EActorEventType::Effect", (int64)EActorEventType::Effect },
				{ "EActorEventType::Animaition", (int64)EActorEventType::Animaition },
				{ "EActorEventType::UI", (int64)EActorEventType::UI },
				{ "EActorEventType::CustomEvent", (int64)EActorEventType::CustomEvent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animaition.DisplayName", "Animaition" },
				{ "Animaition.Name", "EActorEventType::Animaition" },
				{ "Audio.DisplayName", "Audio" },
				{ "Audio.Name", "EActorEventType::Audio" },
				{ "BlueprintType", "true" },
				{ "CustomEvent.DisplayName", "CustomEvent" },
				{ "CustomEvent.Name", "EActorEventType::CustomEvent" },
				{ "Effect.DisplayName", "Effect" },
				{ "Effect.Name", "EActorEventType::Effect" },
				{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
				{ "None.Name", "EActorEventType::None" },
				{ "UI.DisplayName", "UI" },
				{ "UI.Name", "EActorEventType::UI" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EActorEventType",
				"EActorEventType",
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

static_assert(std::is_polymorphic<FMlineCustomEvent>() == std::is_polymorphic<FMlineEventBase>(), "USTRUCT FMlineCustomEvent cannot be polymorphic unless super FMlineEventBase is polymorphic");

class UScriptStruct* FMlineCustomEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineCustomEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineCustomEvent, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineCustomEvent"), sizeof(FMlineCustomEvent), Get_Z_Construct_UScriptStruct_FMlineCustomEvent_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineCustomEvent>()
{
	return FMlineCustomEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineCustomEvent(FMlineCustomEvent::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineCustomEvent"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineCustomEvent
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineCustomEvent()
	{
		UScriptStruct::DeferCppStructOps<FMlineCustomEvent>(FName(TEXT("MlineCustomEvent")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineCustomEvent;
	struct Z_Construct_UScriptStruct_FMlineCustomEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEventComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomEventComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEventActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomEventActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEventActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomEventActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEventActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomEventActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineCustomEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventComponent_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "MlineCustomEventComponent" },
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventComponent = { "CustomEventComponent", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineCustomEvent, CustomEventComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActor_MetaData[] = {
		{ "Category", "MlineEvent|Custom" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActor = { "CustomEventActor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineCustomEvent, CustomEventActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorName_MetaData[] = {
		{ "Category", "MlineEvent|Custom" },
		{ "Editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorName = { "CustomEventActorName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineCustomEvent, CustomEventActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorClass_MetaData[] = {
		{ "Category", "MlineEvent|Custom" },
		{ "Editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorClass = { "CustomEventActorClass", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineCustomEvent, CustomEventActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "MlineEvent|Custom" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineCustomEvent, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_CustomEventActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::NewProp_FunctionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FMlineEventBase,
		&NewStructOps,
		"MlineCustomEvent",
		sizeof(FMlineCustomEvent),
		alignof(FMlineCustomEvent),
		Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineCustomEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineCustomEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineCustomEvent"), sizeof(FMlineCustomEvent), Get_Z_Construct_UScriptStruct_FMlineCustomEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineCustomEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineCustomEvent_Hash() { return 762770038U; }

static_assert(std::is_polymorphic<FMlineEventUI>() == std::is_polymorphic<FMlineEventBase>(), "USTRUCT FMlineEventUI cannot be polymorphic unless super FMlineEventBase is polymorphic");

class UScriptStruct* FMlineEventUI::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineEventUI_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineEventUI, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineEventUI"), sizeof(FMlineEventUI), Get_Z_Construct_UScriptStruct_FMlineEventUI_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineEventUI>()
{
	return FMlineEventUI::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineEventUI(FMlineEventUI::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineEventUI"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventUI
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventUI()
	{
		UScriptStruct::DeferCppStructOps<FMlineEventUI>(FName(TEXT("MlineEventUI")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventUI;
	struct Z_Construct_UScriptStruct_FMlineEventUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_widgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttachedActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachedActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDestroy_MetaData[];
#endif
		static void NewProp_AutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestroyTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineEventUI>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_widgetComponent_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "WidgetComponent" },
		{ "Category", "MlineEvent|UI" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_widgetComponent = { "widgetComponent", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventUI, widgetComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_widgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_widgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActor_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventUI, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorName_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "Editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorName = { "AttachedActorName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventUI, AttachedActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorClass_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "Editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorClass = { "AttachedActorClass", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventUI, AttachedActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventUI, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((FMlineEventUI*)Obj)->AutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMlineEventUI), &Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_DestroyTime_MetaData[] = {
		{ "Category", "MlineEvent|UI" },
		{ "Editcondition", "AutoDestroy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_DestroyTime = { "DestroyTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventUI, DestroyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_DestroyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_DestroyTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineEventUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_widgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AttachedActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_AutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventUI_Statics::NewProp_DestroyTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineEventUI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FMlineEventBase,
		&NewStructOps,
		"MlineEventUI",
		sizeof(FMlineEventUI),
		alignof(FMlineEventUI),
		Z_Construct_UScriptStruct_FMlineEventUI_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventUI_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventUI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineEventUI()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineEventUI_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineEventUI"), sizeof(FMlineEventUI), Get_Z_Construct_UScriptStruct_FMlineEventUI_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineEventUI_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineEventUI_Hash() { return 235915576U; }

static_assert(std::is_polymorphic<FMlineEventAnimation>() == std::is_polymorphic<FMlineEventBase>(), "USTRUCT FMlineEventAnimation cannot be polymorphic unless super FMlineEventBase is polymorphic");

class UScriptStruct* FMlineEventAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineEventAnimation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineEventAnimation, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineEventAnimation"), sizeof(FMlineEventAnimation), Get_Z_Construct_UScriptStruct_FMlineEventAnimation_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineEventAnimation>()
{
	return FMlineEventAnimation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineEventAnimation(FMlineEventAnimation::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineEventAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventAnimation
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventAnimation()
	{
		UScriptStruct::DeferCppStructOps<FMlineEventAnimation>(FName(TEXT("MlineEventAnimation")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventAnimation;
	struct Z_Construct_UScriptStruct_FMlineEventAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTargerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationTargerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTargerActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimationTargerActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTargerActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimationTargerActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[];
#endif
		static void NewProp_Looping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Looping;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationEndType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationEndType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationEndType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineEventAnimation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "MeshComponent" },
		{ "Category", "MlineEvent|Animation" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventAnimation, MeshComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActor_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActor = { "AnimationTargerActor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventAnimation, AnimationTargerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorName_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "Editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorName = { "AnimationTargerActorName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventAnimation, AnimationTargerActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorClass_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "Editcondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorClass = { "AnimationTargerActorClass", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventAnimation, AnimationTargerActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventAnimation, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((FMlineEventAnimation*)Obj)->Looping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMlineEventAnimation), &Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType_MetaData[] = {
		{ "Category", "MlineEvent|Animation" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType = { "AnimationEndType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventAnimation, AnimationEndType), Z_Construct_UEnum_MlineCorePlugin_EAnimationEndType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationTargerActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_Looping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::NewProp_AnimationEndType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FMlineEventBase,
		&NewStructOps,
		"MlineEventAnimation",
		sizeof(FMlineEventAnimation),
		alignof(FMlineEventAnimation),
		Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineEventAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineEventAnimation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineEventAnimation"), sizeof(FMlineEventAnimation), Get_Z_Construct_UScriptStruct_FMlineEventAnimation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineEventAnimation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineEventAnimation_Hash() { return 3353284999U; }

static_assert(std::is_polymorphic<FMlineEventNiagaraEffect>() == std::is_polymorphic<FMlineEventBase>(), "USTRUCT FMlineEventNiagaraEffect cannot be polymorphic unless super FMlineEventBase is polymorphic");

class UScriptStruct* FMlineEventNiagaraEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineEventNiagaraEffect"), sizeof(FMlineEventNiagaraEffect), Get_Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineEventNiagaraEffect>()
{
	return FMlineEventNiagaraEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineEventNiagaraEffect(FMlineEventNiagaraEffect::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineEventNiagaraEffect"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventNiagaraEffect
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventNiagaraEffect()
	{
		UScriptStruct::DeferCppStructOps<FMlineEventNiagaraEffect>(FName(TEXT("MlineEventNiagaraEffect")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventNiagaraEffect;
	struct Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NiagaraSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineEventNiagaraEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystemComponent_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "NiagaraComponent" },
		{ "Category", "MlineEvent|NiagaraEffect" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystemComponent = { "NiagaraSystemComponent", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventNiagaraEffect, NiagaraSystemComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "MlineEvent|NiagaraEffect" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventNiagaraEffect, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::NewProp_NiagaraSystem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FMlineEventBase,
		&NewStructOps,
		"MlineEventNiagaraEffect",
		sizeof(FMlineEventNiagaraEffect),
		alignof(FMlineEventNiagaraEffect),
		Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineEventNiagaraEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineEventNiagaraEffect"), sizeof(FMlineEventNiagaraEffect), Get_Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineEventNiagaraEffect_Hash() { return 1097014248U; }

static_assert(std::is_polymorphic<FMlineEventParticleEffect>() == std::is_polymorphic<FMlineEventBase>(), "USTRUCT FMlineEventParticleEffect cannot be polymorphic unless super FMlineEventBase is polymorphic");

class UScriptStruct* FMlineEventParticleEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineEventParticleEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineEventParticleEffect, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineEventParticleEffect"), sizeof(FMlineEventParticleEffect), Get_Z_Construct_UScriptStruct_FMlineEventParticleEffect_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineEventParticleEffect>()
{
	return FMlineEventParticleEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineEventParticleEffect(FMlineEventParticleEffect::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineEventParticleEffect"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventParticleEffect
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventParticleEffect()
	{
		UScriptStruct::DeferCppStructOps<FMlineEventParticleEffect>(FName(TEXT("MlineEventParticleEffect")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventParticleEffect;
	struct Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineEventParticleEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "ParticleSystemComponent" },
		{ "Category", "MlineEvent|ParticleEffect" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventParticleEffect, ParticleSystemComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "MlineEvent|ParticleEffect" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventParticleEffect, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::NewProp_ParticleSystem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FMlineEventBase,
		&NewStructOps,
		"MlineEventParticleEffect",
		sizeof(FMlineEventParticleEffect),
		alignof(FMlineEventParticleEffect),
		Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineEventParticleEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineEventParticleEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineEventParticleEffect"), sizeof(FMlineEventParticleEffect), Get_Z_Construct_UScriptStruct_FMlineEventParticleEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineEventParticleEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineEventParticleEffect_Hash() { return 2052689255U; }

static_assert(std::is_polymorphic<FMlineEventSound>() == std::is_polymorphic<FMlineEventBase>(), "USTRUCT FMlineEventSound cannot be polymorphic unless super FMlineEventBase is polymorphic");

class UScriptStruct* FMlineEventSound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineEventSound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineEventSound, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineEventSound"), sizeof(FMlineEventSound), Get_Z_Construct_UScriptStruct_FMlineEventSound_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineEventSound>()
{
	return FMlineEventSound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineEventSound(FMlineEventSound::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineEventSound"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventSound
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventSound()
	{
		UScriptStruct::DeferCppStructOps<FMlineEventSound>(FName(TEXT("MlineEventSound")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventSound;
	struct Z_Construct_UScriptStruct_FMlineEventSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[];
#endif
		static void NewProp_Looping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Looping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineEventSound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "AudioComponent" },
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventSound, AudioComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventSound, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_SoundAttenuation_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_SoundAttenuation = { "SoundAttenuation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventSound, SoundAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_SoundAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_SoundAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventSound, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventSound, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((FMlineEventSound*)Obj)->Looping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMlineEventSound), &Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "MlineEvent|Sound" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventSound, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineEventSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_SoundAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Looping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventSound_Statics::NewProp_Delay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineEventSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		Z_Construct_UScriptStruct_FMlineEventBase,
		&NewStructOps,
		"MlineEventSound",
		sizeof(FMlineEventSound),
		alignof(FMlineEventSound),
		Z_Construct_UScriptStruct_FMlineEventSound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventSound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineEventSound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineEventSound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineEventSound"), sizeof(FMlineEventSound), Get_Z_Construct_UScriptStruct_FMlineEventSound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineEventSound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineEventSound_Hash() { return 1590373070U; }
class UScriptStruct* FMlineEventBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMlineEventBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMlineEventBase, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("MlineEventBase"), sizeof(FMlineEventBase), Get_Z_Construct_UScriptStruct_FMlineEventBase_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FMlineEventBase>()
{
	return FMlineEventBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMlineEventBase(FMlineEventBase::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("MlineEventBase"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventBase
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventBase()
	{
		UScriptStruct::DeferCppStructOps<FMlineEventBase>(FName(TEXT("MlineEventBase")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFMlineEventBase;
	struct Z_Construct_UScriptStruct_FMlineEventBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMlineEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMlineEventBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMlineEventBase_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "TriggerSystem|Base" },
		{ "ModuleRelativePath", "Public/MlineEventTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMlineEventBase_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMlineEventBase, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventBase_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventBase_Statics::NewProp_StartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMlineEventBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMlineEventBase_Statics::NewProp_StartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMlineEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		nullptr,
		&NewStructOps,
		"MlineEventBase",
		sizeof(FMlineEventBase),
		alignof(FMlineEventBase),
		Z_Construct_UScriptStruct_FMlineEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMlineEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMlineEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMlineEventBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMlineEventBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MlineEventBase"), sizeof(FMlineEventBase), Get_Z_Construct_UScriptStruct_FMlineEventBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMlineEventBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMlineEventBase_Hash() { return 502175177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
