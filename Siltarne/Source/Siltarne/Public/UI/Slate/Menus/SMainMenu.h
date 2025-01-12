#pragma once

#include "SlateBasics.h"

class AMainMenuHUD;

class SILTARNE_API SMainMenu : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SMainMenu) {}

	SLATE_ARGUMENT(TWeakObjectPtr<AMainMenuHUD>, a_OwnerHUD)

	SLATE_END_ARGS()

public:

	FORCEINLINE virtual bool SupportsKeyboardFocus() const override { return true; }

	void Construct(const FArguments& InArgs);

private:

	FReply OnPlayGameButtonClicked();

private:

	TWeakObjectPtr<AMainMenuHUD> m_OwnerHUD = nullptr;

	// Widgets
	//
	TSharedPtr<SButton> m_PlayGame_Button = nullptr;
};
