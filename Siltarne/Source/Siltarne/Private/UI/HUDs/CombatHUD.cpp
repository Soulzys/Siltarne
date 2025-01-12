#include "UI/HUDs/CombatHUD.h"
#include "UI/Slate/Menus/SCombatMenu.h"

void ACombatHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (GEngine && GEngine->GameViewport)
	{
		SAssignNew(m_CombatMenu, SCombatMenu).a_OwnerHUD(this);

		if (m_CombatMenu)
		{
			GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(m_CombatMenu.ToSharedRef()));

			m_CombatMenu->SetVisibility(EVisibility::Visible);
		}
	}
}