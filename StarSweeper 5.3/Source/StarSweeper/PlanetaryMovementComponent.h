// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlanetaryMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class STARSWEEPER_API UPlanetaryMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(Blueprintcallable)
	void UpdateGravityDirection(const FVector& NewGravityDir);
	
	virtual bool FloorSweepTest(
		FHitResult& OutHit,
		const FVector& Start,
		const FVector& End,
		ECollisionChannel TraceChannel,
		const struct FCollisionShape& CollisionShape,
		const struct FCollisionQueryParams& Params,
		const struct FCollisionResponseParams& ResponseParam
	) const override; 
};
