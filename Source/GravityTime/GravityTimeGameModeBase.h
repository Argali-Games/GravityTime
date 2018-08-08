// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GravityTimeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GRAVITYTIME_API AGravityTimeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	FVector GravityDirection = FVector(0.f, 0.f, -1.f);
	
	float GravityForce = 10.f;

public:
	FVector GetGravityDirection() const;
	void SetGravityDirection(FVector NewGravityDirection);

	float GetGravityForce() const;
	void SetGravityForce(float NewGravityForce);
};
