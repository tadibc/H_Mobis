// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlinePrivateCorePlugin/Public/CustomOculusInputFunctionLibraryPrivate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomOculusInputFunctionLibraryPrivate() {}
// Cross Module References
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate();
	OCULUSINPUT_API UClass* Z_Construct_UClass_UOculusInputFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
	OCULUSINPUT_API UEnum* Z_Construct_UEnum_OculusInput_EOculusHandType();
// End Cross Module References
	DEFINE_FUNCTION(UCustomOculusInputFunctionLibraryPrivate::execGetGrabStrength)
	{
		P_GET_ENUM(EOculusHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UCustomOculusInputFunctionLibraryPrivate::GetGrabStrength(EOculusHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	void UCustomOculusInputFunctionLibraryPrivate::StaticRegisterNativesUCustomOculusInputFunctionLibraryPrivate()
	{
		UClass* Class = UCustomOculusInputFunctionLibraryPrivate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrabStrength", &UCustomOculusInputFunctionLibraryPrivate::execGetGrabStrength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics
	{
		struct CustomOculusInputFunctionLibraryPrivate_eventGetGrabStrength_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibraryPrivate_eventGetGrabStrength_Parms, DeviceHand), Z_Construct_UEnum_OculusInput_EOculusHandType, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomOculusInputFunctionLibraryPrivate_eventGetGrabStrength_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibraryPrivate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate, nullptr, "GetGrabStrength", nullptr, nullptr, sizeof(CustomOculusInputFunctionLibraryPrivate_eventGetGrabStrength_Parms), Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_NoRegister()
	{
		return UCustomOculusInputFunctionLibraryPrivate::StaticClass();
	}
	struct Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusInputFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomOculusInputFunctionLibraryPrivate_GetGrabStrength, "GetGrabStrength" }, // 1961335347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomOculusInputFunctionLibraryPrivate.h" },
		{ "ModuleRelativePath", "Public/CustomOculusInputFunctionLibraryPrivate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomOculusInputFunctionLibraryPrivate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::ClassParams = {
		&UCustomOculusInputFunctionLibraryPrivate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomOculusInputFunctionLibraryPrivate, 394388812);
	template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<UCustomOculusInputFunctionLibraryPrivate>()
	{
		return UCustomOculusInputFunctionLibraryPrivate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomOculusInputFunctionLibraryPrivate(Z_Construct_UClass_UCustomOculusInputFunctionLibraryPrivate, &UCustomOculusInputFunctionLibraryPrivate::StaticClass, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("UCustomOculusInputFunctionLibraryPrivate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomOculusInputFunctionLibraryPrivate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
