// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SiltarneCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SILTARNE_SiltarneCharacter_generated_h
#error "SiltarneCharacter.generated.h already included, missing '#pragma once' in SiltarneCharacter.h"
#endif
#define SILTARNE_SiltarneCharacter_generated_h

#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_SPARSE_DATA
#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_ACCESSORS
#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASiltarneCharacter(); \
	friend struct Z_Construct_UClass_ASiltarneCharacter_Statics; \
public: \
	DECLARE_CLASS(ASiltarneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Siltarne"), NO_API) \
	DECLARE_SERIALIZER(ASiltarneCharacter)


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASiltarneCharacter(); \
	friend struct Z_Construct_UClass_ASiltarneCharacter_Statics; \
public: \
	DECLARE_CLASS(ASiltarneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Siltarne"), NO_API) \
	DECLARE_SERIALIZER(ASiltarneCharacter)


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASiltarneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASiltarneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASiltarneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASiltarneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASiltarneCharacter(ASiltarneCharacter&&); \
	NO_API ASiltarneCharacter(const ASiltarneCharacter&); \
public: \
	NO_API virtual ~ASiltarneCharacter();


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASiltarneCharacter(ASiltarneCharacter&&); \
	NO_API ASiltarneCharacter(const ASiltarneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASiltarneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASiltarneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASiltarneCharacter) \
	NO_API virtual ~ASiltarneCharacter();


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_17_PROLOG
#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_SPARSE_DATA \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_RPC_WRAPPERS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_ACCESSORS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_INCLASS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_SPARSE_DATA \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_ACCESSORS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SILTARNE_API UClass* StaticClass<class ASiltarneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lopez_Documents_Siltarne_Game_Siltarne_Source_Siltarne_SiltarneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
