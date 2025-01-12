// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSiltarne_init() {}
	SILTARNE_API UFunction* Z_Construct_UDelegateFunction_Siltarne_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Siltarne;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Siltarne()
	{
		if (!Z_Registration_Info_UPackage__Script_Siltarne.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Siltarne_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Siltarne",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC1CDA4B7,
				0x32CA0143,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Siltarne.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Siltarne.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Siltarne(Z_Construct_UPackage__Script_Siltarne, TEXT("/Script/Siltarne"), Z_Registration_Info_UPackage__Script_Siltarne, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1CDA4B7, 0x32CA0143));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
