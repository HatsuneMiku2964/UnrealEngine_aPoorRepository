// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/GameplayAbilitySystem/Characters/MyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
GAS_API UClass* Z_Construct_UClass_AMyCharacter();
GAS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
GAS_API UClass* Z_Construct_UClass_UBasicAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyCharacter *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyCharacter;
UClass* AMyCharacter::GetPrivateStaticClass()
{
	using TClass = AMyCharacter;
	if (!Z_Registration_Info_UClass_AMyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyCharacter"),
			Z_Registration_Info_UClass_AMyCharacter.InnerSingleton,
			StaticRegisterNativesAMyCharacter,
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
	return Z_Registration_Info_UClass_AMyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameplayAbilitySystem/Characters/MyCharacter.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Ability System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability System Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicAttributes_MetaData[] = {
		{ "Category", "Ability System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attributes Sets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attributes Sets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscReplicationMode_MetaData[] = {
		{ "Category", "Ability System" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Characters/MyCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyCharacter constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicAttributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AscReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AscReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMyCharacter constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyCharacter_Statics

// ********** Begin Class AMyCharacter Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_BasicAttributes = { "BasicAttributes", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, BasicAttributes), Z_Construct_UClass_UBasicAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicAttributes_MetaData), NewProp_BasicAttributes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AscReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AscReplicationMode = { "AscReplicationMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AscReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscReplicationMode_MetaData), NewProp_AscReplicationMode_MetaData) }; // 3513395660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_BasicAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AscReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AscReplicationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
// ********** End Class AMyCharacter Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMyCharacter, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
}
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// ********** End Class AMyCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_MyCharacter_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 698059833U) },
	};
}; // Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_MyCharacter_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_MyCharacter_h__Script_GAS_1296123171{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_MyCharacter_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Characters_MyCharacter_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
