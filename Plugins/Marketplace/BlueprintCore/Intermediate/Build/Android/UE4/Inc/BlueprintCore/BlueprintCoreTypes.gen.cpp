// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintCore/Public/BlueprintCoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCoreTypes() {}
// Cross Module References
	BLUEPRINTCORE_API UEnum* Z_Construct_UEnum_BlueprintCore_EBlueprintSecurity();
	UPackage* Z_Construct_UPackage__Script_BlueprintCore();
	BLUEPRINTCORE_API UClass* Z_Construct_UClass_UBlueprintCoreKey_NoRegister();
	BLUEPRINTCORE_API UClass* Z_Construct_UClass_UBlueprintCoreKey();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EBlueprintSecurity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintCore_EBlueprintSecurity, Z_Construct_UPackage__Script_BlueprintCore(), TEXT("EBlueprintSecurity"));
		}
		return Singleton;
	}
	template<> BLUEPRINTCORE_API UEnum* StaticEnum<EBlueprintSecurity>()
	{
		return EBlueprintSecurity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintSecurity(EBlueprintSecurity_StaticEnum, TEXT("/Script/BlueprintCore"), TEXT("EBlueprintSecurity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintCore_EBlueprintSecurity_Hash() { return 3095222331U; }
	UEnum* Z_Construct_UEnum_BlueprintCore_EBlueprintSecurity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintSecurity"), 0, Get_Z_Construct_UEnum_BlueprintCore_EBlueprintSecurity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintSecurity::Basic", (int64)EBlueprintSecurity::Basic },
				{ "EBlueprintSecurity::High", (int64)EBlueprintSecurity::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "EBlueprintSecurity::Basic" },
				{ "BlueprintType", "true" },
				{ "High.Name", "EBlueprintSecurity::High" },
				{ "ModuleRelativePath", "Public/BlueprintCoreTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintCore,
				nullptr,
				"EBlueprintSecurity",
				"EBlueprintSecurity",
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
	void UBlueprintCoreKey::StaticRegisterNativesUBlueprintCoreKey()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintCoreKey_NoRegister()
	{
		return UBlueprintCoreKey::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintCoreKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeyIsValid_MetaData[];
#endif
		static void NewProp_bKeyIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeyIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintCoreKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Key files are used to unlock/lock Blueprints\n// If this key is lost the Blueprints that are assigned to this key\n// will not be unlockable and editable.\n//\n// DO NOT LOOSE THIS KEY!\n// IT IS YOUR RESPONSIBILITY TO KEEP IT SAFE AND BACKED UP.\n" },
		{ "IncludePath", "BlueprintCoreTypes.h" },
		{ "ModuleRelativePath", "Public/BlueprintCoreTypes.h" },
		{ "ToolTip", "Key files are used to unlock/lock Blueprints\nIf this key is lost the Blueprints that are assigned to this key\nwill not be unlockable and editable.\n\nDO NOT LOOSE THIS KEY!\nIT IS YOUR RESPONSIBILITY TO KEEP IT SAFE AND BACKED UP." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// If this key file has a valid key\n" },
		{ "ModuleRelativePath", "Public/BlueprintCoreTypes.h" },
		{ "ToolTip", "If this key file has a valid key" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid_SetBit(void* Obj)
	{
		((UBlueprintCoreKey*)Obj)->bKeyIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid = { "bKeyIsValid", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintCoreKey), &Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_KeyGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_KeyGuid = { "KeyGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCoreKey, KeyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_KeyGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_KeyGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCoreKey, Flags), METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCoreKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_bKeyIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_KeyGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCoreKey_Statics::NewProp_Flags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintCoreKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCoreKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCoreKey_Statics::ClassParams = {
		&UBlueprintCoreKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintCoreKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreKey_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintCoreKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCoreKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintCoreKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintCoreKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintCoreKey, 3511001754);
	template<> BLUEPRINTCORE_API UClass* StaticClass<UBlueprintCoreKey>()
	{
		return UBlueprintCoreKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintCoreKey(Z_Construct_UClass_UBlueprintCoreKey, &UBlueprintCoreKey::StaticClass, TEXT("/Script/BlueprintCore"), TEXT("UBlueprintCoreKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCoreKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
