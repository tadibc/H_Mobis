// Fill out your copyright notice in the Description page of Project Settings.


#include "MlineScenarioActorBase.h"

//#include "Engine/Engine.h"

// Sets default values
AMlineScenarioActorBase::AMlineScenarioActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
}
void AMlineScenarioActorBase::InitializeStep_Implementation(FActorStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FName name = context.name;
	FName tag = context.tag;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioActorBase::InitalizeStep_Implementation %d-%d"), scene, step);
}

void AMlineScenarioActorBase::StartStep_Implementation(FActorStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FName name = context.name;
	FName tag = context.tag;
	if (HasAuthority())
	{
	interactionScene = controlledManager->currentScene_cpp;
	interactionStep = controlledManager->currentStep_cpp;
	}
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioActorBase::StartStep_Implementation %d-%d"), scene, step);
}

void AMlineScenarioActorBase::EndStep_Implementation(FActorStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FName name = context.name;
	FName tag = context.tag;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioActorBase::EndStep_Implementation %d-%d"), scene, step);
}
void AMlineScenarioActorBase::FinalizeStep_Implementation(FActorStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FName name = context.name;
	FName tag = context.tag;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioActorBase::FinalizeStep_Implementation %d-%d"), scene, step);
}
void AMlineScenarioActorBase::NextStep_Implementation(FActorStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FName name = context.name;
	FName tag = context.tag;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioActorBase::NextStep_Implementation %d-%d"), scene, step);
}

//void AMlineScenarioActorBase::StartInteraction_Implementation(AMlineScenarioManagerBase* manager)
//{
//
//
//}



void AMlineScenarioActorBase::Android_Quit_Game()
{
#if PLATFORM_ANDROID
	FGenericPlatformMisc::RequestExit(true);
#endif
}

// Called when the game starts or when spawned
void AMlineScenarioActorBase::BeginPlay()
{
	Super::BeginPlay();
	BlinkMaterialSetting_cpp();
	if (HasAuthority())
	{ 
		controlledManager = Cast<AMlineScenarioManagerBase>(UGameplayStatics::GetActorOfClass(GetWorld(), AMlineScenarioManagerBase::StaticClass()));
	}
}

// Called every frame
void AMlineScenarioActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMlineScenarioActorBase::OnConstruction(const FTransform& Transform)
{
	
	Super::OnConstruction(Transform);
}



void AMlineScenarioActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMlineScenarioActorBase, interactionScene);
	DOREPLIFETIME(AMlineScenarioActorBase, interactionStep);
	DOREPLIFETIME(AMlineScenarioActorBase, controlledManager);


}
