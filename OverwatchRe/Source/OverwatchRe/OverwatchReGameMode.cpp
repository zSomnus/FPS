// Copyright Epic Games, Inc. All Rights Reserved.

#include "OverwatchReGameMode.h"
#include "OverwatchReHUD.h"
#include "OverwatchReCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOverwatchReGameMode::AOverwatchReGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/BP_LucioCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOverwatchReHUD::StaticClass();
}
