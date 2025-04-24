/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"

class SBlueprintCoreTitle : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SBlueprintCoreTitle) {}
	SLATE_ATTRIBUTE(FText, Title)
	SLATE_ATTRIBUTE(FSlateBrush, IconBrush)
    SLATE_END_ARGS()
public:
	virtual ~SBlueprintCoreTitle() {}
public:
	void Construct(const FArguments& InArgs);
private:
	FText m_Title;
	FSlateBrush IconBrush;
};