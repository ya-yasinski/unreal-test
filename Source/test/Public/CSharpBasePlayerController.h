// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CSharpBasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API ACSharpBasePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

public:
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    class UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    class UInputAction* MoveAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    class UInputAction* AttackAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    class UInputAction* InteractAction;

    void Move(const FInputActionValue& Value);
    void Attack(const FInputActionValue& Value);
    void Interact(const FInputActionValue& Value);
};
