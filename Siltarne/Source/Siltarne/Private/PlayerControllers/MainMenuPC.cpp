#include "PlayerControllers/MainMenuPC.h"

void AMainMenuPC::BeginPlay()
{
	Super::BeginPlay();

	SetShowMouseCursor(true);
	SetInputMode(FInputModeUIOnly());
}

