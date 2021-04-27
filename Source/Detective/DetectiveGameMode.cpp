// Copyright Epic Games, Inc. All Rights Reserved.

#include "DetectiveGameMode.h"
#include "DetectiveHUD.h"
#include "DetectiveCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADetectiveGameMode::ADetectiveGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADetectiveHUD::StaticClass();
}
