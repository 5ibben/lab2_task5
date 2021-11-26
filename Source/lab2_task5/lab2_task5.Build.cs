// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class lab2_task5 : ModuleRules
{
	public lab2_task5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
