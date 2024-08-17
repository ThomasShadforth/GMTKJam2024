// Fill out your copyright notice in the Description page of Project Settings.


#include "GMTKJ_Player.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AGMTKJ_Player::AGMTKJ_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator{0.f, 540.f, 0.f};
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = true;
	
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	cameraBoom->TargetArmLength = 300.f;
	cameraBoom->SocketOffset = FVector{0, 0, 90};
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->bUsePawnControlRotation = true;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;
	
}

// Called when the game starts or when spawned
void AGMTKJ_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGMTKJ_Player::MoveForward(float Value)
{
	if(Controller != nullptr && Value != 0)
	{
		const FRotator rotation = Controller->GetControlRotation();
		const FRotator yawRotation = FRotator(0, rotation.Yaw, 0);

		const FVector direction = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);

		AddMovementInput(direction, Value);
	}
}

void AGMTKJ_Player::MoveRight(float Value)
{
	const FRotator rotation = Controller->GetControlRotation();
	const FRotator yawRotation = FRotator(0, rotation.Yaw, 0);

	const FVector direction = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(direction, Value);
}

void AGMTKJ_Player::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * baseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AGMTKJ_Player::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * baseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AGMTKJ_Player::StartJump()
{
}

void AGMTKJ_Player::StopJump()
{
}

// Called every frame
void AGMTKJ_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGMTKJ_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AGMTKJ_Player::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGMTKJ_Player::MoveRight);

	PlayerInputComponent->BindAxis("TurnRate", this, &AGMTKJ_Player::TurnAtRate);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	
	PlayerInputComponent->BindAxis("LookUpRate", this, &AGMTKJ_Player::LookUpAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGMTKJ_Player::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AGMTKJ_Player::StopJump);
	
}

