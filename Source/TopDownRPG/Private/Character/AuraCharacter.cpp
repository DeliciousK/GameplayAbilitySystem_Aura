// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacter.h"


AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void AAuraCharacter::BeginPlay()
{
	Super:BeginPlay();
	

}

void AAuraCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilitySystem();


}

void AAuraCharacter::OnRep_PlayerState()
{
	InitAbilitySystem();
}

void AAuraCharacter::InitAuraAbilityInfo()
{
	AAruaPlayerState* AuraPS = GetPlayerState<AAruaPlayerState>();
	check(AuraPS);
	AbilitySystemComponent = AuraPS->GetAbilitySystemComponent();
	AttributeSet = AuraPS->GetAttributeSet();
	AbilitySystemComponent->InitAbilityActorInfo(AuraPS, this);
	
	
}
