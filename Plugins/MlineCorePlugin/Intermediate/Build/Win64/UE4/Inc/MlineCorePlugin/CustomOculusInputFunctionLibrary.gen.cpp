// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/CustomOculusInputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomOculusInputFunctionLibrary() {}
// Cross Module References
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_FingerRequirement();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag();
	MLINECOREPLUGIN_API UEnum* Z_Construct_UEnum_MlineCorePlugin_EGrabFlag();
	MLINECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGrabbingRule();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibrary_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibrary();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UOculusInputFunctionLibrary();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType();
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
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_FingerUnselectMode_Hash() { return 679761610U; }
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
				{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
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
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_FingerRequirement_Hash() { return 4204832777U; }
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
				{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
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
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EGrabTypeFlag_Hash() { return 2717302005U; }
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
				{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
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
	uint32 Get_Z_Construct_UEnum_MlineCorePlugin_EGrabFlag_Hash() { return 980699111U; }
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
				{ "Comment", "/**\n * \n */" },
				{ "Index.Comment", "/**\n * \n */" },
				{ "Index.Name", "EGrabFlag::Index" },
				{ "Middle.Comment", "/**\n * \n */" },
				{ "Middle.Name", "EGrabFlag::Middle" },
				{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
				{ "None.Comment", "/**\n * \n */" },
				{ "None.Name", "EGrabFlag::None" },
				{ "Pinky.Comment", "/**\n * \n */" },
				{ "Pinky.Name", "EGrabFlag::Pinky" },
				{ "Ring.Comment", "/**\n * \n */" },
				{ "Ring.Name", "EGrabFlag::Ring" },
				{ "Thumb.Comment", "/**\n * \n */" },
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
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
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
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement = { "_thumbRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _thumbRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__thumbRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement = { "_indexRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _indexRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__indexRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement = { "_middleRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _middleRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__middleRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement = { "_ringRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _ringRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__ringRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement = { "_pinkyRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabbingRule, _pinkyRequirement), Z_Construct_UEnum_MlineCorePlugin_FingerRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__pinkyRequirement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabbingRule_Statics::NewProp__unselectMode_MetaData[] = {
		{ "Category", "FingerRequirement" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FGrabbingRule_Hash() { return 395659421U; }
	DEFINE_FUNCTION(UCustomOculusInputFunctionLibrary::execGetFullGrabRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGrabbingRule*)Z_Param__Result=UCustomOculusInputFunctionLibrary::GetFullGrabRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomOculusInputFunctionLibrary::execGetDefaultPinchRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGrabbingRule*)Z_Param__Result=UCustomOculusInputFunctionLibrary::GetDefaultPinchRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomOculusInputFunctionLibrary::execGetDefaultPalmRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGrabbingRule*)Z_Param__Result=UCustomOculusInputFunctionLibrary::GetDefaultPalmRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomOculusInputFunctionLibrary::execGetGrabStrength)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UCustomOculusInputFunctionLibrary::GetGrabStrength(EOculusHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	void UCustomOculusInputFunctionLibrary::StaticRegisterNativesUCustomOculusInputFunctionLibrary()
	{
		UClass* Class = UCustomOculusInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultPalmRule", &UCustomOculusInputFunctionLibrary::execGetDefaultPalmRule },
			{ "GetDefaultPinchRule", &UCustomOculusInputFunctionLibrary::execGetDefaultPinchRule },
			{ "GetFullGrabRule", &UCustomOculusInputFunctionLibrary::execGetFullGrabRule },
			{ "GetGrabStrength", &UCustomOculusInputFunctionLibrary::execGetGrabStrength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics
	{
		struct CustomOculusInputFunctionLibrary_eventGetDefaultPalmRule_Parms
		{
			FGrabbingRule ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibrary_eventGetDefaultPalmRule_Parms, ReturnValue), Z_Construct_UScriptStruct_FGrabbingRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomOculusInputFunctionLibrary, nullptr, "GetDefaultPalmRule", nullptr, nullptr, sizeof(CustomOculusInputFunctionLibrary_eventGetDefaultPalmRule_Parms), Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics
	{
		struct CustomOculusInputFunctionLibrary_eventGetDefaultPinchRule_Parms
		{
			FGrabbingRule ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibrary_eventGetDefaultPinchRule_Parms, ReturnValue), Z_Construct_UScriptStruct_FGrabbingRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomOculusInputFunctionLibrary, nullptr, "GetDefaultPinchRule", nullptr, nullptr, sizeof(CustomOculusInputFunctionLibrary_eventGetDefaultPinchRule_Parms), Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics
	{
		struct CustomOculusInputFunctionLibrary_eventGetFullGrabRule_Parms
		{
			FGrabbingRule ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibrary_eventGetFullGrabRule_Parms, ReturnValue), Z_Construct_UScriptStruct_FGrabbingRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomOculusInputFunctionLibrary, nullptr, "GetFullGrabRule", nullptr, nullptr, sizeof(CustomOculusInputFunctionLibrary_eventGetFullGrabRule_Parms), Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics
	{
		struct CustomOculusInputFunctionLibrary_eventGetGrabStrength_Parms
		{
			EOculusHandType DeviceHand;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibrary_eventGetGrabStrength_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibrary_eventGetGrabStrength_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomOculusInputFunctionLibrary, nullptr, "GetGrabStrength", nullptr, nullptr, sizeof(CustomOculusInputFunctionLibrary_eventGetGrabStrength_Parms), Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibrary_NoRegister()
	{
		return UCustomOculusInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusInputFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPalmRule, "GetDefaultPalmRule" }, // 1462701065
		{ &Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetDefaultPinchRule, "GetDefaultPinchRule" }, // 1493325929
		{ &Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetFullGrabRule, "GetFullGrabRule" }, // 3621385880
		{ &Z_Construct_UFunction_UCustomOculusInputFunctionLibrary_GetGrabStrength, "GetGrabStrength" }, // 104028688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomOculusInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomOculusInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::ClassParams = {
		&UCustomOculusInputFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomOculusInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomOculusInputFunctionLibrary, 2442128534);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<UCustomOculusInputFunctionLibrary>()
	{
		return UCustomOculusInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomOculusInputFunctionLibrary(Z_Construct_UClass_UCustomOculusInputFunctionLibrary, &UCustomOculusInputFunctionLibrary::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("UCustomOculusInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomOculusInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
