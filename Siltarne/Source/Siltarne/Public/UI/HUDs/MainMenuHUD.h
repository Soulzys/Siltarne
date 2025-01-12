#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainMenuHUD.generated.h"

class SMainMenu;

UCLASS()
class SILTARNE_API AMainMenuHUD : public AHUD
{
	GENERATED_BODY()

public:

	virtual void PostInitializeComponents() override;

	TSharedPtr<SMainMenu> m_MainMenu = nullptr;
};