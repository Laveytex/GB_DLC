// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GB_DLC : ModuleRules
{
	public GB_DLC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "PakFile" });
		
	}
}
