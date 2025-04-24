// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "MlineLicense.h"
class FMlinePrivateCorePluginModule : public IModuleInterface
{
public:
	MlineLicense* license;
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
