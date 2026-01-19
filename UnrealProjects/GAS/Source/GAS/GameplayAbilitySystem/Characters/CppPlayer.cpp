// Fill out your copyright notice in the Description page of Project Settings.


#include "CppPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACppPlayer::ACppPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add the ability system component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent -> SetIsReplicated(true);
	AbilitySystemComponent -> SetReplicationMode(AscReplicationMode);
	
	// Set collision size
	GetCapsuleComponent() -> InitCapsuleSize(35.0f, 90.0f);
	
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	
	// Configure character movement
	GetCharacterMovement() -> bOrientRotationToMovement = true;
	GetCharacterMovement() -> RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	
	GetCharacterMovement() -> JumpZVelocity = 500.0f;
	GetCharacterMovement() -> AirControl = 0.35f;
	GetCharacterMovement() -> MaxWalkSpeed = 600.0f;
	GetCharacterMovement() -> MinAnalogWalkSpeed = 20.0f;
	GetCharacterMovement() -> BrakingDecelerationWalking = 2000.0f;
	GetCharacterMovement() -> BrakingDecelerationFalling = 1500.0f;
}

// Called when the game starts or when spawned
void ACppPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACppPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACppPlayer::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent -> InitAbilityActorInfo(this, this);
	}
}

void ACppPlayer::PossessedBy(AController* instigate_me_)
{
	Super::PossessedBy(instigate_me_);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent -> InitAbilityActorInfo(this, this);
	}
}

UAbilitySystemComponent* ACppPlayer::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

