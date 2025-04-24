// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerFunctionLibrary.h"
#include "GameFramework/GameModeBase.h"
#include "SocketSubsystem.h"
#include "Engine/World.h"

const bool UServerFunctionLibrary::IsEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

const int32 UServerFunctionLibrary::GetPort(AGameModeBase* CurrentGameMode)
{
	if (CurrentGameMode != NULL)
		return CurrentGameMode->GetWorld()->URL.Port;

	return 0;
}

void UServerFunctionLibrary::DedicatedShutDown()
{
	GIsRequestingExit = true;
}

const FString UServerFunctionLibrary::GetIPAddress()
{
	FString IpAddr("NONE");
	bool canBind = false;
	TSharedRef<FInternetAddr>LocalIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	if (LocalIp->IsValid())
	{
		//If you want to add a port, write ture
		IpAddr = LocalIp->ToString(false);
	}

	return IpAddr;
}

const bool UServerFunctionLibrary::IsServerActor(AActor* actor)
{
	if (actor != NULL)
		return	actor->GetWorld()->GetNetMode() == NM_DedicatedServer || actor->GetWorld()->GetNetMode() == NM_ListenServer ? true : false;

	return false;
}