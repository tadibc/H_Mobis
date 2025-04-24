// Fill out your copyright notice in the Description page of Project Settings.

#include "MlineScenarioManagerController.h"
#include "MlineScenarioManagerBase.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AMlineScenarioManagerController::AMlineScenarioManagerController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	bAlwaysRelevant = true;
	bOnlyRelevantToOwner = true;

}

// Called when the game starts or when spawned
void AMlineScenarioManagerController::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		ScenarioManager = static_cast<AMlineScenarioManagerBase*>(UGameplayStatics::GetActorOfClass(GetWorld(), AMlineScenarioManagerBase::StaticClass()));
		if (ScenarioManager->IsValidLowLevel())
			ScenarioManager->ManagerControllers.Add(this);
	}

}

void AMlineScenarioManagerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (HasAuthority())
	{
	//ScenarioManager->ManagerControllers.Remove(this);
	Destroy();
	}

		
}

// Called every frame
void AMlineScenarioManagerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMlineScenarioManagerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMlineScenarioManagerController, EndedEventFlag);
}



void AMlineScenarioManagerController::SetEndedEventFlag_Implementation(ESceneEvent eventFlag)
{
	EndedEventFlag = EndedEventFlag | static_cast<int32>(eventFlag); 
}

void AMlineScenarioManagerController::InitEndedEventFlag_Implementation()
{
	EndedEventFlag = 0;
}

