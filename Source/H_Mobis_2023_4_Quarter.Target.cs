// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class H_Mobis_2023_4_QuarterTarget : TargetRules
{
	public H_Mobis_2023_4_QuarterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "H_Mobis_2023_4_Quarter" } );
	}
}
