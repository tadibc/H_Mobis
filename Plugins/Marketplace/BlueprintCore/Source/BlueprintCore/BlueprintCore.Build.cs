// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintCore : ModuleRules
{
	public BlueprintCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/BlueprintCorePCH.h";

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"UMG",
			}
		);


		PrivateDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Projects",
				"InputCore",
			}
		);

		if (Target.Type == TargetType.Editor)
		{
			PublicDependencyModuleNames.AddRange(
				new[]
				{
					"AssetTools",
					"BlueprintGraph",
					"UnrealEd",
				}
			);
		}
		
        if (Target.Version.MinorVersion >= 26 || Target.Version.MajorVersion == 5)
        {
            PublicDependencyModuleNames.Add("DeveloperSettings");
        }
    }
}
