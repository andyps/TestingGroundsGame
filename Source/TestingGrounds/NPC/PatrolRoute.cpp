// Fill out your copyright notice in the Description page of Project Settings.

#include "PatrolRoute.h"


// Sets default values for this component's properties
UPatrolRoute::UPatrolRoute()
{
	PrimaryComponentTick.bCanEverTick = false;
}

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}
