// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Siltarne/Public/UI/HUDs/MainMenuHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	SILTARNE_API UClass* Z_Construct_UClass_AMainMenuHUD();
	SILTARNE_API UClass* Z_Construct_UClass_AMainMenuHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Siltarne();
// End Cross Module References
	void AMainMenuHUD::StaticRegisterNativesAMainMenuHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuHUD);
	UClass* Z_Construct_UClass_AMainMenuHUD_NoRegister()
	{
		return AMainMenuHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUDs/MainMenuHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUDs/MainMenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuHUD_Statics::ClassParams = {
		&AMainMenuHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuHUD()
	{
		if (!Z_Registration_Info_UClass_AMainMenuHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuHUD.OuterSingleton, Z_Construct_UClass_AMainMenuHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuHUD.OuterSingleton;
	}
	template<> SILTARNE_API UClass* StaticClass<AMainMenuHUD>()
	{
		return AMainMenuHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuHUD);
	AMainMenuHUD::~AMainMenuHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_HUDs_MainMenuHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_HUDs_MainMenuHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuHUD, AMainMenuHUD::StaticClass, TEXT("AMainMenuHUD"), &Z_Registration_Info_UClass_AMainMenuHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuHUD), 4097962976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_HUDs_MainMenuHUD_h_1367264570(TEXT("/Script/Siltarne"),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_HUDs_MainMenuHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_UI_HUDs_MainMenuHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
