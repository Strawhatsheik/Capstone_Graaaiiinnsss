// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BehaviorTree/BlackboardComponent.h" //Include the Blackboard
#include "BehaviorTree/BehaviorTreeComponent.h"//Include the Behaviour tree
#include "GameFramework/Controller.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "AIControllerC.generated.h"

/**
 * An AI controller to control the zombie cows
 */
UCLASS()
class MBS_GAME_API AAIControllerC : public AAIController
{
	GENERATED_BODY()
	
//Private components:
private:
	//Behaviour tree reference
	UBehaviorTreeComponent* BehaviorComp;

	//Blackboard reference
	UBlackboardComponent* BlackboardComp;

	//Public functions/components

public:
	//Constructor for the AI controller
	AAIControllerC();

	//Blackboard keys
	UPROPERTY(EditDefaultsOnly, Category = "AI")

	//This key is to hold the target for chase, in this case our player character
	FName BlackboardKey = "Target";

	//Executes when the controller posesses a pawn
	//Possess pawn function override
	virtual void OnPossess(APawn* Pawn) override;
	

	//Sets the 'sensed' target  as the 'Target' in Blackboard key
	void SetSeenTarget(APawn* Pawn);

	
};
