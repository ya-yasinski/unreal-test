// Fill out your copyright notice in the Description page of Project Settings.


#include "CSharpBasePlayerCharacter.h"

void ACSharpBasePlayerCharacter::EquipWeapon(AWeapon* Weapon)
{
    if (Weapon)
    {
        CurrentWeapon = Weapon;
        Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("WeaponSocket"));
    }
}