// Copyright Epic Games, Inc. All Rights Reserved.

#include "Siltarne.h"
#include "Modules/ModuleManager.h"
#include "UI/Slate/StyleContainers/StyleController.h"

class FSiltarneGameModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(FStyleController::GET_StyleSetName());
		FStyleController::Initialize();
	}

	virtual void ShutdownModule() override
	{
		FStyleController::Shutdown();
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE( FSiltarneGameModule, Siltarne, "Siltarne" );
 