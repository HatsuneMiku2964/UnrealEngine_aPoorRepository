// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/GameplayAbilitySystem/Characters/CppPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCppPlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
GAS_API UClass* Z_Construct_UClass_ACppPlayer();
GAS_API UClass* Z_Construct_UClass_ACppPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACppPlayer ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACppPlayer;
UClass* ACppPlayer::GetPrivateStaticClass()
{
	using TClass = ACppPlayer;
	if (!Z_Registration_Info_UClass_ACppPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CppPlayer"),
			Z_Registration_Info_UClass_ACppPlayer.InnerSingleton,
			StaticRegisterNativesACppPlayer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACppPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_ACppPlayer_NoRegister()
{
	return ACppPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACppPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameplayAbilitySystem/Characters/CppPlayer.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/CppPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability System Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/CppPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscReplicationMode_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/CppPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACppPlayer constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AscReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AscReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACppPlayer constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACppPlayer_Statics

// ********** Begin Class ACppPlayer Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACppPlayer_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACppPlayer, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACppPlayer_Statics::NewProp_AscReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACppPlayer_Statics::NewProp_AscReplicationMode = { "AscReplicationMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACppPlayer, AscReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscReplicationMode_MetaData), NewProp_AscReplicationMode_MetaData) }; // 3513395660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACppPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppPlayer_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppPlayer_Statics::NewProp_AscReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppPlayer_Statics::NewProp_AscReplicationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppPlayer_Statics::PropPointers) < 2048);
// ********** End Class ACppPlayer Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_ACppPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACppPlayer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACppPlayer, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppPlayer_Statics::ClassParams = {
	&ACppPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACppPlayer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACppPlayer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACppPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ACppPlayer_Statics::Class_MetaDataParams)
};
void ACppPlayer::StaticRegisterNativesACppPlayer()
{
}
UClass* Z_Construct_UClass_ACppPlayer()
{
	if (!Z_Registration_Info_UClass_ACppPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppPlayer.OuterSingleton, Z_Construct_UClass_ACppPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACppPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACppPlayer);
ACppPlayer::~ACppPlayer() {}
// ********** End Class ACppPlayer *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACppPlayer, ACppPlayer::StaticClass, TEXT("ACppPlayer"), &Z_Registration_Info_UClass_ACppPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppPlayer), 1538815705U) },
	};
}; // Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h__Script_GAS_3567382970{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_CppPlayer_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
