// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OverwatchReHUD.generated.h"

UCLASS()
class AOverwatchReHUD : public AHUD
{
	GENERATED_BODY()

public:
	AOverwatchReHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

