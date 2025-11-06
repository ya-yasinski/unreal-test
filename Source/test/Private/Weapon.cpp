// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

void AWeapon::PickUp(APawn* InstigatorPawn)
{
    Super::PickUp(InstigatorPawn);
    UE_LOG(LogTemp, Warning, TEXT("Weapon equipped!"));
}