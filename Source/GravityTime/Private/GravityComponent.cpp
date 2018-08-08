// Fill out your copyright notice in the Description page of Project Settings.

#include "GravityComponent.h"

// Sets default values for this component's properties
UGravityComponent::UGravityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UGravityComponent::BeginPlay()
{
	Super::BeginPlay();
	SetGravityDirectionAndForce();
	OwningActor = GetOwner();
	PhysicsObject = Cast<UStaticMeshComponent>(OwningActor->GetRootComponent());
}

void UGravityComponent::SetGravityDirectionAndForce()
{
	// TODO: Adjust to receive gravity from world
	AGameModeBase *GameMode = GetWorld()->GetAuthGameMode();
	GravityForce = 10.f;
	// GravityDirection = 
}

// Called every frame
void UGravityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// SetGravityDirectionAndForce();

	ApplyGravity();
}

void UGravityComponent::ApplyGravity()
{
	// TODO: Make this work
	PhysicsObject->AddForce(GravityDirection * GravityForce * 100, NAME_None, true);
}
