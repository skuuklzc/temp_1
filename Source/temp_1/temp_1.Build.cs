// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class temp_1 : ModuleRules
{
	public temp_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
