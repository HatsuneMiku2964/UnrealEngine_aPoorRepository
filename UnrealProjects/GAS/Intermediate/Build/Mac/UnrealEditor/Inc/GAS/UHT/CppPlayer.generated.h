// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CppPlayer.h"

#ifdef GAS_CppPlayer_generated_h
#error "CppPlayer.generated.h already included, missing '#pragma once' in CppPlayer.h"
#endif
#define GAS_CppPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACppPlayer ***************************************************************
struct Z_Construct_UClass_ACppPlayer_Statics;
GAS_API UClass* Z_Construct_UClass_ACppPlayer_NoRegister();

#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACppPlayer(); \
	friend struct ::Z_Construct_UClass_ACppPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_ACppPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ACppPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_ACppPlayer_NoRegister) \
	DECLARE_SERIALIZER(ACppPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACppPlayer*>(this); }


#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACppPlayer(ACppPlayer&&) = delete; \
	ACppPlayer(const ACppPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACppPlayer) \
	NO_API virtual ~ACppPlayer();


#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h_12_PROLOG
#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACppPlayer;

// ********** End Class ACppPlayer *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
