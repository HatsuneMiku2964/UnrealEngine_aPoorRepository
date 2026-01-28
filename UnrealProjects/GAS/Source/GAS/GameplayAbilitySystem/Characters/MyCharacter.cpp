// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GAS/GameplayAbilitySystem/Attributes/BasicAttributes.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Create Ability System Component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent -> SetIsReplicated(true);
	AbilitySystemComponent -> SetReplicationMode(AscReplicationMode);
	
	// Configure Character Movement and Collision
	
		// Set size for collision capsule
		GetCapsuleComponent() -> InitCapsuleSize(35.0f, 90.0f);

		// Don't rotate when the controller rotates. Let that just affect the camera.
		bUseControllerRotationPitch = false;
		bUseControllerRotationYaw = false;
		bUseControllerRotationRoll = false;

		// Configure character movement
		GetCharacterMovement() -> bOrientRotationToMovement = true;
		GetCharacterMovement() -> RotationRate = FRotator(0.0f, 500.0f, 0.0f);

		GetCharacterMovement() -> JumpZVelocity = 500.f;
		GetCharacterMovement() -> AirControl = 0.35f;
		GetCharacterMovement() -> MaxWalkSpeed = 500.f;
		GetCharacterMovement() -> MinAnalogWalkSpeed = 20.f;
		GetCharacterMovement() -> BrakingDecelerationWalking = 2000.f;
		GetCharacterMovement() -> BrakingDecelerationFalling = 1500.0f;
	
	// End Configure Character Movement and Collision
	
	// Create Attribute Sets
	BasicAttributes = CreateDefaultSubobject<UBasicAttributes>(TEXT("BasicAttributes"));
	BasicAttributes -> 
}
// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacter::PossessedBy(AController* NewController)
{
	// Call the base class version first
	Super::PossessedBy(NewController);
	// Initialize the Ability System Component for the server
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent -> InitAbilityActorInfo(this, this);
	}
}

void AMyCharacter::OnRep_PlayerState()
{
	// Call the base class version first
	Super::OnRep_PlayerState();
	// Initialize the Ability System Component for the client
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent -> InitAbilityActorInfo(this, this);
	}
}

// Implement GetAbilitySystemComponent from IAbilitySystemInterface
UAbilitySystemComponent* AMyCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}