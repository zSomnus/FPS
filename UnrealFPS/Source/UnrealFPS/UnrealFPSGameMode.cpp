// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealFPSGameMode.h"
// #include "UnrealFPSHUD.h"
#include "LucioHUD.h"
#include "UnrealFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealFPSGameMode::AUnrealFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/BP_Lucio"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALucioHUD::StaticClass();
}
