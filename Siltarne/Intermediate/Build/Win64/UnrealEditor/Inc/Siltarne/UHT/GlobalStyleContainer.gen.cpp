// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Siltarne/Public/UI/Slate/StyleContainers/GlobalStyleContainer.h"
#include "SlateCore/Public/Fonts/SlateFontInfo.h"
#include "SlateCore/Public/Styling/SlateBrush.h"
#include "SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalStyleContainer() {}
// Cross Module References
	SILTARNE_API UClass* Z_Construct_UClass_UGlobalStyleContainer();
	SILTARNE_API UClass* Z_Construct_UClass_UGlobalStyleContainer_NoRegister();
	SILTARNE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalStyleContainerStruct();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_Siltarne();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalStyleContainerStruct>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FGlobalStyleContainerStruct cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct;
class UScriptStruct* FGlobalStyleContainerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct, Z_Construct_UPackage__Script_Siltarne(), TEXT("GlobalStyleContainerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct.OuterSingleton;
}
template<> SILTARNE_API UScriptStruct* StaticStruct<FGlobalStyleContainerStruct>()
{
	return FGlobalStyleContainerStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_EmptyBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_EmptyBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_TextColorDefault_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_TextColorDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_LiberationMono_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_LiberationMono_Font;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//struct FSlateWidgetStyle;\n" },
		{ "ModuleRelativePath", "Public/UI/Slate/StyleContainers/GlobalStyleContainer.h" },
		{ "ToolTip", "struct FSlateWidgetStyle;" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalStyleContainerStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_EmptyBrush_MetaData[] = {
		{ "Category", "Brushes" },
		{ "Comment", "// Brushes\n" },
		{ "DisplayName", "Empty Brush" },
		{ "ModuleRelativePath", "Public/UI/Slate/StyleContainers/GlobalStyleContainer.h" },
		{ "ToolTip", "Brushes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_EmptyBrush = { "m_EmptyBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalStyleContainerStruct, m_EmptyBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_EmptyBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_EmptyBrush_MetaData)) }; // 608192703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_TextColorDefault_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Colors\n" },
		{ "DisplayName", "Text Color Default" },
		{ "ModuleRelativePath", "Public/UI/Slate/StyleContainers/GlobalStyleContainer.h" },
		{ "ToolTip", "Colors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_TextColorDefault = { "m_TextColorDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalStyleContainerStruct, m_TextColorDefault), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_TextColorDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_TextColorDefault_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_LiberationMono_Font_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "// Fonts\n" },
		{ "DisplayName", "Liberation Mono" },
		{ "ModuleRelativePath", "Public/UI/Slate/StyleContainers/GlobalStyleContainer.h" },
		{ "ToolTip", "Fonts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_LiberationMono_Font = { "m_LiberationMono_Font", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalStyleContainerStruct, m_LiberationMono_Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_LiberationMono_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_LiberationMono_Font_MetaData)) }; // 192883377
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_EmptyBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_TextColorDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewProp_m_LiberationMono_Font,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"GlobalStyleContainerStruct",
		sizeof(FGlobalStyleContainerStruct),
		alignof(FGlobalStyleContainerStruct),
		Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalStyleContainerStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct.InnerSingleton, Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct.InnerSingleton;
	}
	void UGlobalStyleContainer::StaticRegisterNativesUGlobalStyleContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalStyleContainer);
	UClass* Z_Construct_UClass_UGlobalStyleContainer_NoRegister()
	{
		return UGlobalStyleContainer::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalStyleContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_GlobalContainerStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_GlobalContainerStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalStyleContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalStyleContainer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "UI/Slate/StyleContainers/GlobalStyleContainer.h" },
		{ "ModuleRelativePath", "Public/UI/Slate/StyleContainers/GlobalStyleContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalStyleContainer_Statics::NewProp_m_GlobalContainerStruct_MetaData[] = {
		{ "Category", "Slate Styles" },
		{ "ModuleRelativePath", "Public/UI/Slate/StyleContainers/GlobalStyleContainer.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalStyleContainer_Statics::NewProp_m_GlobalContainerStruct = { "m_GlobalContainerStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGlobalStyleContainer, m_GlobalContainerStruct), Z_Construct_UScriptStruct_FGlobalStyleContainerStruct, METADATA_PARAMS(Z_Construct_UClass_UGlobalStyleContainer_Statics::NewProp_m_GlobalContainerStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalStyleContainer_Statics::NewProp_m_GlobalContainerStruct_MetaData)) }; // 4237979433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalStyleContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalStyleContainer_Statics::NewProp_m_GlobalContainerStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalStyleContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalStyleContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalStyleContainer_Statics::ClassParams = {
		&UGlobalStyleContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlobalStyleContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalStyleContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalStyleContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalStyleContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalStyleContainer()
	{
		if (!Z_Registration_Info_UClass_UGlobalStyleContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalStyleContainer.OuterSingleton, Z_Construct_UClass_UGlobalStyleContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGlobalStyleContainer.OuterSingleton;
	}
	template<> SILTARNE_API UClass* StaticClass<UGlobalStyleContainer>()
	{
		return UGlobalStyleContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalStyleContainer);
	UGlobalStyleContainer::~UGlobalStyleContainer() {}
	struct Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics::ScriptStructInfo[] = {
		{ FGlobalStyleContainerStruct::StaticStruct, Z_Construct_UScriptStruct_FGlobalStyleContainerStruct_Statics::NewStructOps, TEXT("GlobalStyleContainerStruct"), &Z_Registration_Info_UScriptStruct_GlobalStyleContainerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalStyleContainerStruct), 4237979433U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalStyleContainer, UGlobalStyleContainer::StaticClass, TEXT("UGlobalStyleContainer"), &Z_Registration_Info_UClass_UGlobalStyleContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalStyleContainer), 579662534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_3875464192(TEXT("/Script/Siltarne"),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_Slate_StyleContainers_GlobalStyleContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
