// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MlineScenarioManagerController.h"
#include "MlineScenarioManagerBase.generated.h"


UCLASS()
class MLINECOREPLUGIN_API AMlineScenarioManagerBase : public AActor
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	AMlineScenarioManagerBase();

	UPROPERTY(VisibleAnyWhere, Replicated, BlueprintReadOnly, AdvancedDisplay, Category = "MlineScenarioEvent")
		int32 currentScene_cpp;
	UPROPERTY(VisibleAnyWhere, Replicated, BlueprintReadOnly, AdvancedDisplay, Category = "MlineScenarioEvent")
		int32 currentStep_cpp;
public:

	//UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "MlineScenarioData")
	//	FName saveStepName_Cpp;
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "MlineScenarioEvent")
		void SetEventActors_cpp();
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent")
		TArray<FSceneEventData> ScenarioEvent_cpp;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "MlineScenarioEvent")
		TArray<AMlineScenarioActorBase*> scenarioActors_cpp;
	
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, AdvancedDisplay, Replicated, Category = "MlineScenarioEvent")
		EScenarioState ScenarioState;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, AdvancedDisplay, Replicated, Category = "MlineScenarioEvent")
		EStepState StepState;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, AdvancedDisplay, Replicated, Category = "MlineScenarioEvent", meta = (Bitmask, BitmaskEnum = ESceneEvent))
		int32 EndedEventFlag;

	UPROPERTY(BlueprintReadOnly, Category = "MlineScenarioEvent")
		FTimerHandle ScenarioFlowTimerHandle;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, AdvancedDisplay, Category = "MlineScenarioEvent")
		TArray<AMlineScenarioManagerController*> ManagerControllers;

	UFUNCTION(BlueprintCallable, Category = "MlineScenarioFlowControll")
		void ScenarioStart();
	UFUNCTION(BlueprintCallable, Category = "MlineScenarioFlowControll")
		void Next();
	UFUNCTION(BlueprintCallable, Category = "MlineScenarioFlowControll")
		void Prev();
	UFUNCTION(BlueprintCallable, Category = "MlineScenarioFlowControll")
		void StepEnd();
	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "MlineScenarioFlowControll")
		void ShiftStep(int scene, int step);
	/// <summary>
	/// ¹Ì±¸Çö
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "MlineScenarioFlowControll")
		void ShiftStepByName(FName name);
	UFUNCTION(BlueprintCallable, Category = "MlineScenarioFlowControll")
		void JumpStep(int scene, int step);


private:
	void Rewind(int scene, int step);
	void FastForword(int scene, int step);
	void ScenarioFlow();
	int32 GetSkippedEndFlag(int scene, int step);
	FDefaultStepContext ConstructDefaultStepContext();
	FActorStepContext ConstructActorStepContext(FInteractionData actorInteractionData);

public:
	//UFUNCTION(NetMulticast, Reliable, Category = "MlineScenarioEvent")
	//	void InitializeStep_Multicast(FStepContext context);
	//UFUNCTION(NetMulticast, Reliable, Category = "MlineScenarioEvent")
	//	void StartStep_Multicast(FStepContext context);
	//UFUNCTION(NetMulticast, Reliable, Category = "MlineScenarioEvent")
	//	void StayStep_Multicast(FStepContext context);
	//UFUNCTION(NetMulticast, Reliable, Category = "MlineScenarioEvent")
	//	void EndStep_Multicast(FStepContext context);
	//UFUNCTION(NetMulticast, Reliable, Category = "MlineScenarioEvent")
	//	void FinalizeStep_Multicast(FStepContext context);
	//UFUNCTION(NetMulticast, Reliable, Category = "MlineScenarioEvent")
	//	void NextStep_Multicast(FStepContext context);

	UFUNCTION(BlueprintNativeEvent, Category = "MlineScenarioEvent")
		void InitializeStep(FDefaultStepContext context);
	UFUNCTION(BlueprintNativeEvent, Category = "MlineScenarioEvent")
		void StartStep(FDefaultStepContext context);
	UFUNCTION(BlueprintNativeEvent, Category = "MlineScenarioEvent")
		void StayStep(FDefaultStepContext context);
	UFUNCTION(BlueprintNativeEvent, Category = "MlineScenarioEvent")
		void EndStep(FDefaultStepContext context);
	UFUNCTION(BlueprintNativeEvent, Category = "MlineScenarioEvent")
		void FinalizeStep(FDefaultStepContext context);
	UFUNCTION(BlueprintNativeEvent, Category = "MlineScenarioEvent")
		void NextStep(FDefaultStepContext context);
	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MlineScenarioEvent")
	//	void MoveStep_cpp(int scene, int step);

	UFUNCTION(BlueprintCallable, Category = "MlineScenarioEvent")
		void CallScenarioEvent(int Scene, int Step);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineScenarioEvent")
		void EndInteraction(int Scene, int Step, AMlineScenarioActorBase* endActor);

protected:
	UPROPERTY(BlueprintReadOnly, Category = "MlineScenarioEvent", meta = (Bitmask, BitmaskEnum = ESceneEvent, HideInDetailPanel))
		int32 EventChecker;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineScenarioEvent")
		void CallNarration(FNarrationData data);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineScenarioEvent")
		void CallMove(FMoveData data);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineScenarioEvent")
		void CallFade(FFadeData data);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineScenarioEvent")
		void CallInteraction(FInteractionData data);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MlineScenarioEvent")
		void CallLocaLevel(FLoadLevelData data);



private:
	void GetNextStep(int32* scene, int32* step);
	void GetPreviousStep(int32* scene, int32* step);
	int32 targetScene;
	int32 targetStep;




	//Editor Function
public : 
	//UFUNCTION(BlueprintCallable, CallInEditor, Category = "MlineScenarioData")
	//	void SaveCurrentData_cpp();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CallFunctionByName(UObject* object, FString FunctionData);

};
