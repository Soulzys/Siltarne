#include "UI/Slate/Menus/SCombatMenu.h"
#include "UI/Slate/StyleContainers/GlobalStyleContainer.h"
#include "UI/Slate/StyleContainers/StyleController.h"
#include "UI/HUDS/CombatHUD.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SCombatMenu::Construct(const FArguments& InArgs)
{
	m_OwnerHUD = InArgs._a_OwnerHUD;

	const FGlobalStyleContainerStruct& _GlobalStyle = FStyleController::GET_GlobalStyleContainer();

	ChildSlot
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SBorder)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.BorderImage(&_GlobalStyle.m_EmptyBrush)
		.BorderBackgroundColor(FLinearColor::Black)
		.Padding(0.0f)
		[
			SNew(STextBlock)
			.Text(FText::FromString("TEST"))
			.Font(_GlobalStyle.m_LiberationMono_Font)
			.Justification(ETextJustify::Center)
			.ColorAndOpacity(_GlobalStyle.m_TextColorDefault)
		]
	];
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION