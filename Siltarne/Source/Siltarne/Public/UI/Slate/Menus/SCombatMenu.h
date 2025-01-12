#pragma once

#include "SlateBasics.h"

class ACombatHUD;

class SILTARNE_API SCombatMenu : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SCombatMenu) {}

	SLATE_ARGUMENT(TWeakObjectPtr<ACombatHUD>, a_OwnerHUD)

	SLATE_END_ARGS()

public:

	FORCEINLINE virtual bool SupportsKeyboardFocus() const override { return true; }

	void Construct(const FArguments& InArgs);

private:

	TWeakObjectPtr<ACombatHUD> m_OwnerHUD = nullptr;

};
