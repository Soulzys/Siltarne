// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Siltarne/SiltarneGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSiltarneGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SILTARNE_API UClass* Z_Construct_UClass_ASiltarneGameMode();
	SILTARNE_API UClass* Z_Construct_UClass_ASiltarneGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Siltarne();
// End Cross Module References
	void ASiltarneGameMode::StaticRegisterNativesASiltarneGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASiltarneGameMode);
	UClass* Z_Construct_UClass_ASiltarneGameMode_NoRegister()
	{
		return ASiltarneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASiltarneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASiltarneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASiltarneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SiltarneGameMode.h" },
		{ "ModuleRelativePath", "SiltarneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASiltarneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASiltarneGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASiltarneGameMode_Statics::ClassParams = {
		&ASiltarneGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASiltarneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASiltarneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASiltarneGameMode()
	{
		if (!Z_Registration_Info_UClass_ASiltarneGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASiltarneGameMode.OuterSingleton, Z_Construct_UClass_ASiltarneGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASiltarneGameMode.OuterSingleton;
	}
	template<> SILTARNE_API UClass* StaticClass<ASiltarneGameMode>()
	{
		return ASiltarneGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASiltarneGameMode);
	ASiltarneGameMode::~ASiltarneGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASiltarneGameMode, ASiltarneGameMode::StaticClass, TEXT("ASiltarneGameMode"), &Z_Registration_Info_UClass_ASiltarneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASiltarneGameMode), 2107113531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneGameMode_h_2763375585(TEXT("/Script/Siltarne"),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
