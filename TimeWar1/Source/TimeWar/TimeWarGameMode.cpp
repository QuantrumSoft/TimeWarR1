// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TimeWarGameMode.h"
#include "TimeWarHUD.h"
#include "TimeWarCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeWarGameMode::ATimeWarGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATimeWarHUD::StaticClass();
}
