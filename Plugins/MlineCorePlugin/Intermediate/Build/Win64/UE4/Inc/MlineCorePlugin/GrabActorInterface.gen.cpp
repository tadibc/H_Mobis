// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlineCorePlugin/Public/GrabActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabActorInterface() {}
// Cross Module References
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface_NoRegister();
	MLINECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MlineCorePlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGrabActorInterface::execOnReleased)
	{
		P_GET_OBJECT(AActor,Z_Param_GrabbedHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReleased_Implementation(Z_Param_GrabbedHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGrabActorInterface::execOnGrabbed)
	{
		P_GET_OBJECT(AActor,Z_Param_GrabbedHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrabbed_Implementation(Z_Param_GrabbedHand);
		P_NATIVE_END;
	}
	void IGrabActorInterface::OnGrabbed(AActor* GrabbedHand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGrabbed instead.");
	}
	void IGrabActorInterface::OnReleased(AActor* GrabbedHand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReleased instead.");
	}
	void UGrabActorInterface::StaticRegisterNativesUGrabActorInterface()
	{
		UClass* Class = UGrabActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGrabbed", &IGrabActorInterface::execOnGrabbed },
			{ "OnReleased", &IGrabActorInterface::execOnReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::NewProp_GrabbedHand = { "GrabbedHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabActorInterface_eventOnGrabbed_Parms, GrabbedHand), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::NewProp_GrabbedHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mline" },
		{ "ModuleRelativePath", "Public/GrabActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabActorInterface, nullptr, "OnGrabbed", nullptr, nullptr, sizeof(GrabActorInterface_eventOnGrabbed_Parms), Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabActorInterface_OnGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabActorInterface_OnGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::NewProp_GrabbedHand = { "GrabbedHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabActorInterface_eventOnReleased_Parms, GrabbedHand), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::NewProp_GrabbedHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mline" },
		{ "ModuleRelativePath", "Public/GrabActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabActorInterface, nullptr, "OnReleased", nullptr, nullptr, sizeof(GrabActorInterface_eventOnReleased_Parms), Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabActorInterface_OnReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabActorInterface_OnReleased_Statics::FuncParams);
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
		(UObject* (*)())Z_Construct_UPackage__Script_MlineCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabActorInterface_OnGrabbed, "OnGrabbed" }, // 1379881510
		{ &Z_Construct_UFunction_UGrabActorInterface_OnReleased, "OnReleased" }, // 1348552964
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
	IMPLEMENT_CLASS(UGrabActorInterface, 3836444622);
	template<> MLINECOREPLUGIN_API UClass* StaticClass<UGrabActorInterface>()
	{
		return UGrabActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabActorInterface(Z_Construct_UClass_UGrabActorInterface, &UGrabActorInterface::StaticClass, TEXT("/Script/MlineCorePlugin"), TEXT("UGrabActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabActorInterface);
	static FName NAME_UGrabActorInterface_OnGrabbed = FName(TEXT("OnGrabbed"));
	void IGrabActorInterface::Execute_OnGrabbed(UObject* O, AActor* GrabbedHand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrabActorInterface::StaticClass()));
		GrabActorInterface_eventOnGrabbed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGrabActorInterface_OnGrabbed);
		if (Func)
		{
			Parms.GrabbedHand=GrabbedHand;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGrabActorInterface*)(O->GetNativeInterfaceAddress(UGrabActorInterface::StaticClass())))
		{
			I->OnGrabbed_Implementation(GrabbedHand);
		}
	}
	static FName NAME_UGrabActorInterface_OnReleased = FName(TEXT("OnReleased"));
	void IGrabActorInterface::Execute_OnReleased(UObject* O, AActor* GrabbedHand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrabActorInterface::StaticClass()));
		GrabActorInterface_eventOnReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGrabActorInterface_OnReleased);
		if (Func)
		{
			Parms.GrabbedHand=GrabbedHand;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGrabActorInterface*)(O->GetNativeInterfaceAddress(UGrabActorInterface::StaticClass())))
		{
			I->OnReleased_Implementation(GrabbedHand);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
