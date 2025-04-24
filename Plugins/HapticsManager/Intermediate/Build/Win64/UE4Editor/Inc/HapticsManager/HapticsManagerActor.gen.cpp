// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HapticsManager/Public/HapticsManagerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticsManagerActor() {}
// Cross Module References
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_AHapticsManagerActor_NoRegister();
	HAPTICSMANAGER_API UClass* Z_Construct_UClass_AHapticsManagerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HapticsManager();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHapticsManagerActor::execSetTactSuit)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SleeveLeft);
		P_GET_OBJECT(USceneComponent,Z_Param_SleeveRight);
		P_GET_OBJECT(USceneComponent,Z_Param_Head);
		P_GET_OBJECT(USceneComponent,Z_Param_VestFront);
		P_GET_OBJECT(USceneComponent,Z_Param_VestBack);
		P_GET_OBJECT(USceneComponent,Z_Param_GloveLeft);
		P_GET_OBJECT(USceneComponent,Z_Param_GloveRight);
		P_GET_OBJECT(USceneComponent,Z_Param_ShoeLeft);
		P_GET_OBJECT(USceneComponent,Z_Param_ShoeRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTactSuit(Z_Param_SleeveLeft,Z_Param_SleeveRight,Z_Param_Head,Z_Param_VestFront,Z_Param_VestBack,Z_Param_GloveLeft,Z_Param_GloveRight,Z_Param_ShoeLeft,Z_Param_ShoeRight);
		P_NATIVE_END;
	}
	void AHapticsManagerActor::StaticRegisterNativesAHapticsManagerActor()
	{
		UClass* Class = AHapticsManagerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTactSuit", &AHapticsManagerActor::execSetTactSuit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics
	{
		struct HapticsManagerActor_eventSetTactSuit_Parms
		{
			USceneComponent* SleeveLeft;
			USceneComponent* SleeveRight;
			USceneComponent* Head;
			USceneComponent* VestFront;
			USceneComponent* VestBack;
			USceneComponent* GloveLeft;
			USceneComponent* GloveRight;
			USceneComponent* ShoeLeft;
			USceneComponent* ShoeRight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleeveLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleeveLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleeveRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleeveRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VestFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VestFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VestBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VestBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoeRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoeRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveLeft_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveLeft = { "SleeveLeft", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, SleeveLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveRight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveRight = { "SleeveRight", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, SleeveRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_Head_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, Head), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestFront_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestFront = { "VestFront", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, VestFront), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestBack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestBack = { "VestBack", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, VestBack), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveLeft_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveLeft = { "GloveLeft", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, GloveLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveRight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveRight = { "GloveRight", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, GloveRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeLeft_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeLeft = { "ShoeLeft", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, ShoeLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeRight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeRight = { "ShoeRight", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HapticsManagerActor_eventSetTactSuit_Parms, ShoeRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_SleeveRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_VestBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_GloveRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::NewProp_ShoeRight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "bHaptics" },
		{ "Comment", "//For use in the UI to set the dots used in visualisation.\n" },
		{ "DeprecatedFunction", "" },
		{ "DisplayName", "Set TactSuit Variables" },
		{ "Keywords", "bHaptics" },
		{ "ModuleRelativePath", "Public/HapticsManagerActor.h" },
		{ "ToolTip", "For use in the UI to set the dots used in visualisation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHapticsManagerActor, nullptr, "SetTactSuit", nullptr, nullptr, sizeof(HapticsManagerActor_eventSetTactSuit_Parms), Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHapticsManagerActor_NoRegister()
	{
		return AHapticsManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_AHapticsManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHapticsManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HapticsManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHapticsManagerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHapticsManagerActor_SetTactSuit, "SetTactSuit" }, // 2133262048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHapticsManagerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HapticsManagerActor.h" },
		{ "ModuleRelativePath", "Public/HapticsManagerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHapticsManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHapticsManagerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHapticsManagerActor_Statics::ClassParams = {
		&AHapticsManagerActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHapticsManagerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHapticsManagerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHapticsManagerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHapticsManagerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHapticsManagerActor, 2496531855);
	template<> HAPTICSMANAGER_API UClass* StaticClass<AHapticsManagerActor>()
	{
		return AHapticsManagerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHapticsManagerActor(Z_Construct_UClass_AHapticsManagerActor, &AHapticsManagerActor::StaticClass, TEXT("/Script/HapticsManager"), TEXT("AHapticsManagerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHapticsManagerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
