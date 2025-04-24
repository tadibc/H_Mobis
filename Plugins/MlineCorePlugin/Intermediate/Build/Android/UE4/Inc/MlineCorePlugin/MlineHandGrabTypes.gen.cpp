// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineHandGrabTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineHandGrabTypes() {}
// Cross Module References
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_FingerRequirement();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EGrabFlag();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGrabbingRule();
// End Cross Module References
	static UEnum* FingerUnselectMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("FingerUnselectMode"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<FingerUnselectMode>()
	{
		return FingerUnselectMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FingerUnselectMode(FingerUnselectMode_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("FingerUnselectMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode_Hash() { return 3794649619U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FingerUnselectMode"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FingerUnselectMode::AllReleased", (int64)FingerUnselectMode::AllReleased },
				{ "FingerUnselectMode::AnyReleased", (int64)FingerUnselectMode::AnyReleased },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllReleased.Name", "FingerUnselectMode::AllReleased" },
				{ "AnyReleased.Name", "FingerUnselectMode::AnyReleased" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"FingerUnselectMode",
				"FingerUnselectMode",
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
	static UEnum* FingerRequirement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("FingerRequirement"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<FingerRequirement>()
	{
		return FingerRequirement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FingerRequirement(FingerRequirement_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("FingerRequirement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_FingerRequirement_Hash() { return 2254864357U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_FingerRequirement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FingerRequirement"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_FingerRequirement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FingerRequirement::Ignored", (int64)FingerRequirement::Ignored },
				{ "FingerRequirement::Optional", (int64)FingerRequirement::Optional },
				{ "FingerRequirement::Required", (int64)FingerRequirement::Required },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Ignored.Name", "FingerRequirement::Ignored" },
				{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
				{ "Optional.Name", "FingerRequirement::Optional" },
				{ "Required.Name", "FingerRequirement::Required" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"FingerRequirement",
				"FingerRequirement",
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
	static UEnum* EGrabTypeFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EGrabTypeFlag"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EGrabTypeFlag>()
	{
		return EGrabTypeFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrabTypeFlag(EGrabTypeFlag_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EGrabTypeFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag_Hash() { return 1035372612U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrabTypeFlag"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrabTypeFlag::None", (int64)EGrabTypeFlag::None },
				{ "EGrabTypeFlag::Pinch", (int64)EGrabTypeFlag::Pinch },
				{ "EGrabTypeFlag::Palm", (int64)EGrabTypeFlag::Palm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
				{ "None.Name", "EGrabTypeFlag::None" },
				{ "Palm.Name", "EGrabTypeFlag::Palm" },
				{ "Pinch.Name", "EGrabTypeFlag::Pinch" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EGrabTypeFlag",
				"EGrabTypeFlag",
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
	static UEnum* EGrabFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MlineCorePlugin_EGrabFlag, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("EGrabFlag"));
		}
		return Singleton;
	}
	template<> MLINECOREPLUGIN_API UEnum* StaticEnum<EGrabFlag>()
	{
		return EGrabFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrabFlag(EGrabFlag_StaticEnum, TEXT("/Script/MlineCorePlugin"), TEXT("EGrabFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EGrabFlag_Hash() { return 105412258U; }
	UEnum* Z_Construct_UEnum_MlineCorePlugin_EGrabFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrabFlag"), 0, Get_Z_Construct_UEnum_MlineCorePlugin_EGrabFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrabFlag::None", (int64)EGrabFlag::None },
				{ "EGrabFlag::Thumb", (int64)EGrabFlag::Thumb },
				{ "EGrabFlag::Index", (int64)EGrabFlag::Index },
				{ "EGrabFlag::Middle", (int64)EGrabFlag::Middle },
				{ "EGrabFlag::Ring", (int64)EGrabFlag::Ring },
				{ "EGrabFlag::Pinky", (int64)EGrabFlag::Pinky },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Index.Name", "EGrabFlag::Index" },
				{ "Middle.Name", "EGrabFlag::Middle" },
				{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
				{ "None.Name", "EGrabFlag::None" },
				{ "Pinky.Name", "EGrabFlag::Pinky" },
				{ "Ring.Name", "EGrabFlag::Ring" },
				{ "Thumb.Name", "EGrabFlag::Thumb" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MlineCorePlugin,
				nullptr,
				"EGrabFlag",
				"EGrabFlag",
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
class UScriptStruct* FGrabbingRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGrabbingRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrabbingRule, Z_Construct_UPackage__Script_MlineCorePlugin(), TEXT("GrabbingRule"), sizeof(FGrabbingRule), Get_Z_Construct_UScriptStruct_FGrabbingRule_Hash());
	}
	return Singleton;
}
template<> MLINECOREPLUGIN_API UScriptStruct* StaticStruct<FGrabbingRule>()
{
	return FGrabbingRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGrabbingRule(FGrabbingRule::StaticStruct, TEXT("/Script/MlineCorePlugin"), TEXT("GrabbingRule"), false, nullptr, nullptr);
static struct FScriptStruct_MlineCorePlugin_StaticRegisterNativesFGrabbingRule
{
	FScriptStruct_MlineCorePlugin_StaticRegisterNativesFGrabbingRule()
	{
		UScriptStruct::DeferCppStructOps<FGrabbingRule>(FName(TEXT("GrabbingRule")));
	}
} ScriptStruct_MlineCorePlugin_StaticRegisterNativesFGrabbingRule;
	struct Z_Construct_UScriptStruct_FGrabbingRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__thumbRequirement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__thumbRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__thumbRequirement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__indexRequirement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__indexRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__indexRequirement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__middleRequirement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__middleRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__middleRequirement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ringRequirement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ringRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ringRequirement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__pinkyRequirement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pinkyRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__pinkyRequirement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__unselectMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unselectMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__unselectMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrabbingRule>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement = { "_thumbRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _thumbRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement = { "_indexRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _indexRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement = { "_middleRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _middleRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement = { "_ringRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _ringRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement = { "_pinkyRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _pinkyRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/MlineHandGrabTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode = { "_unselectMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _unselectMode), Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrabbingRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
		nullptr,
		&NewStructOps,
		"GrabbingRule",
		sizeof(FGrabbingRule),
		alignof(FGrabbingRule),
		Z_Construct_UScriptStruct_FGrabbingRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrabbingRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGrabbingRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlineCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GrabbingRule"), sizeof(FGrabbingRule), Get_Z_Construct_UScriptStruct_FGrabbingRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGrabbingRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGrabbingRule_Hash() { return 713050278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
