// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MLineSimulator : ModuleRules
{
	public MLineSimulator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Sockets", "Networking" });

		PrivateDependencyModuleNames.AddRange(new string[] {"CoreUObject", "Engine", "Slate", "SlateCore", "Sockets", "Networking" });
	}
}
