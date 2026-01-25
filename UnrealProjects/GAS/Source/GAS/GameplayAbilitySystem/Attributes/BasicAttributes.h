// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BasicAttributes.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API UBasicAttributes : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	
	UBasicAttributes();
	
	// HP Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_HP)
	FGameplayAttributeData HP = 100.f;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributes, HP);
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Max_HP)
	FGameplayAttributeData Max_HP = 100.f;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributes, Max_HP);
	
	// Stamina Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina = 100.f;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributes, Stamina);
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Max_Stamina)
	FGameplayAttributeData Max_Stamina = 100.f;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributes, Max_Stamina);
	
public:
	UFUNCTION()
	void OnRep_HP(const FGameplayAttributeData& OldHP) const {
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributes, HP, OldHP)
	}
	UFUNCTION()
	void OnRep_Max_HP(const FGameplayAttributeData& OldMaxHP) const {
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributes, Max_HP, OldMaxHP)
	}
	UFUNCTION()
	void OnRep_Stamina(const FGameplayAttributeData& OldStamina) const {
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributes, Stamina, OldStamina)
	}
	UFUNCTION()
	void OnRep_Max_Stamina(const FGameplayAttributeData& OldMaxStamina) const {
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributes, Max_Stamina, OldMaxStamina)
	}
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
