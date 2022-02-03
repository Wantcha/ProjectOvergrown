// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Overgrown : ModuleRules
{
	public Overgrown(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
