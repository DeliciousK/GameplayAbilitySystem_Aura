// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "../Interaction/EnemyInterface.h"
#include <TopDownRPG/TopDownRPG.h>
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNRPG_API AAuraEnemy : public AAuraCharacterBase,public IEnemyInterface
{
	GENERATED_BODY()
public:
	virtual void HighLightActor()override;
	virtual void UnHighLightActor()override;

	UPROPERTY(BlueprintReadOnly)
	bool bhighlighted = false;
};
