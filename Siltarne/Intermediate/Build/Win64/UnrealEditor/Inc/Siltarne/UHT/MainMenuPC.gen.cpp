// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Siltarne/Public/PlayerControllers/MainMenuPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuPC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SILTARNE_API UClass* Z_Construct_UClass_AMainMenuPC();
	SILTARNE_API UClass* Z_Construct_UClass_AMainMenuPC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Siltarne();
// End Cross Module References
	void AMainMenuPC::StaticRegisterNativesAMainMenuPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuPC);
	UClass* Z_Construct_UClass_AMainMenuPC_NoRegister()
	{
		return AMainMenuPC::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerControllers/MainMenuPC.h" },
		{ "ModuleRelativePath", "Public/PlayerControllers/MainMenuPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuPC_Statics::ClassParams = {
		&AMainMenuPC::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuPC()
	{
		if (!Z_Registration_Info_UClass_AMainMenuPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuPC.OuterSingleton, Z_Construct_UClass_AMainMenuPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuPC.OuterSingleton;
	}
	template<> SILTARNE_API UClass* StaticClass<AMainMenuPC>()
	{
		return AMainMenuPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuPC);
	AMainMenuPC::~AMainMenuPC() {}
	struct Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_PlayerControllers_MainMenuPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_PlayerControllers_MainMenuPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuPC, AMainMenuPC::StaticClass, TEXT("AMainMenuPC"), &Z_Registration_Info_UClass_AMainMenuPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuPC), 3394598802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_PlayerControllers_MainMenuPC_h_4127826321(TEXT("/Script/Siltarne"),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_PlayerControllers_MainMenuPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_PlayerControllers_MainMenuPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
