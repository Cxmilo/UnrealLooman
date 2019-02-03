// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CoopShooterGameMode.h"
#include "CoopShooterHUD.h"
#include "CoopShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoopShooterGameMode::ACoopShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACoopShooterHUD::StaticClass();
}
