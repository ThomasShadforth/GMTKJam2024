// Fill out your copyright notice in the Description page of Project Settings.


#include "GMTKJ_Player.h"

#include "GMTKJam_LevelCameraSystem.h"
#include "GMTKJam_PickupBase.h"
#include "GMTKJam_PlayerController.h"
#include "GrabObjectInterface.h"
#include "GrowShrinkInterface.h"
#include "Camera/CameraComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGMTKJ_Player::AGMTKJ_Player() :
sizeTierIndex(2)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator{0.f, 900.f, 0.f};
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	cameraBoom->TargetArmLength = 300.f;
	cameraBoom->SocketOffset = FVector{0, 0, 90};
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->bUsePawnControlRotation = false;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;
	
}

// Called when the game starts or when spawned
void AGMTKJ_Player::BeginPlay()
{
	Super::BeginPlay();

	levelCamera = Cast<AGMTKJam_LevelCameraSystem>(UGameplayStatics::GetActorOfClass(this, AGMTKJam_LevelCameraSystem::StaticClass()));
	
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
	ACharacter::Jump();
}

void AGMTKJ_Player::StopJump()
{
	ACharacter::StopJumping();
}

void AGMTKJ_Player::ChangeCameraLeft()
{
	if(levelCamera == nullptr) return;

	levelCamera->ChangeCameraLeft();
}

void AGMTKJ_Player::ChangeCameraRight()
{
	if(levelCamera == nullptr) return;

	levelCamera->ChangeCameraRight();
}

void AGMTKJ_Player::GrabOrDropObject()
{
	if(bIsHoldingObject)
	{
		DropObject();
	} else
	{
		GrabObject();
	}
}

void AGMTKJ_Player::GrabObject()
{
	UE_LOG(LogTemp, Warning, TEXT("STARTING GRAB"));
	
	//Draw shape trace to check for object
	TArray<FHitResult> hitObjects;
	FVector traceStart = GetActorLocation() + (GetActorForwardVector() * 80.f);
	FVector traceEnd = traceStart + FVector(0,0, -100.f);
	TArray<AActor*> ignoredActors;
	ignoredActors.Add(this);
	
	UKismetSystemLibrary::SphereTraceMulti(this, traceStart, traceEnd, 40.f, TraceTypeQuery1, false, ignoredActors,
		EDrawDebugTrace::ForDuration, hitObjects, true);

	if(hitObjects.Num() != 0)
	{
		for (auto hitObject : hitObjects)
		{
			if(UKismetSystemLibrary::DoesImplementInterface(hitObject.GetActor(), UGrabObjectInterface::StaticClass()))
			{
				//Break the loop, grab the object
				const USkeletalMeshSocket* handSocket = GetMesh()->GetSocketByName(FName("grabHandSocket"));

				if(handSocket)
				{
					heldObject = hitObject.GetActor();
					FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true);
					heldObject->AttachToComponent(GetMesh(), attachmentRules, FName("grabHandSocket"));
					
					IGrabObjectInterface::Execute_GrabObject(heldObject);
					bIsHoldingObject = true;
					break;
				}
			}
		}
	}
	
}

void AGMTKJ_Player::DropObject()
{
	//
	if(heldObject == nullptr) return;

	if(UKismetSystemLibrary::DoesImplementInterface(heldObject, UGrabObjectInterface::StaticClass())){
	
		const USkeletalMeshSocket* handSocket = GetMesh()->GetSocketByName(FName("grabHandSocket"));

		if(handSocket)
		{
			FDetachmentTransformRules detachmentRules(EDetachmentRule::KeepWorld, true);
			UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(heldObject->GetComponentByClass(UStaticMeshComponent::StaticClass()));

			if(mesh)
			{
				mesh->DetachFromComponent(detachmentRules);
			}
			heldObject->SetActorLocation(handSocket->GetSocketLocation(GetMesh()) + GetActorForwardVector() * 20.f);
			IGrabObjectInterface::Execute_DropObject(heldObject);
			heldObject = nullptr;
			bIsHoldingObject = false;
		}
		
	}
}

void AGMTKJ_Player::UseObject()
{
	if(heldObject == nullptr) return;

	UE_LOG(LogTemp, Warning, TEXT("USING HELD OBJECT"));

	//Check for base pickup class
	AGMTKJam_PickupBase* pickupObject = Cast<AGMTKJam_PickupBase>(heldObject);

	if(pickupObject)
	{
		if(pickupObject->GetIsGrowObject())
		{
			//Grow the player/object
			if(AActor* levelObject = GetLevelObject())
			{
				GrowShrinkLevelObject(levelObject, true);
			}else
			{
				GrowShrinkPlayer(true);
			}
			
		} else
		{
			//Shrink the player/object
			if(AActor* levelObject = GetLevelObject())
			{
				GrowShrinkLevelObject(levelObject, false);
			} else
			{
				GrowShrinkPlayer(false);
			}
		}
		
		
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("NOT A USABLE OBJECT!"));
	}
}

void AGMTKJ_Player::GrowShrinkPlayer(bool bShouldGrow)
{

	bool bObjectUsed = false;
	
	if(bShouldGrow)
	{
		if(sizeTierIndex == sizeTiers.Num() - 1)
		{
			//CANT GROW THE PLAYER ANYMORE, DO SOMETHING HERE
		} else
		{
			bObjectUsed = true;
			sizeTierIndex++;

			SetActorScale3D(sizeTiers[sizeTierIndex]);
		}
	} else
	{
		if(sizeTierIndex == 0)
		{
			//CANT SHRINK THE PLAYER ANYMORE, DO SOMETHING HERE
		} else
		{
			bObjectUsed = true;
			sizeTierIndex--;

			SetActorScale3D(sizeTiers[sizeTierIndex]);
		}
	}

	if(bObjectUsed)
	{
		heldObject->Destroy();
		heldObject = nullptr;
		bIsHoldingObject = false;
	}
}

void AGMTKJ_Player::GrowShrinkLevelObject(AActor* levelObject, bool bShouldGrow)
{
	IGrowShrinkInterface::Execute_GrowShrinkObject(levelObject, bShouldGrow);

	heldObject->Destroy();
	heldObject = nullptr;
	bIsHoldingObject = false;
}

AActor* AGMTKJ_Player::GetLevelObject()
{
	TArray<FHitResult> hitObjects;
	TArray<AActor*> ignoredActors;
	ignoredActors.Add(this);
	
	UKismetSystemLibrary::SphereTraceMulti(this, GetActorLocation(), GetActorLocation(), 80.f, TraceTypeQuery1, false,
		ignoredActors, EDrawDebugTrace::ForDuration, hitObjects, true);

	for(auto hitObject : hitObjects)
	{
		if(UKismetSystemLibrary::DoesImplementInterface(hitObject.GetActor(), UGrowShrinkInterface::StaticClass()))
		{
			return hitObject.GetActor();
		}
	}
	
	return nullptr;
}

void AGMTKJ_Player::PauseGame()
{
	AGMTKJam_PlayerController* pc = Cast<AGMTKJam_PlayerController>(GetController());

	if(pc)
	{
		pc->PauseGame();
		
	}
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

	//PlayerInputComponent->BindAxis("TurnRate", this, &AGMTKJ_Player::TurnAtRate);
	//PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	
	//PlayerInputComponent->BindAxis("LookUpRate", this, &AGMTKJ_Player::LookUpAtRate);
	//PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGMTKJ_Player::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AGMTKJ_Player::StopJump);

	PlayerInputComponent->BindAction("ChangeLevelCameraRight", IE_Pressed, this, &AGMTKJ_Player::ChangeCameraRight);
	PlayerInputComponent->BindAction("ChangeLevelCameraLeft", IE_Pressed, this, &AGMTKJ_Player::ChangeCameraLeft);

	PlayerInputComponent->BindAction("Grab", IE_Pressed, this, &AGMTKJ_Player::GrabOrDropObject);

	PlayerInputComponent->BindAction("UseObject", IE_Pressed, this, &AGMTKJ_Player::UseObject);

	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &AGMTKJ_Player::PauseGame);
	
}

