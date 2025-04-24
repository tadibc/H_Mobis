// Fill out your copyright notice in the Description page of Project Settings.


#include "MlineScenarioManagerBase.h"
#include "MlinePublicFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MlineScenarioActorBase.h"
#include <Runtime/Core/Public/Misc/OutputDeviceNull.h>

// Sets default values
AMlineScenarioManagerBase::AMlineScenarioManagerBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	bAlwaysRelevant = true;

}

void AMlineScenarioManagerBase::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		GetWorldTimerManager().SetTimer(ScenarioFlowTimerHandle, this, &AMlineScenarioManagerBase::ScenarioFlow, 0.01666f, true);
	}



}
void AMlineScenarioManagerBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

	GetWorld()->GetTimerManager().ClearTimer(ScenarioFlowTimerHandle);
}
void AMlineScenarioManagerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMlineScenarioManagerBase::ScenarioStart()
{
	ScenarioState = EScenarioState::Play;
}
void AMlineScenarioManagerBase::Next()
{
	targetScene = currentScene_cpp;
	targetStep = currentStep_cpp;
	GetNextStep(&targetScene, &targetStep);
	if (!(targetScene == MAX_int32 || targetStep == MAX_int32))
	{
		ScenarioState = EScenarioState::FastForword;
	}
	else
	{

	}
}
void AMlineScenarioManagerBase::Prev()
{
	targetScene = currentScene_cpp;
	targetStep = currentStep_cpp;
	GetPreviousStep(&targetScene, &targetStep);

	if (!(targetScene == MIN_int32 || targetStep == MIN_int32))
	{
		ScenarioState = EScenarioState::Rewind;
	}
	else
	{

	}

}
void AMlineScenarioManagerBase::ScenarioFlow()
{
	FStepEventData stepEvent;
	FDefaultStepContext defaultStepContext;
	FActorStepContext actorStepContext;
	bool bIsControllerEventEnded = true;
	bool bIsInteractionEnded = true;
	int interactionCounter = 0;
	int MaxInteractionCount = 0;
	int playerCount = 0;
	int32 SkippedEndFlag = 0;


	//UE_LOG(LogTemp, Log, TEXT("HasAuthority %c"), HasAuthority() ? 't' : 'f');

	switch (ScenarioState)
	{
	case EScenarioState::Stop:
		break;
	case EScenarioState::Play:
		//스탭 상태 관련 초기화 부분
		stepEvent = ScenarioEvent_cpp[currentScene_cpp].Step[currentStep_cpp];
		EndedEventFlag = stepEvent.SceneEventFlag;
		SkippedEndFlag = GetSkippedEndFlag(currentScene_cpp, currentStep_cpp);
		defaultStepContext = ConstructDefaultStepContext();
		if (stepEvent.InteractionActor.Interaction_Count_Type == EInteractionCountTypeEunm::Count_Interaction)
			MaxInteractionCount = stepEvent.InteractionActor.End_Count_Interaction;
		else if (stepEvent.InteractionActor.Interaction_Count_Type == EInteractionCountTypeEunm::All_Interaction)
			MaxInteractionCount = stepEvent.InteractionActor.IntaractionActor.Num();


		//스탭 상태 시작
		switch (StepState)
		{
		case EStepState::Initialize:

			for (AMlineScenarioManagerController* managerController : ManagerControllers)
			{
				managerController->InitEndedEventFlag();
			}

			InitializeStep(defaultStepContext);

			for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
			{
				if (scenarioActor)
				{
					actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
					scenarioActor->InitializeStep(actorStepContext);
				}
			}

			StepState = EStepState::Start;
			break;

		case EStepState::Start:
			StartStep(defaultStepContext);
			CallScenarioEvent(currentScene_cpp, currentStep_cpp);

			for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
			{
				if (scenarioActor)
				{
					actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
					scenarioActor->StartStep(actorStepContext);
				}
			}

			StepState = EStepState::Stay;
			break;
		case EStepState::Stay:
			StayStep(defaultStepContext);

			for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
			{
				if (scenarioActor)
				{
					if (scenarioActor->bIsInteractionEnd)
					{
						interactionCounter++;
					}
				}
			}

			//인터렉션 완료 액터 갯수 비교
			bIsInteractionEnded = interactionCounter <= MaxInteractionCount;

			for (AMlineScenarioManagerController* managerController : ManagerControllers)
			{
				int32 _endedEventFlag = managerController->EndedEventFlag;
				_endedEventFlag |= SkippedEndFlag;
				bIsControllerEventEnded = bIsControllerEventEnded && (_endedEventFlag == stepEvent.SceneEventFlag);
			}


			if (bIsControllerEventEnded && bIsInteractionEnded)
			{
				StepState = EStepState::End;
			}
			break;
		case EStepState::End:
			EndStep(defaultStepContext);

			for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
			{
				if (scenarioActor)
				{
					actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
					scenarioActor->EndStep(actorStepContext);
				}
			}

			StepState = EStepState::Finalize;
			break;

		case EStepState::Finalize:
			FinalizeStep(defaultStepContext);

			for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
			{
				if (scenarioActor)
				{
					actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
					scenarioActor->FinalizeStep(actorStepContext);
				}
			}

			StepState = EStepState::Next;
			break;
		case EStepState::Next:

			for (AMlineScenarioManagerController* managerController : ManagerControllers)
			{
				managerController->InitEndedEventFlag();
			}

			NextStep(defaultStepContext);

			for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
			{
				if (scenarioActor)
				{
					actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
					scenarioActor->NextStep(actorStepContext);
				}
			}

			GetNextStep(&currentScene_cpp, &currentStep_cpp);

			//다음으로 넘어갈때 유효성 체크
			if (ScenarioEvent_cpp.IsValidIndex(currentScene_cpp))
			{
				if (!ScenarioEvent_cpp[currentScene_cpp].Step.IsValidIndex(currentStep_cpp))
				{
					UE_LOG(LogTemp, Warning, TEXT("%d - %d Step Over "), currentScene_cpp, currentStep_cpp);
					ScenarioState = EScenarioState::Stop;
					return;

				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("%d - %d Scene Over"), currentScene_cpp, currentStep_cpp);
				ScenarioState = EScenarioState::Stop;
				return;
			}



			StepState = EStepState::Initialize;
			break;
		default:
			break;
		}

		break;
	case EScenarioState::Pause:
		break;
	case EScenarioState::Rewind:
		stepEvent = ScenarioEvent_cpp[currentScene_cpp].Step[currentStep_cpp];
		//end
		EndStep(defaultStepContext);

		for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
		{
			if (scenarioActor)
			{
				actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
				scenarioActor->EndStep(actorStepContext);
			}
		}

		//start
		InitializeStep(defaultStepContext);

		for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
		{
			if (scenarioActor)
			{
				actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
				scenarioActor->InitializeStep(actorStepContext);
			}
		}

		GetPreviousStep(&currentScene_cpp, &currentStep_cpp);
		//return
		if (targetScene == currentScene_cpp && targetStep == currentStep_cpp)
		{
			ScenarioState = EScenarioState::Play;
			StepState = EStepState::Initialize;
			return;
		}
		break;
	case EScenarioState::FastForword:
		stepEvent = ScenarioEvent_cpp[currentScene_cpp].Step[currentStep_cpp];
		//start
		InitializeStep(defaultStepContext);

		for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
		{
			if (scenarioActor)
			{
				actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
				scenarioActor->InitializeStep(actorStepContext);
			}
		}

		//end
		EndStep(defaultStepContext);

		for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
		{
			if (scenarioActor)
			{
				actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
				scenarioActor->EndStep(actorStepContext);
			}
		}

		//next
		NextStep(defaultStepContext);

		for (AMlineScenarioActorBase* scenarioActor : stepEvent.InteractionActor.IntaractionActor)
		{
			if (scenarioActor)
			{
				actorStepContext = ConstructActorStepContext(stepEvent.InteractionActor);
				scenarioActor->NextStep(actorStepContext);
			}
		}

		GetNextStep(&currentScene_cpp, &currentStep_cpp);

		//return
		if (currentScene_cpp == targetScene && currentStep_cpp == targetStep)
		{
			ScenarioState = EScenarioState::Play;
			StepState = EStepState::Initialize;
			return;
		}
		break;
	default:
		break;
	}

}


void AMlineScenarioManagerBase::Rewind(int scene, int step)
{
	targetScene = scene;
	targetStep = scene;
	ScenarioState = EScenarioState::Rewind;
}
void AMlineScenarioManagerBase::FastForword(int scene, int step)
{

	targetScene = scene;
	targetStep = step;
	ScenarioState = EScenarioState::FastForword;
}
void AMlineScenarioManagerBase::StepEnd()
{
	StepState = EStepState::End;
}
void AMlineScenarioManagerBase::ShiftStep_Implementation(int scene, int step)
{
	//scene과 step을 하나의 int 로 만들어서 크기 비교.
	int current = currentScene_cpp * 100 + currentStep_cpp;
	int target = scene * 100 + step;

	if (current > target)
	{
		Rewind(scene, step);
	}
	else if (current < target)
	{
		FastForword(scene, step);
	}
	else
	{
		StepState = EStepState::Initialize;
	}
}
void AMlineScenarioManagerBase::ShiftStepByName(FName name)
{

}
void AMlineScenarioManagerBase::JumpStep(int scene, int step)
{
	currentScene_cpp = scene;
	currentStep_cpp = step;

	for (int jumpScene = 0; jumpScene < currentScene_cpp; jumpScene++)
	{
		for (int jumpStep = 0; jumpStep < ScenarioEvent_cpp[jumpScene].Step.Num(); jumpStep++)
		{
			FStepEventData stepEvent = ScenarioEvent_cpp[jumpScene].Step[jumpStep];

			if (((ESceneEvent)stepEvent.SceneEventFlag & ESceneEvent::Interaction) != ESceneEvent::None)
			{
				auto interaction = stepEvent.InteractionActor.IntaractionActor;

				for (auto actor : interaction)
				{
					if (actor)
					{
						actor->JumpInteraction();
					}
				}
			}
		}
	}

	ScenarioStart();

}

void AMlineScenarioManagerBase::InitializeStep_Implementation(FDefaultStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FString isServer = (HasAuthority() ? "True" : "False");
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioManagerBase::InitializeStep_cpp_Implementation %d-%d %s"), scene, step, *isServer);
}
void AMlineScenarioManagerBase::StartStep_Implementation(FDefaultStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	FString isServer = (HasAuthority() ? "True" : "False");
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioManagerBase::StartStep_cpp_Implementation %d-%d %s"), scene, step, *isServer);
}
void AMlineScenarioManagerBase::StayStep_Implementation(FDefaultStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	//UE_LOG(LogTemp, Log, TEXT("AMlineScenarioManagerBase::StayStep_cpp_Implementation %d-%d"), scene, step);
}
void AMlineScenarioManagerBase::EndStep_Implementation(FDefaultStepContext context)
{

	int scene = context.scene;
	int step = context.step;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioManagerBase::EndStep_cpp_Implementation %d-%d"), scene, step);
}
void AMlineScenarioManagerBase::FinalizeStep_Implementation(FDefaultStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioManagerBase::FinalizeStep_Implementation %d-%d"), scene, step);
}
void AMlineScenarioManagerBase::NextStep_Implementation(FDefaultStepContext context)
{
	int scene = context.scene;
	int step = context.step;
	UE_LOG(LogTemp, Log, TEXT("AMlineScenarioManagerBase::NextStep_cpp_Implementation %d-%d"), scene, step);
}

void AMlineScenarioManagerBase::SetEventActors_cpp()
{
	scenarioActors_cpp.Empty();
	TArray<AActor*> scenarioActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMlineScenarioActorBase::StaticClass(), scenarioActors);
	for (auto scenarioActor : scenarioActors)
	{
		scenarioActors_cpp.Add(Cast<AMlineScenarioActorBase>(scenarioActor));
	}

}

void AMlineScenarioManagerBase::CallFunctionByName(UObject* object, FString FunctionData)
{
	const TCHAR* token[] = { TEXT(" ") };


	TArray<FString> outArr;
	FunctionData.ParseIntoArray(outArr, token, 1);
	if (outArr.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Object \"%s\" FunctionData\"%s\" Error, Check this "), *object->GetName(), *FunctionData);
		return;
	}

	FName FunctionName = FName(outArr[0]);
	UFunction* const bindFunction = object->GetClass()->FindFunctionByName(FunctionName);

	FOutputDeviceNull ar;
	if (bindFunction != nullptr)
	{
		bool callResult = object->CallFunctionByNameWithArguments(*FunctionData, ar, NULL, true);
		if (!callResult)
		{

			FString Args = FunctionData.Right(FunctionData.Len() - outArr[0].Len());
			UE_LOG(LogTemp, Error, TEXT("Object \"%s\" Function\"%s\" is Call FAIL Chech Argmants - %s"), *object->GetName(), *FunctionName.ToString(), *Args);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Object \"%s\" Function\"%s\" is NONE "), *object->GetName(), *FunctionName.ToString());
	}
}\
void AMlineScenarioManagerBase::GetNextStep(int32* scene, int32* step)
{
	(*step)++;
	if (ScenarioEvent_cpp.IsValidIndex((*scene)))
	{
		if (!ScenarioEvent_cpp[(*scene)].Step.IsValidIndex((*step)))
		{
			(*step) = 0;
			(*scene)++;
		}
	}
	if (ScenarioEvent_cpp.Num() <= (*scene))
	{
		UE_LOG(LogTemp, Warning, TEXT("scene : %d, step : %d scene over"), (*scene), (*step));
		(*scene) = MAX_int32;
		(*step) = MAX_int32;
	}
	//UE_LOG(LogTemp, Warning, TEXT("Next %d - %d"), (*scene), (*step));
}
void AMlineScenarioManagerBase::GetPreviousStep(int32* scene, int32* step)
{
	(*step)--;

	if (!ScenarioEvent_cpp[(*scene)].Step.IsValidIndex((*step)))
	{

		(*scene)--;
		if (ScenarioEvent_cpp.IsValidIndex((*scene)))
		{
			(*step) = ScenarioEvent_cpp[(*scene)].Step.Num() - 1;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%d - %d"), (*scene), (*step));
		}
	}
	if (ScenarioEvent_cpp.Num() <= (*scene))
	{
		UE_LOG(LogTemp, Warning, TEXT("scene : %d, step : %d scene over"), (*scene), (*step));

		(*scene) = MIN_int32;
		(*step) = MIN_int32;
	}
	//UE_LOG(LogTemp, Warning, TEXT("Prev %d - %d"), (*scene), (*step));


}
void AMlineScenarioManagerBase::CallScenarioEvent(int scene, int step)
{
	UE_LOG(LogTemp, Warning, TEXT("CallScenarioEvent_cpp %d - %d"), currentScene_cpp, currentStep_cpp);
	int tempScene = scene;
	int tempStep = step;
	FStepEventData stepEvent = ScenarioEvent_cpp[tempScene].Step[tempStep];



	if (((ESceneEvent)stepEvent.SceneEventFlag & ESceneEvent::Narration) != ESceneEvent::None)
	{
		CallNarration(stepEvent.Narration);
	}
	if (((ESceneEvent)stepEvent.SceneEventFlag & ESceneEvent::Move) != ESceneEvent::None)
	{
		CallMove(stepEvent.Move);
	}
	if (((ESceneEvent)stepEvent.SceneEventFlag & ESceneEvent::Fade) != ESceneEvent::None)
	{
		CallFade(stepEvent.Fade);
	}
	if (((ESceneEvent)stepEvent.SceneEventFlag & ESceneEvent::Interaction) != ESceneEvent::None)
	{
		CallInteraction(stepEvent.InteractionActor);
	}
	if (((ESceneEvent)stepEvent.SceneEventFlag & ESceneEvent::LoadLevel) != ESceneEvent::None)
	{
		CallLocaLevel(stepEvent.LoadLevel);
	}




}
int32 AMlineScenarioManagerBase::GetSkippedEndFlag(int scene, int step)
{
	FStepEventData stepEvent = ScenarioEvent_cpp[scene].Step[step];

	int32 endedFlag = 0;

	if ((stepEvent.SceneEventFlag & (int32)ESceneEvent::Fade) != 0 && stepEvent.Fade.bSkipEndCheck)
	{
		endedFlag |= (int32)ESceneEvent::Fade;
	}
	if ((stepEvent.SceneEventFlag & (int32)ESceneEvent::Interaction) != 0 && stepEvent.InteractionActor.bSkipEndCheck)
	{
		endedFlag |= (int32)ESceneEvent::Interaction;
	}
	if ((stepEvent.SceneEventFlag & (int32)ESceneEvent::LoadLevel) != 0 && stepEvent.LoadLevel.bSkipEndCheck)
	{
		endedFlag |= (int32)ESceneEvent::LoadLevel;
	}
	if ((stepEvent.SceneEventFlag & (int32)ESceneEvent::Move) != 0 && stepEvent.Move.bSkipEndCheck)
	{
		endedFlag |= (int32)ESceneEvent::Move;
	}
	if ((stepEvent.SceneEventFlag & (int32)ESceneEvent::Narration) != 0 && stepEvent.Narration.bSkipEndCheck)
	{
		endedFlag |= (int32)ESceneEvent::Narration;
	}

	return endedFlag;

}
FDefaultStepContext AMlineScenarioManagerBase::ConstructDefaultStepContext()
{
	FDefaultStepContext ResultContext;
	FStepEventData stepEventData = ScenarioEvent_cpp[currentScene_cpp].Step[currentStep_cpp];
	ResultContext.scene = currentScene_cpp;
	ResultContext.step = currentStep_cpp;
	ResultContext.name = stepEventData.StepName;
	return ResultContext;
}
FActorStepContext AMlineScenarioManagerBase::ConstructActorStepContext(FInteractionData actorInteractionData)
{
	FActorStepContext ResultContext;
	FStepEventData stepEventData = ScenarioEvent_cpp[currentScene_cpp].Step[currentStep_cpp];
	ResultContext.scene = currentScene_cpp;
	ResultContext.step = currentStep_cpp;
	ResultContext.name = stepEventData.StepName;
	ResultContext.tag = actorInteractionData.Tag;
	return ResultContext;
}
void AMlineScenarioManagerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMlineScenarioManagerBase, currentScene_cpp);
	DOREPLIFETIME(AMlineScenarioManagerBase, currentStep_cpp);
	DOREPLIFETIME(AMlineScenarioManagerBase, ScenarioState);
	DOREPLIFETIME(AMlineScenarioManagerBase, StepState);
	DOREPLIFETIME(AMlineScenarioManagerBase, EndedEventFlag);
}

