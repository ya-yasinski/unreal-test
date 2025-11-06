// Fill out your copyright notice in the Description page of Project Settings.

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CSharpBasePlayerController.h"

void ACSharpBasePlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
        ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }
}

void ACSharpBasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACSharpBasePlayerController::Move);
        EIC->BindAction(AttackAction, ETriggerEvent::Started, this, &ACSharpBasePlayerController::Attack);
        EIC->BindAction(InteractAction, ETriggerEvent::Started, this, &ACSharpBasePlayerController::Interact);
    }
}

void ACSharpBasePlayerController::Move(const FInputActionValue& Value)
{
    FVector2D MoveVector = Value.Get<FVector2D>();
    if (APawn* ControlledPawn = GetPawn())
    {
        ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector(), MoveVector.Y);
        ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), MoveVector.X);
    }
}

void ACSharpBasePlayerController::Attack(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Attack pressed"));
}

void ACSharpBasePlayerController::Interact(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("Interact pressed"));
}