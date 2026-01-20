// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/AttributeSets.h"

#ifdef GAS_AttributeSets_generated_h
#error "AttributeSets.generated.h already included, missing '#pragma once' in AttributeSets.h"
#endif
#define GAS_AttributeSets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UAttributeSets ***********************************************************
#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


struct Z_Construct_UClass_UAttributeSets_Statics;
GAS_API UClass* Z_Construct_UClass_UAttributeSets_NoRegister();

#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSets(); \
	friend struct ::Z_Construct_UClass_UAttributeSets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UAttributeSets_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttributeSets, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UAttributeSets_NoRegister) \
	DECLARE_SERIALIZER(UAttributeSets) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		NETFIELD_REP_END=MaxStamina	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UAttributeSets) \
public:


#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttributeSets(UAttributeSets&&) = delete; \
	UAttributeSets(const UAttributeSets&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSets); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSets) \
	NO_API virtual ~UAttributeSets();


#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_11_PROLOG
#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_INCLASS_NO_PURE_DECLS \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttributeSets;

// ********** End Class UAttributeSets *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_AttributeSets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
