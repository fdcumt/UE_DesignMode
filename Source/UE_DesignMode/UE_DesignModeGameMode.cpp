// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE_DesignModeGameMode.h"
#include "UE_DesignModeHUD.h"
#include "UE_DesignModeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_DesignModeGameMode::AUE_DesignModeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE_DesignModeHUD::StaticClass();
}
