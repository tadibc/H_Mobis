// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlinePrivateCorePlugin/Public/GrabActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabActorInterface() {}
// Cross Module References
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGrabActorInterface::execOnPhysicsReleased)
	{
		P_GET_OBJECT(AActor,Z_Param_GrabbedHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhysicsReleased_Implementation(Z_Param_GrabbedHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGrabActorInterface::execOnPhysicsGrabbed)
	{
		P_GET_OBJECT(AActor,Z_Param_GrabbedHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhysicsGrabbed_Implementation(Z_Param_GrabbedHand);
		P_NATIVE_END;
	}
	void IGrabActorInterface::OnPhysicsGrabbed(AActor* GrabbedHand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPhysicsGrabbed instead.");
	}
	void IGrabActorInterface::OnPhysicsReleased(AActor* GrabbedHand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPhysicsReleased instead.");
	}
	void UGrabActorInterface::StaticRegisterNativesUGrabActorInterface()
	{
		UClass* Class = UGrabActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPhysicsGrabbed", &IGrabActorInterface::execOnPhysicsGrabbed },
			{ "OnPhysicsReleased", &IGrabActorInterface::execOnPhysicsReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::NewProp_GrabbedHand = { "GrabbedHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabActorInterface_eventOnPhysicsGrabbed_Parms, GrabbedHand), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::NewProp_GrabbedHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mline" },
		{ "ModuleRelativePath", "Public/GrabActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabActorInterface, nullptr, "OnPhysicsGrabbed", nullptr, nullptr, sizeof(GrabActorInterface_eventOnPhysicsGrabbed_Parms), Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::NewProp_GrabbedHand = { "GrabbedHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabActorInterface_eventOnPhysicsReleased_Parms, GrabbedHand), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::NewProp_GrabbedHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mline" },
		{ "ModuleRelativePath", "Public/GrabActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabActorInterface, nullptr, "OnPhysicsReleased", nullptr, nullptr, sizeof(GrabActorInterface_eventOnPhysicsReleased_Parms), Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabActorInterface_NoRegister()
	{
		return UGrabActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGrabActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabActorInterface_OnPhysicsGrabbed, "OnPhysicsGrabbed" }, // 2581997137
		{ &Z_Construct_UFunction_UGrabActorInterface_OnPhysicsReleased, "OnPhysicsReleased" }, // 4090342322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "Mline" },
		{ "ModuleRelativePath", "Public/GrabActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGrabActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabActorInterface_Statics::ClassParams = {
		&UGrabActorInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabActorInterface, 3329832484);
	template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<UGrabActorInterface>()
	{
		return UGrabActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabActorInterface(Z_Construct_UClass_UGrabActorInterface, &UGrabActorInterface::StaticClass, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("UGrabActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabActorInterface);
	static FName NAME_UGrabActorInterface_OnPhysicsGrabbed = FName(TEXT("OnPhysicsGrabbed"));
	void IGrabActorInterface::Execute_OnPhysicsGrabbed(UObject* O, AActor* GrabbedHand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrabActorInterface::StaticClass()));
		GrabActorInterface_eventOnPhysicsGrabbed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGrabActorInterface_OnPhysicsGrabbed);
		if (Func)
		{
			Parms.GrabbedHand=GrabbedHand;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGrabActorInterface*)(O->GetNativeInterfaceAddress(UGrabActorInterface::StaticClass())))
		{
			I->OnPhysicsGrabbed_Implementation(GrabbedHand);
		}
	}
	static FName NAME_UGrabActorInterface_OnPhysicsReleased = FName(TEXT("OnPhysicsReleased"));
	void IGrabActorInterface::Execute_OnPhysicsReleased(UObject* O, AActor* GrabbedHand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrabActorInterface::StaticClass()));
		GrabActorInterface_eventOnPhysicsReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGrabActorInterface_OnPhysicsReleased);
		if (Func)
		{
			Parms.GrabbedHand=GrabbedHand;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGrabActorInterface*)(O->GetNativeInterfaceAddress(UGrabActorInterface::StaticClass())))
		{
			I->OnPhysicsReleased_Implementation(GrabbedHand);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
