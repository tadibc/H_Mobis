// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineEventAudio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineEventAudio() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UMlineEventAudio_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UMlineEventAudio();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
// End Cross Module References
	void UMlineEventAudio::StaticRegisterNativesUMlineEventAudio()
	{
	}
	UClass* Z_Construct_UClass_UMlineEventAudio_NoRegister()
	{
		return UMlineEventAudio::StaticClass();
	}
	struct Z_Construct_UClass_UMlineEventAudio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMlineEventAudio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMlineEventAudio_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "MlineEventAudio.h" },
		{ "ModuleRelativePath", "Public/MlineEventAudio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMlineEventAudio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMlineEventAudio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMlineEventAudio_Statics::ClassParams = {
		&UMlineEventAudio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMlineEventAudio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMlineEventAudio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMlineEventAudio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMlineEventAudio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMlineEventAudio, 3044944707);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<UMlineEventAudio>()
	{
		return UMlineEventAudio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMlineEventAudio(Z_Construct_UClass_UMlineEventAudio, &UMlineEventAudio::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("UMlineEventAudio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMlineEventAudio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
