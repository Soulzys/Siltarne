// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Siltarne/Public/SiltarneGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSiltarneGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SILTARNE_API UClass* Z_Construct_UClass_USiltarneGameInstance();
	SILTARNE_API UClass* Z_Construct_UClass_USiltarneGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Siltarne();
// End Cross Module References
	DEFINE_FUNCTION(USiltarneGameInstance::execJoinServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USiltarneGameInstance::execCreateServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateServer();
		P_NATIVE_END;
	}
	void USiltarneGameInstance::StaticRegisterNativesUSiltarneGameInstance()
	{
		UClass* Class = USiltarneGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateServer", &USiltarneGameInstance::execCreateServer },
			{ "JoinServer", &USiltarneGameInstance::execJoinServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USiltarneGameInstance_CreateServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USiltarneGameInstance_CreateServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SiltarneGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USiltarneGameInstance_CreateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USiltarneGameInstance, nullptr, "CreateServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USiltarneGameInstance_CreateServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USiltarneGameInstance_CreateServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USiltarneGameInstance_CreateServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USiltarneGameInstance_CreateServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USiltarneGameInstance_JoinServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USiltarneGameInstance_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SiltarneGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USiltarneGameInstance_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USiltarneGameInstance, nullptr, "JoinServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USiltarneGameInstance_JoinServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USiltarneGameInstance_JoinServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USiltarneGameInstance_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USiltarneGameInstance_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USiltarneGameInstance);
	UClass* Z_Construct_UClass_USiltarneGameInstance_NoRegister()
	{
		return USiltarneGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USiltarneGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USiltarneGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Siltarne,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USiltarneGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USiltarneGameInstance_CreateServer, "CreateServer" }, // 2903095387
		{ &Z_Construct_UFunction_USiltarneGameInstance_JoinServer, "JoinServer" }, // 2240712011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USiltarneGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SiltarneGameInstance.h" },
		{ "ModuleRelativePath", "Public/SiltarneGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USiltarneGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USiltarneGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USiltarneGameInstance_Statics::ClassParams = {
		&USiltarneGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USiltarneGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USiltarneGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USiltarneGameInstance()
	{
		if (!Z_Registration_Info_UClass_USiltarneGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USiltarneGameInstance.OuterSingleton, Z_Construct_UClass_USiltarneGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USiltarneGameInstance.OuterSingleton;
	}
	template<> SILTARNE_API UClass* StaticClass<USiltarneGameInstance>()
	{
		return USiltarneGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USiltarneGameInstance);
	USiltarneGameInstance::~USiltarneGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_SiltarneGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_SiltarneGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USiltarneGameInstance, USiltarneGameInstance::StaticClass, TEXT("USiltarneGameInstance"), &Z_Registration_Info_UClass_USiltarneGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USiltarneGameInstance), 3066899908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_SiltarneGameInstance_h_1173375652(TEXT("/Script/Siltarne"),
		Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_SiltarneGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_Public_SiltarneGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
