// Copyright 2022 Dexter.Wan. All Rights Reserved. 
// EMail: 45141961@qq.com

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDTAesModule : public IModuleInterface
{
public:
	// 插件启动
	virtual void StartupModule() override;
	// 插件关闭
	virtual void ShutdownModule() override;
};
