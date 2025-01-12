// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Siltarne/Public/GameModes/MainMenuGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SILTARNE_API UClass* Z_Construct_UClass_AMainMenuGM();
	SILTARNE_API UClass* Z_Construct_UClass_AMainMenuGM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Siltarne();
// End Cross Module References
	void AMainMenuGM::StaticRegisterNativesAMainMenuGM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuGM);
	UClass* Z_Construct_UClass_AMainMenuGM_NoRegister()
	{
		return AMainMenuGM::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGM_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/MainMenuGM.h" },
		{ "ModuleRelativePath", "Public/GameModes/MainMenuGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGM_Statics::ClassParams = {
		&AMainMenuGM::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGM()
	{
		if (!Z_Registration_Info_UClass_AMainMenuGM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuGM.OuterSingleton, Z_Construct_UClass_AMainMenuGM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainMenuGM.OuterSingleton;
	}
	template<> SILTARNE_API UClass* StaticClass<AMainMenuGM>()
	{
		return AMainMenuGM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGM);
	AMainMenuGM::~AMainMenuGM() {}
	struct Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_GameModes_MainMenuGM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_GameModes_MainMenuGM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuGM, AMainMenuGM::StaticClass, TEXT("AMainMenuGM"), &Z_Registration_Info_UClass_AMainMenuGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuGM), 2643592096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_GameModes_MainMenuGM_h_2378078072(TEXT("/Script/Siltarne"),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_GameModes_MainMenuGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_GameModes_MainMenuGM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
