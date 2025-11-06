// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	virtual void PickUp(APawn* InstigatorPawn) override;
};
