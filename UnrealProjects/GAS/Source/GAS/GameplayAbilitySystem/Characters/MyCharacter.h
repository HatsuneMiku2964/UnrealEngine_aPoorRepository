// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "MyCharacter.generated.h"

UCLASS()
class GAS_API AMyCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()	
public:
	// Sets default values for this character's properties
	AMyCharacter();
	
	// Ability System Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System")
	UAbilitySystemComponent* AbilitySystemComponent;
	
	// Attributes Sets
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System")
	class UBasicAttributes* BasicAttributes;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability System")
	EGameplayEffectReplicationMode AscReplicationMode = EGameplayEffectReplicationMode::Mixed;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Override PossessedBy to initialize the Ability System Component
	virtual void PossessedBy(AController* NewController) override;
	
	// Override OnRep_PlayerState to initialize the Ability System Component for clients
	virtual void OnRep_PlayerState() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	// Implement GetAbilitySystemComponent from IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
