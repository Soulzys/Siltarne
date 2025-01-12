#pragma once

#include "SlateBasics.h"
#include "GlobalStyleContainer.h"

class SILTARNE_API FStyleController
{
public:

	static void Initialize();
	static void Shutdown();

	// *** GETTERS *** //
	//
	static FName GET_StyleSetName();
	static const ISlateStyle& GET_StyleSet();
	static const FGlobalStyleContainerStruct& GET_GlobalStyleContainer();

private:

	static TSharedRef<FSlateStyleSet> CreateStyleSet();

private:

	static TSharedPtr<FSlateStyleSet> m_ClassInstance;
};
