// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSharpBaseCharacter.h"
#include "CSharpBasePlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API ACSharpBasePlayerCharacter : public ACSharpBaseCharacter
{
	GENERATED_BODY()
	
	UFUNCTION()
	void EquipWeapon(AWeapon* Weapon);

	UPROPERTY()
	AWeapon* CurrentWeapon;
};

