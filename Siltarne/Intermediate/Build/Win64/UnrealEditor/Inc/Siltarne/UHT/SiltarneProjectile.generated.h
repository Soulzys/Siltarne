// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SiltarneProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SILTARNE_SiltarneProjectile_generated_h
#error "SiltarneProjectile.generated.h already included, missing '#pragma once' in SiltarneProjectile.h"
#endif
#define SILTARNE_SiltarneProjectile_generated_h

#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_SPARSE_DATA
#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_ACCESSORS
#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASiltarneProjectile(); \
	friend struct Z_Construct_UClass_ASiltarneProjectile_Statics; \
public: \
	DECLARE_CLASS(ASiltarneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Siltarne"), NO_API) \
	DECLARE_SERIALIZER(ASiltarneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASiltarneProjectile(); \
	friend struct Z_Construct_UClass_ASiltarneProjectile_Statics; \
public: \
	DECLARE_CLASS(ASiltarneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Siltarne"), NO_API) \
	DECLARE_SERIALIZER(ASiltarneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASiltarneProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASiltarneProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASiltarneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASiltarneProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASiltarneProjectile(ASiltarneProjectile&&); \
	NO_API ASiltarneProjectile(const ASiltarneProjectile&); \
public: \
	NO_API virtual ~ASiltarneProjectile();


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASiltarneProjectile(ASiltarneProjectile&&); \
	NO_API ASiltarneProjectile(const ASiltarneProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASiltarneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASiltarneProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASiltarneProjectile) \
	NO_API virtual ~ASiltarneProjectile();


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_12_PROLOG
#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_SPARSE_DATA \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_RPC_WRAPPERS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_ACCESSORS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_INCLASS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_SPARSE_DATA \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_ACCESSORS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SILTARNE_API UClass* StaticClass<class ASiltarneProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
