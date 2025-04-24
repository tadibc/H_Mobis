/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "BlueprintCoreSettings.h"
#include "BlueprintCoreTypes.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Launch/Resources/Version.h"
#include "BlueprintCoreBlueprint.generated.h"

UCLASS()
class BLUEPRINTCORE_API UBlueprintCoreBlueprint : public UBlueprint
{
	GENERATED_BODY()
public:
	UBlueprintCoreBlueprint()
		: UBlueprint()
		, bReadOnly(false)
		, bAllowRenaming(true)
		, bSupportsGlobalVariables(true)
		, bSupportsLocalVariables(true)
		, bSupportsFunctions(true)
		, bSupportsMacros(true)
		, bSupportsDelegates(true)
		, bSupportsEventGraphs(true)
		, bSupportsAnimLayers(true)
		, bGraphAllowDeletion(true)
	{}
	virtual ~UBlueprintCoreBlueprint() {}
public:
	// Make the blueprint Read-Only
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bReadOnly : 1;
	// Allow renaming of blueprint nodes */
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bAllowRenaming : 1;
	// This blueprint supports global variables
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsGlobalVariables : 1;
	// This blueprint supports global variables
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsLocalVariables : 1;
	// This blueprint supports functions
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsFunctions : 1;
	// This blueprint supports macros
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsMacros : 1;
	// This blueprint supports delegates
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsDelegates : 1;
	// This blueprint supports event graphs
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsEventGraphs : 1;
	// This blueprint supports animation layers
	UPROPERTY(EditAnywhere, Category="Settings")
	uint8 bSupportsAnimLayers : 1;
	// Allow deletion of blueprint graphs */
	UPROPERTY(EditAnywhere, Category="Settings|Graphs")
	uint8 bGraphAllowDeletion : 1;
	UPROPERTY()
	FString KeyFileHash;
	UPROPERTY()
	FString KeyFileName;
public:
#if WITH_EDITOR
	bool IsUnlocked() const;
	bool UpdateKeyFile(TWeakObjectPtr<UBlueprintCoreKey> keyFile);
	bool ClearKeyFile();
	void ApplyDefaultFlags(uint32 flags);
	void UpdateBlueprint();
	bool HasKeyFile() const { return KeyFileHash.Len() > 0; }
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
#endif
public:
	virtual void Serialize(FArchive& Ar) override;
#if WITH_EDITOR
	/**
	* Returns true if this blueprint supports global variables
	*/
	virtual bool SupportsGlobalVariables() const override { return bSupportsGlobalVariables; }

	/**
	* Returns true if this blueprint supports global variables
	*/
	virtual bool SupportsLocalVariables() const override { return bSupportsLocalVariables; }

	/**
	* Returns true if this blueprint supports functions
	*/
	virtual bool SupportsFunctions() const override { return bSupportsFunctions; }

	/**
	* Returns true if this blueprint supports macros
	*/
	virtual bool SupportsMacros() const override { return bSupportsMacros; }

	/**
	* Returns true if this blueprint supports delegates
	*/
	virtual bool SupportsDelegates() const override { return bSupportsDelegates; }

	/**
	* Returns true if this blueprint supports event graphs
	*/
	virtual bool SupportsEventGraphs() const override { return bSupportsEventGraphs; }

	/**
	* Returns true if this blueprint supports animation layers
	*/
	virtual bool SupportsAnimLayers() const override { return bSupportsAnimLayers; }
protected:
	virtual void PostEditChangeProperty( struct FPropertyChangedEvent& PropertyChangedEvent) override;
#if ENGINE_MINOR_VERSION == 24
	virtual bool CanEditChange(const UProperty* InProperty) const override;
#else
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif
	
#endif
};

UCLASS(meta=(IgnoreClassThumbnail))
class BLUEPRINTCORE_API UBlueprintCoreBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	GENERATED_BODY()
};