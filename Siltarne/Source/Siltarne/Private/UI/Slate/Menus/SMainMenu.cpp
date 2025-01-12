#include "UI/Slate/Menus/SMainMenu.h"
#include "UI/Slate/StyleContainers/GlobalStyleContainer.h"
#include "UI/Slate/StyleContainers/StyleController.h"
#include "UI/HUDS/MainMenuHUD.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SMainMenu::Construct(const FArguments& InArgs)
{
	m_OwnerHUD = InArgs._a_OwnerHUD;

	const FGlobalStyleContainerStruct& _GlobalStyle = FStyleController::GET_GlobalStyleContainer();

	ChildSlot
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.BorderImage(&_GlobalStyle.m_EmptyBrush)
		.BorderBackgroundColor(FLinearColor::Black)
		.Padding(0.0f)
		[
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			.WidthOverride(300.0f)
			.HeightOverride(200.0f)
			[
				SAssignNew(m_PlayGame_Button, SButton)
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.ContentPadding(FMargin(0.0f, 10.0f, 0.0f, 5.0f))
				.OnClicked(this, &SMainMenu::OnPlayGameButtonClicked)
				[
					SNew(STextBlock)
					.Text(FText::FromString("Play game"))
					.Font(_GlobalStyle.m_LiberationMono_Font)
					.Justification(ETextJustify::Center)
					.ColorAndOpacity(_GlobalStyle.m_TextColorDefault)
				]
			]
		]
	];
}

FReply SMainMenu::OnPlayGameButtonClicked()
{
	if (m_OwnerHUD.IsValid() && m_OwnerHUD->GetWorld())
	{
		m_OwnerHUD->GetWorld()->ServerTravel("/Game/Levels/LobbyLevel");
	}
	
	return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION