// Fill out your copyright notice in the Description page of Project Settings.


#include "Simulator.h"
#include "SocketSubSystem.h"
#include "Serialization/Csv/CsvParser.h"
#include "Runtime/Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "IPAddress.h"
#include "Sockets.h"
#include "HAL/RunnableThread.h"
#include "Async/Async.h"
#include <string>
#include "Logging/MessageLog.h"
#include "HAL/UnrealMemory.h"

USimulator* USimulator::Initialize()
{
	USimulator* Simulator = NewObject<USimulator>();

	return Simulator;
}

void USimulator::GetSelfIP(FString &IP, int32 &PORT)
{
	LocalPort = 8090;
	bool canBind = false;
	TSharedRef<FInternetAddr> LocalIP = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);

	if (LocalIP->IsValid())
	{
		IP = LocalIP->ToString(false);

		PORT = LocalPort;
	}
}

void USimulator::LoadPatternData(FString Path)
{
#if PLATFORM_WINDOWS

	Pattern_Array.Empty();

	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
	{
		UE_LOG(LogTemp, Warning, TEXT("File Is Not Exist"));
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, TEXT("File Is Not Exist : ") + Path);
		Success = false;
		return;
	}

	FString strCsv;
	FFileHelper::LoadFileToString(strCsv, *Path);
	FCsvParser parser(strCsv);

	TArray<TArray<const TCHAR*>> tempArray;
	tempArray = parser.GetRows();
	if (0 == tempArray.Num())
	{
		return;
	}

	//arrayText.Empty();
	for (int i = 1; i < tempArray.Num(); i++)
	{
		if (0 == tempArray[i].Num())
		{

			continue;
		}

		FPattern_Table tempData;
		tempData.ID = tempArray[i][1];
		tempData.Time = FCString::Atof(tempArray[i][2]);
		tempData.Roll = FCString::Atof(tempArray[i][3]);
		tempData.Pitch = FCString::Atof(tempArray[i][4]);
		tempData.Heave = FCString::Atof(tempArray[i][5]);
		tempData.Lerp = (bool)FCString::Atoi(tempArray[i][6]);
		tempData.IsAdditive = (bool)FCString::Atoi(tempArray[i][7]);

		Pattern_Array.Add(tempData);
	}
#endif
}

// Called every frame
//void USimulator::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

//여기부턴 TCP 소켓연결 부분

void USimulator::Connect(const FTcpSocketDisconnectDelegate& OnDisconnected, const FTcpSocketConnectDelegate& OnConnected,
	const FTcpSocketReceivedMessageDelegate& OnMessageReceived, int32& ConnectionId)
{
	DisconnectedDelegate = OnDisconnected;
	ConnectedDelegate = OnConnected;
	MessageReceivedDelegate = OnMessageReceived;

	ConnectionId = TcpWorkers.Num();

	bool canBind = false;
	TSharedRef<FInternetAddr> LocalIP = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);

	FString str_LocalIP = LocalIP->ToString(false);

	TWeakObjectPtr<USimulator> thisWeakObjPtr = TWeakObjectPtr<USimulator>(this);
	TSharedRef<FTcpSocketWork> worker(new FTcpSocketWork(str_LocalIP, LocalPort, thisWeakObjPtr, ConnectionId, ReceiveBufferSize, SendBufferSize, TimeBetweenTicks));
	TcpWorkers.Add(ConnectionId, worker);
	worker->Start();
	ConnectID = ConnectionId;
}

void USimulator::Disconnect(int32 ConnectionId)
{
	auto worker = TcpWorkers.Find(ConnectionId);
	if (worker)
	{
		UE_LOG(LogTemp, Log, TEXT("Tcp Socket: Disconnected from server."));
		worker->Get().Stop();
		TcpWorkers.Remove(ConnectionId);
	}
}

bool USimulator::SendData(int32 ConnectionId /*= 0*/, TArray<uint8> DataToSend)
{
	if (TcpWorkers.Contains(ConnectionId))
	{
		if (TcpWorkers[ConnectionId]->isConnected())
		{
			TcpWorkers[ConnectionId]->AddToOutbox(DataToSend);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Log: Socket %d isn't connected"), ConnectionId);
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Log: SocketId %d doesn't exist"), ConnectionId);
	}
	return false;
}

void USimulator::ExecuteOnMessageReceived(int32 ConnectionId, TWeakObjectPtr<USimulator> thisObj)
{
	// the second check is for when we quit PIE, we may get a message about a disconnect, but it's too late to act on it, because the thread has already been killed
	if (!thisObj.IsValid())
		return;

	// how to crash:
	// 1 connect with both clients
	// 2 stop PIE
	// 3 close editor
	if (!TcpWorkers.Contains(ConnectionId)) {
		return;
	}

	TArray<uint8> msg = TcpWorkers[ConnectionId]->ReadFromInbox();
	MessageReceivedDelegate.ExecuteIfBound(ConnectionId, msg);
}

TArray<uint8> USimulator::Concat_BytesBytes(TArray<uint8> A, TArray<uint8> B)
{
	TArray<uint8> ArrayResult;

	for (int i = 0; i < A.Num(); i++)
	{
		ArrayResult.Add(A[i]);
	}

	for (int i = 0; i < B.Num(); i++)
	{
		ArrayResult.Add(B[i]);
	}

	return ArrayResult;
}

TArray<uint8> USimulator::Conv_IntToBytes(int32 InInt)
{
	TArray<uint8> result;
	for (int i = 0; i < 4; i++)
	{
		result.Add(InInt >> i * 8);
	}
	return result;
}

TArray<uint8> USimulator::Conv_StringToBytes(const FString& InStr)
{
	FTCHARToUTF8 Convert(*InStr);
	int BytesLength = Convert.Length(); //length of the utf-8 string in bytes (when non-latin letters are used, it's longer than just the number of characters)
	uint8* messageBytes = static_cast<uint8*>(FMemory::Malloc(BytesLength));
	FMemory::Memcpy(messageBytes, (uint8*)TCHAR_TO_UTF8(InStr.GetCharArray().GetData()), BytesLength); //mcmpy is required, since TCHAR_TO_UTF8 returns an object with a very short lifetime

	TArray<uint8> result;
	for (int i = 0; i < BytesLength; i++)
	{
		result.Add(messageBytes[i]);
	}

	FMemory::Free(messageBytes);

	return result;
}

TArray<uint8> USimulator::Conv_FloatToBytes(float InFloat)
{
	TArray<uint8> result;

	unsigned char const* p = reinterpret_cast<unsigned char const*>(&InFloat);
	for (int i = 0; i != sizeof(float); i++)
	{
		result.Add((uint8)p[i]);
	}
	return result;
}

TArray<uint8> USimulator::Conv_ByteToBytes(uint8 InByte)
{
	TArray<uint8> result{ InByte };
	return result;
}

int32 USimulator::Message_ReadInt(TArray<uint8>& Message)
{
	if (Message.Num() < 4)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error in the ReadInt node. Not enough bytes in the Message."));
		return -1;
	}

	int result;
	unsigned char byteArray[4];

	for (int i = 0; i < 4; i++)
	{
		byteArray[i] = Message[0];
		Message.RemoveAt(0);
	}

	FMemory::Memcpy(&result, byteArray, 4);

	return result;
}

uint8 USimulator::Message_ReadByte(TArray<uint8>& Message)
{
	if (Message.Num() < 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error in the ReadByte node. Not enough bytes in the Message."));
		return 255;
	}

	uint8 result = Message[0];
	Message.RemoveAt(0);
	return result;
}

bool USimulator::Message_ReadBytes(int32 NumBytes, TArray<uint8>& Message, TArray<uint8>& returnArray)
{
	for (int i = 0; i < NumBytes; i++) {
		if (Message.Num() >= 1)
			returnArray.Add(Message_ReadByte(Message));
		else
			return false;
	}
	return true;
}

float USimulator::Message_ReadFloat(TArray<uint8>& Message)
{
	if (Message.Num() < 4)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error in the ReadFloat node. Not enough bytes in the Message."));
		return -1.f;
	}

	float result;
	unsigned char byteArray[4];

	for (int i = 0; i < 4; i++)
	{
		byteArray[i] = Message[0];
		Message.RemoveAt(0);
	}

	FMemory::Memcpy(&result, byteArray, 4);

	return result;
}

FString USimulator::Message_ReadString(TArray<uint8>& Message, int32 BytesLength)
{
	if (BytesLength <= 0)
	{
		if (BytesLength < 0)
			UE_LOG(LogTemp, Warning, TEXT("Error in the ReadString node. BytesLength isn't a positive number."));
		return FString("");
	}
	if (Message.Num() < BytesLength)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error in the ReadString node. Message isn't as long as BytesLength."));

		return FString("");
	}

	TArray<uint8> StringAsArray;
	StringAsArray.Reserve(BytesLength);

	for (int i = 0; i < BytesLength; i++)
	{
		StringAsArray.Add(Message[0]);
		Message.RemoveAt(0);
	}

	std::string cstr(reinterpret_cast<const char*>(StringAsArray.GetData()), StringAsArray.Num());
	return FString(UTF8_TO_TCHAR(cstr.c_str()));
}

bool USimulator::isConnected(int32 ConnectionId)
{
	if (TcpWorkers.Contains(ConnectionId))
		return TcpWorkers[ConnectionId]->isConnected();
	return false;
}

//void USimulator::PrintToConsole(FString Str, bool Error)
//{
//	if (auto tcpSocketSettings = GetDefault<UTcpSocketSettings>())
//	{
//		if (Error && tcpSocketSettings->bPostErrorsToMessageLog)
//		{
//			auto messageLog = FMessageLog("Tcp Socket Plugin");
//			messageLog.Open(EMessageSeverity::Error, true);
//			messageLog.Message(EMessageSeverity::Error, FText::AsCultureInvariant(Str));
//		}
//		else
//		{
//			UE_LOG(LogTemp, Log, TEXT("Log: %s"), *Str);
//		}
//	}
//}

void USimulator::ExecuteOnConnected(int32 WorkerId, TWeakObjectPtr<USimulator> thisObj)
{
	if (!thisObj.IsValid())
		return;

	ConnectedDelegate.ExecuteIfBound(WorkerId);
}

void USimulator::ExecuteOnDisconnected(int32 WorkerId, TWeakObjectPtr<USimulator> thisObj)
{
	if (!thisObj.IsValid())
		return;

	if (TcpWorkers.Contains(WorkerId))
	{
		TcpWorkers.Remove(WorkerId);
	}
	DisconnectedDelegate.ExecuteIfBound(WorkerId);
}

bool FTcpSocketWork::isConnected()
{
	///FScopeLock ScopeLock(&SendCriticalSection);
	return bConnected;
}

FTcpSocketWork::FTcpSocketWork(FString inIp, const int32 inPort, TWeakObjectPtr<USimulator> InOwner, int32 inId, int32 inRecvBufferSize, int32 inSendBufferSize, float inTimeBetweenTicks)
	: ipAddress(inIp)
	, port(inPort)
	, ThreadSpawnerActor(InOwner)
	, id(inId)
	, RecvBufferSize(inRecvBufferSize)
	, SendBufferSize(inSendBufferSize)
	, TimeBetweenTicks(inTimeBetweenTicks)
{

}

FTcpSocketWork::~FTcpSocketWork()
{
	AsyncTask(ENamedThreads::GameThread, []() {	UE_LOG(LogTemp, Warning, TEXT("TCP Socket Thread was Destroyed")) });
	Stop();
	if (Thread)
	{
		Thread->WaitForCompletion();
		delete Thread;
		Thread = nullptr;
	}
}

void FTcpSocketWork::Start()
{
	check(!Thread && "Thread wasn't null at the start!");
	check(FPlatformProcess::SupportsMultithreading() && "This platform doesn't support multithreading!");
	if (Thread)
	{
		UE_LOG(LogTemp, Log, TEXT("Log: Thread isn't null. It's: %s"), *Thread->GetThreadName());
	}
	Thread = FRunnableThread::Create(this, *FString::Printf(TEXT("FTcpSocketWork %s:%d"), *ipAddress, port), 128 * 1024, TPri_Normal);
	UE_LOG(LogTemp, Log, TEXT("Log: Created thread"));
}

void FTcpSocketWork::AddToOutbox(TArray<uint8> Message)
{
	Outbox.Enqueue(Message);
}

TArray<uint8> FTcpSocketWork::ReadFromInbox()
{
	TArray<uint8> msg;
	Inbox.Dequeue(msg);
	return msg;
}

bool FTcpSocketWork::Init()
{
	bRun = true;
	bConnected = false;
	return true;
}

uint32 FTcpSocketWork::Run()
{
	AsyncTask(ENamedThreads::GameThread, []() {	UE_LOG(LogTemp, Warning, TEXT("Starting Socket Thread")); });

	while (bRun)
	{
		FDateTime timeBeginningOfTick = FDateTime::UtcNow();

		// Connect
		if (!bConnected)
		{
			Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
			if (!Socket)
			{
				return 0;
			}

			Socket->SetReceiveBufferSize(RecvBufferSize, ActualRecvBufferSize);
			Socket->SetSendBufferSize(SendBufferSize, ActualSendBufferSize);

			FIPv4Address ip;
			FIPv4Address::Parse(ipAddress, ip);

			TSharedRef<FInternetAddr> internetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
			internetAddr->SetIp(ip.Value);
			internetAddr->SetPort(port);

			bConnected = Socket->Connect(*internetAddr);
			if (bConnected)
			{
				AsyncTask(ENamedThreads::GameThread, [this]() {
					ThreadSpawnerActor.Get()->ExecuteOnConnected(id, ThreadSpawnerActor);
					});
			}
			else
			{

				AsyncTask(ENamedThreads::GameThread, []() { UE_LOG(LogTemp, Warning, TEXT("Couldn't connect to server. TcpSocketConnection.cpp: line %d"), __LINE__); });
				bRun = false;
			}
			continue;
		}

		if (!Socket)
		{

			AsyncTask(ENamedThreads::GameThread, []() { UE_LOG(LogTemp, Warning, TEXT("Socket is null. TcpSocketConnection.cpp: line %d"), __LINE__); });
			bRun = false;
			continue;
		}

		// check if we weren't disconnected from the socket
		Socket->SetNonBlocking(true); // set to NonBlocking, because Blocking can't check for a disconnect for some reason
		int32 t_BytesRead;
		uint8 t_Dummy;
		if (!Socket->Recv(&t_Dummy, 1, t_BytesRead, ESocketReceiveFlags::Peek))
		{
			bRun = false;
			continue;
		}
		Socket->SetNonBlocking(false);	// set back to Blocking

		// if Outbox has something to send, send it
		while (!Outbox.IsEmpty())
		{
			TArray<uint8> toSend;
			Outbox.Dequeue(toSend);

			if (!BlockingSend(toSend.GetData(), toSend.Num()))
			{
				// if sending failed, stop running the thread
				bRun = false;
				UE_LOG(LogTemp, Log, TEXT("TCP send data failed !"));
				continue;
			}
		}

		// if we can read something		
		uint32 PendingDataSize = 0;
		TArray<uint8> receivedData;

		int32 BytesReadTotal = 0;
		// keep going until we have no data.
		while (bRun)
		{
			if (!Socket->HasPendingData(PendingDataSize))
			{
				// no messages
				break;
			}

			AsyncTask(ENamedThreads::GameThread, []() { UE_LOG(LogTemp, Warning, TEXT("Pending Data")); });

			receivedData.SetNumUninitialized(BytesReadTotal + PendingDataSize);

			int32 BytesRead = 0;
			if (!Socket->Recv(receivedData.GetData() + BytesReadTotal, PendingDataSize, BytesRead))
			{
				// ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
				// error code: (int32)SocketSubsystem->GetLastErrorCode()
				AsyncTask(ENamedThreads::GameThread, []() {
					UE_LOG(LogTemp, Warning, TEXT("In progress read failed. TcpSocketConnection.cpp: line %d"), __LINE__);
					});
				break;
			}
			BytesReadTotal += BytesRead;

			/* TODO: if we have more PendingData than we could read, continue the while loop so that we can send messages if we have any, and then keep recving*/
		}

		// if we received data, inform the main thread about it, so it can read TQueue
		if (bRun && receivedData.Num() != 0)
		{
			Inbox.Enqueue(receivedData);
			AsyncTask(ENamedThreads::GameThread, [this]() {
				ThreadSpawnerActor.Get()->ExecuteOnMessageReceived(id, ThreadSpawnerActor);
				});
		}

		/* In order to sleep, we will account for how much this tick took due to sending and receiving */
		FDateTime timeEndOfTick = FDateTime::UtcNow();
		FTimespan tickDuration = timeEndOfTick - timeBeginningOfTick;
		float secondsThisTickTook = tickDuration.GetTotalSeconds();
		float timeToSleep = TimeBetweenTicks - secondsThisTickTook;
		if (timeToSleep > 0.f)
		{
			//AsyncTask(ENamedThreads::GameThread, [timeToSleep]() { USimulator::PrintToConsole(FString::Printf(TEXT("Sleeping: %f seconds"), timeToSleep), false); });
			FPlatformProcess::Sleep(timeToSleep);
		}
	}

	bConnected = false;

	AsyncTask(ENamedThreads::GameThread, [this]() {
		ThreadSpawnerActor.Get()->ExecuteOnDisconnected(id, ThreadSpawnerActor);
		});

	SocketShutdown();
	if (Socket)
	{
		delete Socket;
		Socket = nullptr;
	}

	return 0;
}

void FTcpSocketWork::Stop()
{
	bRun = false;
}

void FTcpSocketWork::Exit()
{

}

bool FTcpSocketWork::BlockingSend(const uint8* Data, int32 BytesToSend)
{
	if (BytesToSend > 0)
	{
		int32 BytesSent = 0;
		if (!Socket->Send(Data, BytesToSend, BytesSent))
		{
			return false;
		}
	}
	return true;
}

void FTcpSocketWork::SocketShutdown()
{
	// if there is still a socket, close it so our peer will get a quick disconnect notification
	if (Socket)
	{
		Socket->Close();
	}
}
