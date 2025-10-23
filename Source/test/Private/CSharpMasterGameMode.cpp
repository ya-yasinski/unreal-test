// Fill out your copyright notice in the Description page of Project Settings.


#include "CSharpMasterGameMode.h"
#include "CSharpBasePlayerCharacter.h"
#include "CSharpBasePlayerController.h"

ACSharpMasterGameMode::ACSharpMasterGameMode()
{
    DefaultPawnClass = ACSharpBasePlayerCharacter::StaticClass();
    PlayerControllerClass = ACSharpBasePlayerController::StaticClass();
}
