/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "KismetCompiler.h"
#include "AssetTypeActions/AssetTypeActions_Blueprint.h"
#include "KismetCompilerModule.h"

class IBlueprintCoreCompiler : public IBlueprintCompiler
{
public:
	virtual bool CanCompile(const UBlueprint* Blueprint)  override
	{
		return Cast<UBlueprint>(Blueprint) != nullptr;
	}
	virtual void Compile(UBlueprint* Blueprint, const FKismetCompilerOptions& CompileOptions, FCompilerResultsLog& Results)  override
	{
		if (Blueprint != nullptr)
		{
			FKismetCompilerContext Compiler(Blueprint, Results, CompileOptions);
			Compiler.Compile();
			check(Compiler.NewClass);
		}
	}

	virtual bool GetBlueprintTypesForClass(UClass* ParentClass, UClass*& OutBlueprintClass, UClass*& OutBlueprintGeneratedClass) const override;
};

class FAssetTypeActions_BlueprintBlueprintCore : public FAssetTypeActions_Blueprint
{
public:
public:
	virtual FText GetName() const override
	{
		return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_Blueprint2", "Blueprint BlueprintCore Class");
	}
	virtual UClass* GetSupportedClass() const override; 
	virtual FColor GetTypeColor() const override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	virtual TSharedPtr<class SWidget> GetThumbnailOverlay(const FAssetData& AssetData) const override;
};