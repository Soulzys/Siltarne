// Copyright Epic Games, Inc. All Rights Reserved.

#include "SiltarneGameMode.h"
#include "SiltarneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASiltarneGameMode::ASiltarneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
