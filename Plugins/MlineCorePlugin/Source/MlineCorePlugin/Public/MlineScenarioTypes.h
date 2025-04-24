// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "MlineScenarioTypes.generated.h"

class AMlineScenarioActorBase;
UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class ESceneEvent : uint8
{
	None,
	Narration = 1 << 0,
	Move = 1 << 1,
	Fade = 1 << 2,
	Interaction = 1 << 3,
	LoadLevel = 1 << 4
};
ENUM_CLASS_FLAGS(ESceneEvent)

UENUM(BlueprintType)
enum class EScenarioState : uint8
{
	Stop,
	Play,
	Pause,
	Rewind,
	FastForword

};

UENUM(BlueprintType)
enum class EStepState : uint8
{
	Initialize,
	Start,
	Stay,
	End,
	Finalize,
	Next
};

UENUM(BlueprintType)
enum class EMoveTypeEunm : uint8
{
	Teleport,
	SplineMove
};

UENUM(BlueprintType)
enum class EMoveTargetEunm : uint8
{
	Player,
	Actor,
	All
};

UENUM(BlueprintType)
enum class EFadeTypeEunm : uint8
{
	FadeOut,
	FadeIn,
};

UENUM(BlueprintType)
enum class EInteractionCountTypeEunm : uint8
{
	All_Interaction,
	Count_Interaction
};

UENUM(BlueprintType)
enum class ELevelLoadTypeEunm : uint8
{
	OpenLevel,
	LoadLevel,
	UnLoadLevel
};
UENUM(BlueprintType)
enum class EPlayerType : uint8
{
	User,
	Admin
};

USTRUCT(BlueprintType)
struct FScenarioEventDataBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent")
		bool bSkipEndCheck;
};

USTRUCT(BlueprintType)
struct FNarrationData : public FScenarioEventDataBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Narration")
		TArray<FString> Narration_ID;
	//EditAnywhere
	//UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Narration", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "AudioComponent"))
};

USTRUCT(BlueprintType)
struct FMoveData : public FScenarioEventDataBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move")
		EMoveTargetEunm Move_Target = EMoveTargetEunm::Player;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move", meta = (EditCondition = "Move_Target != EMoveTargetEunm::Player", EditConditionHides))
		AActor* Move_Actor = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move")
		EMoveTypeEunm Move_Type = EMoveTypeEunm::Teleport;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move", meta = (EditCondition = "Move_Type == EMoveTypeEunm::Teleport", EditConditionHides))
		bool bIsFadeTeleport = true;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move", meta = (EditCondition = "Move_Type == EMoveTypeEunm::Teleport", EditConditionHides))
		AActor* Teleport_Point = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move", meta = (EditCondition = "Move_Type == EMoveTypeEunm::SplineMove", EditConditionHides))
		AActor* Spline_Actor = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move", meta = (EditCondition = "Move_Type == EMoveTypeEunm::SplineMove", EditConditionHides))
		float SplineTime = 0.f;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Move", meta = (EditCondition = "Move_Type == EMoveTypeEunm::SplineMove", EditConditionHides))
		bool bIsPawnSplineRotator = false;
};

USTRUCT(BlueprintType)
struct FFadeData : public FScenarioEventDataBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Fade")
		EFadeTypeEunm Fade_Type = EFadeTypeEunm::FadeOut;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Fade")
		float Fade_Time = 0.f;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Fade")
		FLinearColor Fade_Color;
};

USTRUCT(BlueprintType)
struct FInteractionData : public FScenarioEventDataBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Interaction")
		TArray<AMlineScenarioActorBase*> IntaractionActor;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Interaction")
		EInteractionCountTypeEunm Interaction_Count_Type = EInteractionCountTypeEunm::All_Interaction;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Interaction", meta = (EditCondition = "Interaction_Count_Type == EInteractionCountTypeEunm::Count_Interaction", EditConditionHides))
		int End_Count_Interaction = 1;

	UPROPERTY(BlueprintReadWrite, Category = "MlineScenarioEvent|Scene|Step|Interaction")
		int Interaction_Array_Num = 0;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|Interaction")
		FName Tag;
};

USTRUCT(BlueprintType)
struct FLoadLevelData : public FScenarioEventDataBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|LoadLevel")
		ELevelLoadTypeEunm Level_Type = ELevelLoadTypeEunm::OpenLevel;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|LoadLevel", meta = (EditCondition = "Level_Type == ELevelLoadTypeEunm::OpenLevel", EditConditionHides))
		FName Open_Level_Name;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step|LoadLevel", meta = (EditCondition = "Level_Type != ELevelLoadTypeEunm::OpenLevel", EditConditionHides))
		TArray<FName> Level_Name;
};

USTRUCT(BlueprintType)
struct FStepEventData
{
	GENERATED_BODY()
public:

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "MlineScenarioEvent|Scene|Step")
		FName StepName;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step", meta = (Bitmask, BitmaskEnum = ESceneEvent))
		int32 SceneEventFlag;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step", meta = (Editcondition = "SceneEventFlag & ESceneEvent::Narration", EditConditionHides))
		FNarrationData Narration;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step", meta = (Editcondition = "SceneEventFlag & ESceneEvent::Move", EditConditionHides))
		FMoveData Move;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step", meta = (Editcondition = "SceneEventFlag & ESceneEvent::Fade", EditConditionHides))
		FFadeData Fade;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step", meta = (Editcondition = "SceneEventFlag & ESceneEvent::Interaction", EditConditionHides))
		FInteractionData InteractionActor;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene|Step", meta = (Editcondition = "SceneEventFlag & ESceneEvent::LoadLevel", EditConditionHides))
		FLoadLevelData LoadLevel;

	//UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineEvent|Sound", meta = (UseComponentPicker, AllowAnyActor, AllowedClasses = "AudioComponent"))
	//	FComponentReference AudioComponent;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	float StartTime = 0.0f;

};

USTRUCT(BlueprintType)
struct FSceneEventData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "MlineScenarioEvent|Scene")
		FName SceneName;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "MlineScenarioEvent|Scene")
		TArray<FStepEventData> Step;

};

USTRUCT(BlueprintType)
struct FStepContextBase
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MlineScenarioSystem|Context")
		int scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MlineScenarioSystem|Context")
		int step;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MlineScenarioSystem|Context")
		FName name;
};

USTRUCT(BlueprintType)
struct FActorStepContext : public FStepContextBase
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MlineScenarioSystem|Context")
		FName tag;
};

USTRUCT(BlueprintType)
struct FDefaultStepContext : public FStepContextBase
{
	GENERATED_BODY()
public:
};