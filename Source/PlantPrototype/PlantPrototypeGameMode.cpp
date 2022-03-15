// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlantPrototypeGameMode.h"
#include "PlantPrototypePlayerController.h"
#include "PlantPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlantPrototypeGameMode::APlantPrototypeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APlantPrototypePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}