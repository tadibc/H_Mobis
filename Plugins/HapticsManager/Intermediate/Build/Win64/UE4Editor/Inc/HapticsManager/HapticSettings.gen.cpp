// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/HapticSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticSettings() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UHapticSettings_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_UHapticSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
// End Cross Module References
	void UHapticSettings::StaticRegisterNativesUHapticSettings()
	{
	}
	UClass* Z_Construct_UClass_UHapticSettings_NoRegister()
	{
		return UHapticSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHapticSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLaunch_MetaData[];
#endif
		static void NewProp_bShouldLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLaunch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Haptic Settings" },
		{ "IncludePath", "HapticSettings.h" },
		{ "ModuleRelativePath", "Public/HapticSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch_MetaData[] = {
		{ "Category", "Haptic" },
		{ "Comment", "// Variable to control if the Player should launch when starting the level, launching by default.\n// If true, bHaptics Player will launch when the game is run, if its installed.\n// If false, the user must launch the Player themselves.\n" },
		{ "ModuleRelativePath", "Public/HapticSettings.h" },
		{ "ToolTip", "Variable to control if the Player should launch when starting the level, launching by default.\nIf true, bHaptics Player will launch when the game is run, if its installed.\nIf false, the user must launch the Player themselves." },
	};
#endif
	void Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch_SetBit(void* Obj)
	{
		((UHapticSettings*)Obj)->bShouldLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch = { "bShouldLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHapticSettings), &Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticSettings_Statics::NewProp_bShouldLaunch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticSettings_Statics::ClassParams = {
		&UHapticSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHapticSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHapticSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticSettings, 4104814021);
	template<> HAPTICSMANAGER_API UClass* StaticClass<UHapticSettings>()
	{
		return UHapticSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticSettings(Z_Construct_UClass_UHapticSettings, &UHapticSettings::StaticClass, TEXT("/Script/HapticsManager"), TEXT("UHapticSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
