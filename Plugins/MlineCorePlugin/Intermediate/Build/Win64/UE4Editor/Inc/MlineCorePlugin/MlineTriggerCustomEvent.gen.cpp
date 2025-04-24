// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/MlineTriggerCustomEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineTriggerCustomEvent() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UMlineTriggerCustomEvent_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UMlineTriggerCustomEvent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UMlineTriggerCustomEvent::execActivateEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateEvent();
		P_NATIVE_END;
	}
	void UMlineTriggerCustomEvent::StaticRegisterNativesUMlineTriggerCustomEvent()
	{
		UClass* Class = UMlineTriggerCustomEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateEvent", &UMlineTriggerCustomEvent::execActivateEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "EventSystem|CustomEvent" },
		{ "ModuleRelativePath", "Public/MlineTriggerCustomEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMlineTriggerCustomEvent, nullptr, "ActivateEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMlineTriggerCustomEvent_NoRegister()
	{
		return UMlineTriggerCustomEvent::StaticClass();
	}
	struct Z_Construct_UClass_UMlineTriggerCustomEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMlineTriggerCustomEvent_ActivateEvent, "ActivateEvent" }, // 859056645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MlineTriggerCustomEvent.h" },
		{ "ModuleRelativePath", "Public/MlineTriggerCustomEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMlineTriggerCustomEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::ClassParams = {
		&UMlineTriggerCustomEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMlineTriggerCustomEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMlineTriggerCustomEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMlineTriggerCustomEvent, 1866826898);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<UMlineTriggerCustomEvent>()
	{
		return UMlineTriggerCustomEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMlineTriggerCustomEvent(Z_Construct_UClass_UMlineTriggerCustomEvent, &UMlineTriggerCustomEvent::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("UMlineTriggerCustomEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMlineTriggerCustomEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
