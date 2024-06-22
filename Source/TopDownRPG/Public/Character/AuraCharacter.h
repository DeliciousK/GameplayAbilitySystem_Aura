// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "GameFramework/CharactermovementComponent.h"
#include <Player/AruaPlayerState.h>
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNRPG_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void BeginPlay()override;
	virtual void PossessedBy(AController* NewController)override;
	virtual void OnRep_PlayerState()override;
private:
	void InitAuraAbilityInfo();

};
