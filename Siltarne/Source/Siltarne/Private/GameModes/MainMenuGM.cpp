#include "GameModes/MainMenuGM.h"
#include "UI/HUDs/MainMenuHUD.h"
#include "PlayerControllers/MainMenuPC.h"

AMainMenuGM::AMainMenuGM()
{
	HUDClass              = AMainMenuHUD::StaticClass() ;
	PlayerControllerClass = AMainMenuPC ::StaticClass() ;
}