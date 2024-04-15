// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetaryMovementComponent.h"

void UPlanetaryMovementComponent::UpdateGravityDirection(const FVector& NewGravityDir)
{
	SetGravityDirection(NewGravityDir);
}
