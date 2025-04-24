/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "BlueprintCoreTypes.h"

class UBlueprintCoreBlueprint;

class SBlueprintSecurityWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SBlueprintSecurityWindow) {}
	SLATE_ATTRIBUTE(UBlueprintCoreBlueprint*, BlueprintAsset)
    SLATE_END_ARGS()
public:
	virtual ~SBlueprintSecurityWindow();
public:
	void Construct(const FArguments& InArgs);
	TWeakObjectPtr<UBlueprintCoreKey> GetSelectedKeyFile() const { return m_SelectedKeyFile;}
private:
	FDelegateHandle m_HandleNewKeyFiles;
	TArray<TWeakObjectPtr<UBlueprintCoreKey>> Array;
	TSharedPtr<SComboBox<TWeakObjectPtr<class UBlueprintCoreKey>>> m_SelectKeyFileBox;
	TWeakObjectPtr<UBlueprintCoreKey> m_SelectedKeyFile;
	UBlueprintCoreBlueprint* m_BlueprintAsset;
};