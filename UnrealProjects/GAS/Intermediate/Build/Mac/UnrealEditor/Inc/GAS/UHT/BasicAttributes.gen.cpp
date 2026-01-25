// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/GameplayAbilitySystem/Attributes/BasicAttributes.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBasicAttributes() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GAS_API UClass* Z_Construct_UClass_UBasicAttributes();
GAS_API UClass* Z_Construct_UClass_UBasicAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBasicAttributes Function OnRep_HP ***************************************
struct Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics
{
	struct BasicAttributes_eventOnRep_HP_Parms
	{
		FGameplayAttributeData OldHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_HP constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_HP constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_HP Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::NewProp_OldHP = { "OldHP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributes_eventOnRep_HP_Parms, OldHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHP_MetaData), NewProp_OldHP_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::NewProp_OldHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::PropPointers) < 2048);
// ********** End Function OnRep_HP Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributes, nullptr, "OnRep_HP", 	Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::BasicAttributes_eventOnRep_HP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::BasicAttributes_eventOnRep_HP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributes_OnRep_HP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributes_OnRep_HP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributes::execOnRep_HP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HP(Z_Param_Out_OldHP);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributes Function OnRep_HP *****************************************

// ********** Begin Class UBasicAttributes Function OnRep_Max_HP ***********************************
struct Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics
{
	struct BasicAttributes_eventOnRep_Max_HP_Parms
	{
		FGameplayAttributeData OldMaxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Max_HP constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Max_HP constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Max_HP Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::NewProp_OldMaxHP = { "OldMaxHP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributes_eventOnRep_Max_HP_Parms, OldMaxHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHP_MetaData), NewProp_OldMaxHP_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::NewProp_OldMaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Max_HP Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributes, nullptr, "OnRep_Max_HP", 	Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::BasicAttributes_eventOnRep_Max_HP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::BasicAttributes_eventOnRep_Max_HP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributes::execOnRep_Max_HP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Max_HP(Z_Param_Out_OldMaxHP);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributes Function OnRep_Max_HP *************************************

// ********** Begin Class UBasicAttributes Function OnRep_Max_Stamina ******************************
struct Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics
{
	struct BasicAttributes_eventOnRep_Max_Stamina_Parms
	{
		FGameplayAttributeData OldMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Max_Stamina constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Max_Stamina constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Max_Stamina Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributes_eventOnRep_Max_Stamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStamina_MetaData), NewProp_OldMaxStamina_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::NewProp_OldMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Max_Stamina Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributes, nullptr, "OnRep_Max_Stamina", 	Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::BasicAttributes_eventOnRep_Max_Stamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::BasicAttributes_eventOnRep_Max_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributes::execOnRep_Max_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Max_Stamina(Z_Param_Out_OldMaxStamina);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributes Function OnRep_Max_Stamina ********************************

// ********** Begin Class UBasicAttributes Function OnRep_Stamina **********************************
struct Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics
{
	struct BasicAttributes_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Stamina constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Stamina constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Stamina Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicAttributes_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStamina_MetaData), NewProp_OldStamina_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::NewProp_OldStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Stamina Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasicAttributes, nullptr, "OnRep_Stamina", 	Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::BasicAttributes_eventOnRep_Stamina_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::BasicAttributes_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicAttributes::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
	P_NATIVE_END;
}
// ********** End Class UBasicAttributes Function OnRep_Stamina ************************************

// ********** Begin Class UBasicAttributes *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBasicAttributes;
UClass* UBasicAttributes::GetPrivateStaticClass()
{
	using TClass = UBasicAttributes;
	if (!Z_Registration_Info_UClass_UBasicAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BasicAttributes"),
			Z_Registration_Info_UClass_UBasicAttributes.InnerSingleton,
			StaticRegisterNativesUBasicAttributes,
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
	return Z_Registration_Info_UClass_UBasicAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasicAttributes_NoRegister()
{
	return UBasicAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasicAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HP Attributes\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HP Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_HP_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stamina Attributes\n" },
#endif
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Attributes/BasicAttributes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBasicAttributes constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max_HP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max_Stamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBasicAttributes constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_HP"), .Pointer = &UBasicAttributes::execOnRep_HP },
		{ .NameUTF8 = UTF8TEXT("OnRep_Max_HP"), .Pointer = &UBasicAttributes::execOnRep_Max_HP },
		{ .NameUTF8 = UTF8TEXT("OnRep_Max_Stamina"), .Pointer = &UBasicAttributes::execOnRep_Max_Stamina },
		{ .NameUTF8 = UTF8TEXT("OnRep_Stamina"), .Pointer = &UBasicAttributes::execOnRep_Stamina },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicAttributes_OnRep_HP, "OnRep_HP" }, // 4127881978
		{ &Z_Construct_UFunction_UBasicAttributes_OnRep_Max_HP, "OnRep_Max_HP" }, // 1512917316
		{ &Z_Construct_UFunction_UBasicAttributes_OnRep_Max_Stamina, "OnRep_Max_Stamina" }, // 3108528552
		{ &Z_Construct_UFunction_UBasicAttributes_OnRep_Stamina, "OnRep_Stamina" }, // 2656830658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBasicAttributes_Statics

// ********** Begin Class UBasicAttributes Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributes_Statics::NewProp_HP = { "HP", "OnRep_HP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributes, HP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributes_Statics::NewProp_Max_HP = { "Max_HP", "OnRep_Max_HP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributes, Max_HP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_HP_MetaData), NewProp_Max_HP_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributes_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributes, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicAttributes_Statics::NewProp_Max_Stamina = { "Max_Stamina", "OnRep_Max_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttributes, Max_Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_Stamina_MetaData), NewProp_Max_Stamina_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributes_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributes_Statics::NewProp_Max_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributes_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttributes_Statics::NewProp_Max_Stamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributes_Statics::PropPointers) < 2048);
// ********** End Class UBasicAttributes Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UBasicAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicAttributes_Statics::ClassParams = {
	&UBasicAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasicAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributes_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicAttributes_Statics::Class_MetaDataParams)
};
void UBasicAttributes::StaticRegisterNativesUBasicAttributes()
{
	UClass* Class = UBasicAttributes::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBasicAttributes_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBasicAttributes()
{
	if (!Z_Registration_Info_UClass_UBasicAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicAttributes.OuterSingleton, Z_Construct_UClass_UBasicAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasicAttributes.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UBasicAttributes::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_HP(TEXT("HP"));
	static FName Name_Max_HP(TEXT("Max_HP"));
	static FName Name_Stamina(TEXT("Stamina"));
	static FName Name_Max_Stamina(TEXT("Max_Stamina"));
	const bool bIsValid = true
		&& Name_HP == ClassReps[(int32)ENetFields_Private::HP].Property->GetFName()
		&& Name_Max_HP == ClassReps[(int32)ENetFields_Private::Max_HP].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_Max_Stamina == ClassReps[(int32)ENetFields_Private::Max_Stamina].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBasicAttributes"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBasicAttributes);
UBasicAttributes::~UBasicAttributes() {}
// ********** End Class UBasicAttributes ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h__Script_GAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicAttributes, UBasicAttributes::StaticClass, TEXT("UBasicAttributes"), &Z_Registration_Info_UClass_UBasicAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicAttributes), 4218113958U) },
	};
}; // Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h__Script_GAS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h__Script_GAS_2245119759{
	TEXT("/Script/GAS"),
	Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h__Script_GAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sakura_UnrealEngine_Gits_Repos_UnrealEngine_aPoorRepository_UnrealProjects_GAS_Source_GAS_GameplayAbilitySystem_Attributes_BasicAttributes_h__Script_GAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
