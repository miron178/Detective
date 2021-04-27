// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DetectiveHUD.generated.h"

UCLASS()
class ADetectiveHUD : public AHUD
{
	GENERATED_BODY()

public:
	ADetectiveHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

