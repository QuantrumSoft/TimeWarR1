// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TimeWar1GameMode.h"
#include "TimeWar1HUD.h"
#include "TimeWar1Character.h"
#include "UObject/ConstructorHelpers.h"

ATimeWar1GameMode::ATimeWar1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATimeWar1HUD::StaticClass();
}
