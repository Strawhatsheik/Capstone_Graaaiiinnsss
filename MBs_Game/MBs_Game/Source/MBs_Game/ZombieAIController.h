// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include"Engine.h"
#include "MBs_GameCharacter.h"
//#include "GenericTeamAgentInterface.h"
#include "Components/PrimitiveComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Zombie_Cow.h"
#include "ZombieAIController.generated.h"

/**
 *  * The ZombieAIController is the AIController that manages the states and movement
 * of the ZombieCharacter.
 */
UCLASS()
class MBS_GAME_API AZombieAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AZombieAIController();

	// The ZombieCharacter that the ZombieAIController is controlling.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Zombie)
		class AZombie_Cow* Zombie_Cow;

	// The ZombieCharacter's perception component.
	UPROPERTY(VisibleDefaultsOnly)
		class UAIPerceptionComponent* ZombiePerception;

	// The ZombieCharacter's sight sense component.
	UPROPERTY(VisibleDefaultsOnly)
		class UAISenseConfig_Sight* ZombieSight;

	// The radius around the ZombieCharacter that the PlayerCharacter will be sensed.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zombie)
		float ZombieSightRadius = 500.f;

	// The radius around the ZombieCharacter which they'll lose sight of the PlayerCharacter.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zombie)
		float ZombieLoseSightRadius = ZombieSightRadius + 50.f;

	// The amount of time that the ZombieCharacter will remember the PlayerCharacter after
	// seeing them.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Zombie)
		float ZombieSightMaxAge = 5.f;

	// The timer used to pause between `Roam` calls.
	FTimerHandle RoamIdleTimer;
	// The amount of time to pause in between `Roam` calls.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RoamState)
		float RoamDelay = 3.f;

	// The timer handle used to pause between chasing and roaming.
	FTimerHandle ChaseIdleTimer;


protected:
	/**
 * Called when the game starts.
 */
	virtual void BeginPlay() override;
	/**
	 * Called when the ZombieAIController takes over the ZombieCharacter.
	 *
	 * @param ZombieCharacter The ZombieCharacter pawn.
	 */
	virtual void OnPossess(APawn* ZombiePawn) override;

	/**
	 * Called when the AIController's perception is updated.
	 */
	UFUNCTION()
		void OnTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);


	/**
	 * Called when a move request has been completed.
	 */
	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;
	/**
* Checks to see if the PlayerCharacter should be idling or roaming and then proceeds to do so. If
* the ZombieCharacter's `PreviousState` was `CHASE` and the ZombieCharacter is supposed to roam then
* the `StartLocation` will be updated to be the current location as we don't want the ZombieCharacter
* to go all the way back to the initial `StartLocation`.
*/
	void IdleOrRoam();
	/**
	 * Called to make the ZombieCharacter roam to a different location within its
	 * roam radius.
	 */
	void Roam();

	/**
	 * Called to make the ZombieCharacter chase the PlayerCharacter.
	 *
	 * @param PlayerCharacter The PlayerCharacter to chase.
	 */
	void Chase(class AMBs_GameCharacter* PlayerCharacter);
	

	/**
	 * Called to make the ZombieCharacter stop chasing the PlayerCharacter and go
	 * back to being idle/roaming.
	 */
	void StopChase();
	
public:
	/**
	 * Called when an actor enters the ZombieCharacter's DamageCollider.
	 */
	UFUNCTION()
		void OnComponentEnterDamageCollider(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/**
	 * Called when an actor leaves the ZombieCharacter's DamageCollider.
	 */
	UFUNCTION()
		void OnComponentLeaveDamageCollider(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//Property to hold hit result when attacking
	UPROPERTY(EditAnywhere)
		FHitResult CowHit;
	//Property to handle damage and type of damage applied to player if attacked
	UPROPERTY(EditAnywhere)
		TSubclassOf<UDamageType> CowDamageType;
	//Hold damage done BY player
	UPROPERTY(EditAnywhere)
		FHitResult PlayerHit;
	//Property to handle damage and type of damage applied to zombie if received
	UPROPERTY(EditAnywhere)
		TSubclassOf<UDamageType> BulletDamageType;
};
