// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ServerFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CREATESERVERPLUGIN_API UServerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "GD_FunctionLibrary")
		static const bool IsEditor();

	UFUNCTION(BlueprintPure, Category = "GD_FunctionLibrary")
		static const int32 GetPort(AGameModeBase* CurrentGameMode);

	UFUNCTION(BlueprintCallable, Category = "GD_FunctionLibrary")
		static void DedicatedShutDown();

	UFUNCTION(BlueprintPure, Category = "DY_FunctionLibrary")
		static const FString GetIPAddress();

	UFUNCTION(BlueprintPure, Category = "DY_FunctionLibrary")
		static const bool IsServerActor(AActor* actor);
};
