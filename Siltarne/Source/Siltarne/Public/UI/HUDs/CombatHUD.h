#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CombatHUD.generated.h"

class SCombatMenu;

UCLASS()
class SILTARNE_API ACombatHUD : public AHUD
{
	GENERATED_BODY()
	
private:

	virtual void PostInitializeComponents() override;

	TSharedPtr<SCombatMenu> m_CombatMenu = nullptr;

};
