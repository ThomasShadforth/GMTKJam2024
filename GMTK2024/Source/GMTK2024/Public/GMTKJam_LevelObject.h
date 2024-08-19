// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GrowShrinkInterface.h"
#include "GameFramework/Actor.h"
#include "GMTKJam_LevelObject.generated.h"

UCLASS()
class GMTK2024_API AGMTKJam_LevelObject : public AActor, public IGrowShrinkInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGMTKJam_LevelObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	//To do: add size tiers for object, and index
	UPROPERTY(EditDefaultsOnly)
	TArray<FVector> sizeTiers;

	int sizeTierIndex;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GrowShrinkObject_Implementation(bool bShouldGrow) override;
	
};
