#include "GameModes/LobbyGM.h"
#include "UI/HUDs/CombatHUD.h"

ALobbyGM::ALobbyGM()
{
	HUDClass = ACombatHUD::StaticClass();
}

