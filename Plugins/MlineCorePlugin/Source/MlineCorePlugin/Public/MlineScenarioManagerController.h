// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MlineScenarioTypes.h"
#include "MlineScenarioManagerController.generated.h"

class AMlineScenarioManagerBase;
UCLASS()
class MLINECOREPLUGIN_API AMlineScenarioManagerController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMlineScenarioManagerController();

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Replicated, Category = "MlineScenarioManagerController", meta = (ExposeOnSpawn = true))
		EPlayerType playerType;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Replicated, Category = "MlineScenarioManagerController", meta = (Bitmask, BitmaskEnum = ESceneEvent))
		int32 EndedEventFlag;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Replicated, Category = "MlineScenarioManagerController")
		AMlineScenarioManagerBase* ScenarioManager;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "MlineScenarioManagerController")
		void SetEndedEventFlag(ESceneEvent eventFlag);
	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "MlineScenarioManagerController")
		void InitEndedEventFlag();

};

