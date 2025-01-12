#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "GlobalStyleContainer.generated.h"

//struct FSlateWidgetStyle;

USTRUCT()
struct FGlobalStyleContainerStruct : public FSlateWidgetStyle
{
	GENERATED_BODY()

public:

	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	virtual const FName GetTypeName() const override;
	static const FGlobalStyleContainerStruct& GetDefault();

public:
	// Xinote - we could have the GetTypeName() function reworked as the one in FSlateWidgetStyle and therefore get rid of this class member variable.
	static const FName TypeName;

	// Brushes
	UPROPERTY(EditAnywhere, Category = "Brushes", meta = (DisplayName = "Empty Brush")) FSlateBrush m_EmptyBrush; // Used as a white brush to dynamically set any color on top

	// Colors
	UPROPERTY(EditAnywhere, Category = "Colors", meta = (DisplayName = "Text Color Default")) FSlateColor m_TextColorDefault;

	// Fonts
	UPROPERTY(EditAnywhere, Category = "Fonts", meta = (DisplayName = "Liberation Mono")) FSlateFontInfo m_LiberationMono_Font;
};



UCLASS()
class SILTARNE_API UGlobalStyleContainer : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public: 

	virtual const FSlateWidgetStyle* const GetStyle() const override;

public:

	UPROPERTY(EditAnywhere, Category = "Slate Styles", meta = (ShowOnlyInnerProperties)) FGlobalStyleContainerStruct m_GlobalContainerStruct;	
};
