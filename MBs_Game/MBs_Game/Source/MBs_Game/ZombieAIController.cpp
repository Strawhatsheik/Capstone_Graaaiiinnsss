// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAIController.h"
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Controller.h"
#include "MBs_GameCharacter.h"
#include "MBs_GameProjectile.h"
#include "Kismet/KismetMathLibrary.h"
#include "Zombie_Cow.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISenseConfig_Sight.h"
#include"TimerManager.h"
#include "Perception/AIPerceptionComponent.h"

/**
 * Sets the default values for the ZombieAIController.
 */
AZombieAIController::AZombieAIController()
{
	// Create the perception component and the sight component and set the default values
	// of the sight component.
	ZombiePerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("ZombiePerception"));
	ZombieSight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("ZombieSight"));
	ZombieSight->SightRadius = ZombieSightRadius;
	ZombieSight->LoseSightRadius = ZombieLoseSightRadius;
	ZombieSight->SetMaxAge(ZombieSightMaxAge);
	ZombieSight->DetectionByAffiliation.bDetectEnemies = true;
	ZombieSight->DetectionByAffiliation.bDetectNeutrals = true;
	ZombieSight->DetectionByAffiliation.bDetectFriendlies = true;

	// Assign the sight sense to the perception component.
	ZombiePerception->ConfigureSense(*ZombieSight);
	ZombiePerception->SetDominantSense(ZombieSight->GetSenseImplementation());
	
	// Bind the `OnTargetPerceptionUpdate` function.
	ZombiePerception->OnTargetPerceptionUpdated.AddDynamic(this, &AZombieAIController::OnTargetPerceptionUpdate);

	// Starts the AI logic for this AIController as soon as the ZombieCharacter
// is taken over so that we can issue commands immediately.
	uint32 bStartAILogicOnPossess = true;

}
/**
 * Called when the game starts.
 */
void AZombieAIController::BeginPlay()
{
	Super::BeginPlay();

	// Put the ZombieCharacter in the IDLE or ROAM state depending on whether they can roam or not.
	IdleOrRoam();
	// Simple check but this can be made more complex.
	if (Zombie_Cow->bCanRoam) Roam();
	//If the engine is running
	
}


/**
 * Called when the ZombieAIController takes over the ZombieCharacter.
 *
 * @param ZombiePawn The ZombieCharacter pawn.
 */
void AZombieAIController::OnPossess(APawn* ZombiePawn)
{
	Super::OnPossess(ZombiePawn);

	// Attempt to cast the Pawn that was taken over to a ZombieCharacter and if
	// successful then we assign it to our `ZombieCharacter` variable.
	Zombie_Cow = Cast<AZombie_Cow>(ZombiePawn);
	// Bind the methods to respond to a component entering or exiting the ZombieCharacter's
// DamageCollider component.
	Zombie_Cow->ZombieDamageCollider->OnComponentBeginOverlap.AddDynamic(this, &AZombieAIController::OnComponentEnterDamageCollider);
	Zombie_Cow->ZombieDamageCollider->OnComponentEndOverlap.AddDynamic(this, &AZombieAIController::OnComponentLeaveDamageCollider);
	
	
}



/**
 * Called when the AIController's perception is updated.
 */
void AZombieAIController::OnTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus)
{
	// Get the Actors that have been perceived.
	TArray<AActor*> PerceivedActors;
	ZombiePerception->GetCurrentlyPerceivedActors(TSubclassOf<UAISense_Sight>(), PerceivedActors);

	// Check to see if an Actor has been detected and is currently in the sight radius.
	bool bPlayerIsInSight = PerceivedActors.Contains(Actor);

	// If the Actor is not in the sight radius then we make sure to stop their movement
	// and put them back in the IDLE or ROAM state.
	if (!bPlayerIsInSight)
	{
		
		StopChase();
	
		return;
	}

	// Return early if the ZombieCharacter is already chasing the PlayerCharacter.
	if (Zombie_Cow->State == ZombieStates::CHASE)
	{
		
		return;

	}
	// Now we check to see if we can cast the perceived Actor to a ZombieCharacter and
	// if we can't then return early.
	AMBs_GameCharacter* PlayerCharacter = Cast<AMBs_GameCharacter>(Actor);
	if (PlayerCharacter == nullptr)
	{
		
		return;

	}

	
	

	// Otherwise we call the `Chase` method so the ZombieCharacter can chase the PlayerCharacter.
	Chase(PlayerCharacter);

	// Get the number of perceived actors and if the current target left or entered
	// the field of view.
	//bool bIsEntered = PerceivedActors.Contains(Actor);
	//int NumberOfObjectsSeen = PerceivedActors.Num();

	//FString text = FString(Actor->GetName() + " has just " + (bIsEntered ? "Entered" : "Left") + " the field of view.");
	
	//bEnableOnScreenDebugMessages = true;
		//If the engine is running

	
		
	

}



/**
 * Called when a move request has been completed.
 */
void AZombieAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	if (Zombie_Cow->State == ZombieStates::ROAM)
	{
		if (Zombie_Cow->RoamDelay > 0.f)
		{
			// If there is a roam delay, we need to set the ZombieCharacter to the idle state
			// while we set a timer to run before `Roam` is called again.
			Zombie_Cow->ToIdleState();

			UWorld* World = GetWorld();
			if (World != nullptr)
			{
				GetWorld()->GetTimerManager().SetTimer(RoamIdleTimer, this, &AZombieAIController::Roam, Zombie_Cow->RoamDelay, false);
			}
		}
		else {
			// Otherwise we can just call `Roam` again instantly.
			Roam();
		}
	}
}

/**
 * Called to make the ZombieCharacter roam to a different location within its
 * roam radius.
 */
void AZombieAIController::Roam()
{

	
	// Put the ZombieCharacter in the ROAM state if they are not already. This is important
	// because when this move is complete, it gets put into an IDLE state so we need to put
	// ourselves back into a ROAM state.
	Zombie_Cow->ToRoamState();

	// Choose a random point within a bounding box with an origin of the ZombieCharacter's
	// spawn location so that the ZombieCharacter will never roam to new places.
	FVector RoamLocation = UKismetMathLibrary::RandomPointInBoundingBox(Zombie_Cow->StartLocation,
		FVector(
			Zombie_Cow->StartLocation.X + Zombie_Cow->RoamRadius,
			Zombie_Cow->StartLocation.Y + Zombie_Cow->RoamRadius,
			Zombie_Cow->StartLocation.Z
		)
	);

	MoveToLocation(RoamLocation);
}



/**
 * Called to make the ZombieCharacter chase the PlayerCharacter.
 *
 * @param PlayerCharacter The PlayerCharacter to chase.
 */
void AZombieAIController::Chase(AMBs_GameCharacter* PlayerCharacter)
{
	
	Zombie_Cow->ToChaseState();

	MoveToActor(PlayerCharacter);
}

/**
 * Called to make the ZombieCharacter stop chasing the PlayerCharacter and go
 * back to being idle/roaming.
 */
void AZombieAIController::StopChase()
{
	
	// First we have to stop all movement so the ZombieCharacter quits chasing the PlayerCharacter
	// since they're not supposed to see them anymore.
	StopMovement();

	if (Zombie_Cow->AfterChaseDelay > 0.f)
	{
		UWorld* World = GetWorld();
		if (World != nullptr)
		{
			// If there is an after chase delay then we set the PlayerCharacter to the IDLE state until the
			// `ChaseIdleTimer` expires and runs the `IdleOrRoam` method.
			Zombie_Cow->ToIdleState();
			GetWorld()->GetTimerManager().SetTimer(ChaseIdleTimer, this, &AZombieAIController::IdleOrRoam, Zombie_Cow->AfterChaseDelay, false);
		}
	}
	else
	{
		// Otherwise if there is no delay we can just go straight to the `IdleOrRoam` method.
		IdleOrRoam();
	}
}
/**
 * Checks to see if the PlayerCharacter should be idling or roaming and then proceeds to do so. If
 * the ZombieCharacter's `PreviousState` was `CHASE` and the ZombieCharacter is supposed to roam then
 * the `StartLocation` will be updated to be the current location as we don't want the ZombieCharacter
 * to go all the way back to the initial `StartLocation`.
 */
void AZombieAIController::IdleOrRoam()
{
	if (Zombie_Cow->bCanRoam)
	{
		// Check to see if the previous state was `CHASE` because if so we need to set the `StartLocation`
		// to the ZombieCharacter's current location.
		if (Zombie_Cow->PreviousState == ZombieStates::CHASE)
		{
			
			Zombie_Cow->StartLocation = Zombie_Cow->GetActorLocation();
		}

		// Call the `Roam` method so the ZombieCharacter starts roaming.
		Roam();
	}
	else
	{

		
		Zombie_Cow->ToIdleState();
	}
}

/**
 * Called when an actor enters the ZombieCharacter's DamageCollider.
 */
//maybe here? Here is where the damage can be linked to box? go for the ehad?
void AZombieAIController::OnComponentEnterDamageCollider(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//IF what enteres collider isd projectile
	
	if (AMBs_GameProjectile* FiredProjectile = Cast<AMBs_GameProjectile>(OtherActor))
	{//Return if not

		//if (FiredProjectile == nullptr)
			//return;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Purple, FString::Printf(TEXT("Hurray for Sheik! Sheik the genius!")));
		UGameplayStatics::ApplyPointDamage(Zombie_Cow, 200.0f, (FVector(0.0f, 0.0f, 0.0f)), PlayerHit, nullptr, this, BulletDamageType);
	//dont we want it to be zombiecow not firedprojectile to take damage? right? 
	}


	// Try to cast the `OtherActor` to our `PlayerCharacter` and if we can then we
	// switch the ZombieCharacter to be in the ATTACK state.
	AMBs_GameCharacter* PlayerCharacter = Cast<AMBs_GameCharacter>(OtherActor);
	if (PlayerCharacter == nullptr) 
		return;

	Zombie_Cow->ToAttackState();

	//Now start attacking and damaging player!
	//If damage can be applied
		//Apply 200 points worth of fire type' damage to player character
		UGameplayStatics::ApplyPointDamage(PlayerCharacter, 200.0f, (FVector(0.0f, 0.0f, 0.0f)), CowHit, nullptr, this, CowDamageType);
	

}

/**
 * Called when an actor leaves the ZombieCharacter's DamageCollider.
 */
void AZombieAIController::OnComponentLeaveDamageCollider(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Try to cast the `OtherActor` to our `PlayerCharacter` and if we can then we
	// switch the ZombieCharacter to be in the CHASE state since it means that the
	// PlayerCharacter is running away.
	AMBs_GameCharacter* PlayerCharacter = Cast<AMBs_GameCharacter>(OtherActor);
	if (PlayerCharacter == nullptr) return;

	Chase(PlayerCharacter);
}

