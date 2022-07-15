// Copyright Epic Games, Inc. All Rights Reserved.

#include "TD_DemoGameMode.h"
#include "TD_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATD_DemoGameMode::ATD_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
