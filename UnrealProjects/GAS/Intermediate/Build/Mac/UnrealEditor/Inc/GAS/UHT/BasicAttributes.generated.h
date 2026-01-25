// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/Attributes/BasicAttributes.h"

#ifdef GAS_BasicAttributes_generated_h
#error "BasicAttributes.generated.h already included, missing '#pragma once' in BasicAttributes.h"
#endif
#define GAS_BasicAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UBasicAttributes *********************************************************
#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Max_Stamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_Max_HP); \
	DECLARE_FUNCTION(execOnRep_HP);


struct Z_Construct_UClass_UBasicAttributes_Statics;
GAS_API UClass* Z_Construct_UClass_UBasicAttributes_NoRegister();

#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicAttributes(); \
	friend struct ::Z_Construct_UClass_UBasicAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAS_API UClass* ::Z_Construct_UClass_UBasicAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasicAttributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS"), Z_Construct_UClass_UBasicAttributes_NoRegister) \
	DECLARE_SERIALIZER(UBasicAttributes) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HP=NETFIELD_REP_START, \
		Max_HP, \
		Stamina, \
		Max_Stamina, \
		NETFIELD_REP_END=Max_Stamina	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UBasicAttributes) \
public:


#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasicAttributes(UBasicAttributes&&) = delete; \
	UBasicAttributes(const UBasicAttributes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicAttributes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasicAttributes) \
	NO_API virtual ~UBasicAttributes();


#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_13_PROLOG
#define FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_INCLASS_NO_PURE_DECLS \
	FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasicAttributes;

// ********** End Class UBasicAttributes ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
