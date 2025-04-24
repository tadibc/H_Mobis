// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USimulator;
#ifdef MLINESIMULATOR_Simulator_generated_h
#error "Simulator.generated.h already included, missing '#pragma once' in Simulator.h"
#endif
#define MLINESIMULATOR_Simulator_generated_h

#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPatternInfo_Statics; \
	MLINESIMULATOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MLINESIMULATOR_API UScriptStruct* StaticStruct<struct FPatternInfo>();

#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPattern_Table_Statics; \
	MLINESIMULATOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MLINESIMULATOR_API UScriptStruct* StaticStruct<struct FPattern_Table>();

#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_19_DELEGATE \
struct _Script_MLineSimulator_eventTcpSocketReceivedMessageDelegate_Parms \
{ \
	int32 ConnectionId; \
	TArray<uint8> Message; \
}; \
static inline void FTcpSocketReceivedMessageDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketReceivedMessageDelegate, int32 ConnectionId, TArray<uint8>& Message) \
{ \
	_Script_MLineSimulator_eventTcpSocketReceivedMessageDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	Parms.Message=Message; \
	TcpSocketReceivedMessageDelegate.ProcessDelegate<UObject>(&Parms); \
	Message=Parms.Message; \
}


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_18_DELEGATE \
struct _Script_MLineSimulator_eventTcpSocketConnectDelegate_Parms \
{ \
	int32 ConnectionId; \
}; \
static inline void FTcpSocketConnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketConnectDelegate, int32 ConnectionId) \
{ \
	_Script_MLineSimulator_eventTcpSocketConnectDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	TcpSocketConnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_17_DELEGATE \
struct _Script_MLineSimulator_eventTcpSocketDisconnectDelegate_Parms \
{ \
	int32 ConnectionId; \
}; \
static inline void FTcpSocketDisconnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketDisconnectDelegate, int32 ConnectionId) \
{ \
	_Script_MLineSimulator_eventTcpSocketDisconnectDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	TcpSocketDisconnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_SPARSE_DATA
#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execLoadPatternData); \
	DECLARE_FUNCTION(execGetSelfIP); \
	DECLARE_FUNCTION(execInitialize);


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execLoadPatternData); \
	DECLARE_FUNCTION(execGetSelfIP); \
	DECLARE_FUNCTION(execInitialize);


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimulator(); \
	friend struct Z_Construct_UClass_USimulator_Statics; \
public: \
	DECLARE_CLASS(USimulator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLineSimulator"), NO_API) \
	DECLARE_SERIALIZER(USimulator)


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUSimulator(); \
	friend struct Z_Construct_UClass_USimulator_Statics; \
public: \
	DECLARE_CLASS(USimulator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLineSimulator"), NO_API) \
	DECLARE_SERIALIZER(USimulator)


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimulator(USimulator&&); \
	NO_API USimulator(const USimulator&); \
public:


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimulator(USimulator&&); \
	NO_API USimulator(const USimulator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulator)


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_PRIVATE_PROPERTY_OFFSET
#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_85_PROLOG
#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_SPARSE_DATA \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_RPC_WRAPPERS \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_INCLASS \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_PRIVATE_PROPERTY_OFFSET \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_SPARSE_DATA \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_INCLASS_NO_PURE_DECLS \
	H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLINESIMULATOR_API UClass* StaticClass<class USimulator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID H_Mobis_Plugins_MLineSimulator_Source_MLineSimulator_Public_Simulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
