#include "UI/HUDs/MainMenuHUD.h"
#include "UI/Slate/Menus/SMainMenu.h"

void AMainMenuHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (GEngine && GEngine->GameViewport)
	{
		SAssignNew(m_MainMenu, SMainMenu).a_OwnerHUD(this);

		if (m_MainMenu)
		{
			GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(m_MainMenu.ToSharedRef()));

			m_MainMenu->SetVisibility(EVisibility::Visible);
		}
	}
}