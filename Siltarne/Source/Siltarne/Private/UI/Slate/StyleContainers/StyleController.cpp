#include "UI/Slate/StyleContainers/StyleController.h"
#include "Slate/SlateGameResources.h"

TSharedPtr<FSlateStyleSet> FStyleController::m_ClassInstance = nullptr;

void FStyleController::Initialize()
{
	if (!m_ClassInstance.IsValid())
	{
		m_ClassInstance = CreateStyleSet();
		FSlateStyleRegistry::RegisterSlateStyle(*m_ClassInstance);
	}
}

void FStyleController::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*m_ClassInstance);
	ensure(m_ClassInstance.IsUnique());
	m_ClassInstance.Reset();
}

TSharedRef<FSlateStyleSet> FStyleController::CreateStyleSet()
{
	TSharedRef<FSlateStyleSet> _StyleRef = FSlateGameResources::New
	(
		FStyleController::GET_StyleSetName(), 
		"/Game/UI/Slate/Styles",
		"/Game/UI/Slate/Styles"
	);

	return _StyleRef;
}


// ***************   GETTERS   *************** // 
//
FName FStyleController::GET_StyleSetName()
{
	static FName _StyleSetName(TEXT("GlobalStyleController"));
	return _StyleSetName;
}

const ISlateStyle& FStyleController::GET_StyleSet()
{
	return *m_ClassInstance;
}

const FGlobalStyleContainerStruct& FStyleController::GET_GlobalStyleContainer()
{
	return FStyleController::GET_StyleSet().GetWidgetStyle<FGlobalStyleContainerStruct>("SWS_GlobalStyle");
}