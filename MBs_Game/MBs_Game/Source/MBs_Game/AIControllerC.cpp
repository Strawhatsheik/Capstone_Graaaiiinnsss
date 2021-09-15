// Fill out your copyright notice in the Description page of Project Settings.



#include "AIControllerC.h"
#include "AICharacter.h"
#include "BehaviorTree/BlackboardComponent.h" //Include the Blackboard
#include "BehaviorTree/BehaviorTreeComponent.h"//Include the Behaviour tree
#include "BehaviorTree/BehaviorTree.h"

//Construtor
AAIControllerC::AAIControllerC()
{
	//Initialize the behavior tree 
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	//Initialize the   blackboard
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
}

void AAIControllerC::OnPossess(APawn* Pawn)
{
	Super::OnPossess(Pawn);

	//Get the possessed Pawn. If it's the AI character
	//initialize it's blackboard and start it's corresponding behavior tree
	AAICharacter* AICharacter = Cast<AAICharacter>(Pawn);
	if (AICharacter)
	{
		//If AI character
		if (AICharacter->BehaviorTree->BlackboardAsset)
		{
			//Init the blackboard
			BlackboardComp->InitializeBlackboard(*(AICharacter->BehaviorTree->BlackboardAsset));
			//Start tree
			BehaviorComp->StartTree(*AICharacter->BehaviorTree);
		}
	}
}

void AAIControllerC::SetSeenTarget(APawn* Pawn)
{
	//Registers the Pawn that the AI has seen in the blackboard
	if (BlackboardComp)
	{
		//Set the seen pawn as enemy key
		BlackboardComp->SetValueAsObject(BlackboardKey, Pawn);
	}
}