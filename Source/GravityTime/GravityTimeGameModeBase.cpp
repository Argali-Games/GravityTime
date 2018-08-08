// Fill out your copyright notice in the Description page of Project Settings.

#include "GravityTimeGameModeBase.h"

FVector AGravityTimeGameModeBase::GetGravityDirection() const
{
	return GravityDirection;
}

void AGravityTimeGameModeBase::SetGravityDirection(FVector NewGravityDirection)
{
	GravityDirection = NewGravityDirection;
}

float AGravityTimeGameModeBase::GetGravityForce() const
{
	return GravityForce;
}

void AGravityTimeGameModeBase::SetGravityForce(float NewGravityForce)
{
	GravityForce = NewGravityForce;
}
