// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MlinePrivateCorePlugin/Public/MlineActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMlineActor() {}
// Cross Module References
	MLINEPRIVATECOREPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant();
	UPackage* Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActor_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_AMlineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MLINEPRIVATECOREPLUGIN_API UClass* Z_Construct_UClass_UGrabActorInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAutonomousReplicatedMovemant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MLINEPRIVATECOREPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant, Z_Construct_UPackage__Script_MlinePrivateCorePlugin(), TEXT("AutonomousReplicatedMovemant"), sizeof(FAutonomousReplicatedMovemant), Get_Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Hash());
	}
	return Singleton;
}
template<> MLINEPRIVATECOREPLUGIN_API UScriptStruct* StaticStruct<FAutonomousReplicatedMovemant>()
{
	return FAutonomousReplicatedMovemant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutonomousReplicatedMovemant(FAutonomousReplicatedMovemant::StaticStruct, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("AutonomousReplicatedMovemant"), false, nullptr, nullptr);
static struct FScriptStruct_MlinePrivateCorePlugin_StaticRegisterNativesFAutonomousReplicatedMovemant
{
	FScriptStruct_MlinePrivateCorePlugin_StaticRegisterNativesFAutonomousReplicatedMovemant()
	{
		UScriptStruct::DeferCppStructOps<FAutonomousReplicatedMovemant>(FName(TEXT("AutonomousReplicatedMovemant")));
	}
} ScriptStruct_MlinePrivateCorePlugin_StaticRegisterNativesFAutonomousReplicatedMovemant;
	struct Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutonomousReplicatedMovemant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutonomousReplicatedMovemant, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutonomousReplicatedMovemant, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutonomousReplicatedMovemant, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_AngularVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::NewProp_AngularVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
		nullptr,
		&NewStructOps,
		"AutonomousReplicatedMovemant",
		sizeof(FAutonomousReplicatedMovemant),
		alignof(FAutonomousReplicatedMovemant),
		Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MlinePrivateCorePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutonomousReplicatedMovemant"), sizeof(FAutonomousReplicatedMovemant), Get_Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutonomousReplicatedMovemant_Hash() { return 3996392955U; }
	void AMlineActor::StaticRegisterNativesAMlineActor()
	{
	}
	UClass* Z_Construct_UClass_AMlineActor_NoRegister()
	{
		return AMlineActor::StaticClass();
	}
	struct Z_Construct_UClass_AMlineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bisGrabbed_MetaData[];
#endif
		static void NewProp_bisGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bisGrabbed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabbedHands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabbedHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_grabbedHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPhysicsActor_MetaData[];
#endif
		static void NewProp_bIsPhysicsActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPhysicsActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMlineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MlinePrivateCorePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MlineActor.h" },
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed_MetaData[] = {
		{ "Category", "Grab" },
		{ "Comment", "//void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;\n" },
		{ "ModuleRelativePath", "Public/MlineActor.h" },
		{ "ToolTip", "void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;" },
	};
#endif
	void Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed_SetBit(void* Obj)
	{
		((AMlineActor*)Obj)->bisGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed = { "bisGrabbed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineActor), &Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands_Inner = { "grabbedHands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands_MetaData[] = {
		{ "Category", "Grab" },
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands = { "grabbedHands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMlineActor, grabbedHands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/MlineActor.h" },
	};
#endif
	void Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor_SetBit(void* Obj)
	{
		((AMlineActor*)Obj)->bIsPhysicsActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor = { "bIsPhysicsActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMlineActor), &Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMlineActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActor_Statics::NewProp_bisGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActor_Statics::NewProp_grabbedHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMlineActor_Statics::NewProp_bIsPhysicsActor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMlineActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGrabActorInterface_NoRegister, (int32)VTABLE_OFFSET(AMlineActor, IGrabActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMlineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMlineActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMlineActor_Statics::ClassParams = {
		&AMlineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMlineActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMlineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMlineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMlineActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMlineActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMlineActor, 985088591);
	template<> MLINEPRIVATECOREPLUGIN_API UClass* StaticClass<AMlineActor>()
	{
		return AMlineActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMlineActor(Z_Construct_UClass_AMlineActor, &AMlineActor::StaticClass, TEXT("/Script/MlinePrivateCorePlugin"), TEXT("AMlineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMlineActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
