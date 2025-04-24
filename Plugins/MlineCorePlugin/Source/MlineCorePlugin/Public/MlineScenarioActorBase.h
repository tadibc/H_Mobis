// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "MlineEventActorBase.h"
#include "MlineScenarioTypes.h"
#include "MlineScenarioActorBase.generated.h"

UCLASS()
class MLINECOREPLUGIN_API AMlineScenarioActorBase : public AMlineEventActorBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMlineScenarioActorBase();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineEvent")
		void StepEnded(FActorStepContext context);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineEvent")
		void StartInteraction(AMlineScenarioManagerBase* manager);
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "MlineEvent")
		int interactionScene;
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "MlineEvent")
		int interactionStep;
	UPROPERTY(BlueprintReadWrite, Replicated, Category = "MlineEvent")
		AMlineScenarioManagerBase* controlledManager;
	UPROPERTY(BlueprintReadWrite, Replicated, Category = "MlineEvent")
		bool bIsInteractionEnd;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineEvent")
		void JumpInteraction();


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MlineEvent")
		void InitializeStep(FActorStepContext context);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MlineEvent")
		void StartStep (FActorStepContext context);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MlineEvent")
		void EndStep(FActorStepContext context);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MlineEvent")
		void FinalizeStep(FActorStepContext context);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MlineEvent")
		void NextStep(FActorStepContext context);

	UFUNCTION(BlueprintCallable)
		void Android_Quit_Game();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;
};
