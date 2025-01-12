#include "UI/Slate/StyleContainers/GlobalStyleContainer.h"

const FName FGlobalStyleContainerStruct::TypeName = FName(TEXT("FGlobalStyleContainerStruct"));

void FGlobalStyleContainerStruct::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	OutBrushes.Add(&m_EmptyBrush);
}

const FName FGlobalStyleContainerStruct::GetTypeName() const
{
	return TypeName;
}

const FGlobalStyleContainerStruct& FGlobalStyleContainerStruct::GetDefault()
{
	static FGlobalStyleContainerStruct _Default;
	return _Default;
}



const FSlateWidgetStyle* const UGlobalStyleContainer::GetStyle() const
{
	return static_cast<const FSlateWidgetStyle*>(&m_GlobalContainerStruct);
}