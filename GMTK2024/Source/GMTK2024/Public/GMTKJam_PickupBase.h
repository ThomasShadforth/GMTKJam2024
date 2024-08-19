// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GrabObjectInterface.h"
#include "GameFramework/Actor.h"
#include "GMTKJam_PickupBase.generated.h"

UCLASS()
class GMTK2024_API AGMTKJam_PickupBase : public AActor, public IGrabObjectInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGMTKJam_PickupBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* mesh;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GrabObject_Implementation() override;

	virtual void DropObject_Implementation() override;

	UFUNCTION(BlueprintImplementableEvent)
	void UsePickupObject(AActor* recipientActor);
	
};
