// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LucioHUD.generated.h"

/**
 * 
 */
UCLASS()
class ALucioHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	ALucioHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};
