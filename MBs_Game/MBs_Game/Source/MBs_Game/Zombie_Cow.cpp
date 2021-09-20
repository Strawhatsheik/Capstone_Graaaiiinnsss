// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie_Cow.h"
#include "Engine.h"
#include "HealthBar.h"//Include health bar to be displayed
#include <Components/WidgetComponent.h>  //Include widget for display
#include "Components/BoxComponent.h"
#include "ConstructorHelpers.h"
#include "ZombieAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AZombie_Cow::AZombie_Cow(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Load the assets needed for the ZombieCharacter.
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>ZombieSkeletalMeshAsset(TEXT("SkeletalMesh'/Game/FarmAnimalsPack/Cow/Meshes/ZombieCow.ZombieCow'"));
	//Load the animation instance for zombie cow
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint>ZombieAnimAsset(TEXT("AnimBlueprint'/Game/FarmAnimalsPack/Cow/Animations/ZombieCowAnimBlueprint.ZombieCowAnimBlueprint'"));
	
	
	//Following are for the floating health bar component	
//If the has no root component
	if (RootComponent == nullptr)
	{
		//Initialize and attach one
		RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	}
	//Initialize and create widget for health bar display
	HealthWidgetComp = ObjectInitializer.CreateDefaultSubobject<UWidgetComponent>(this, TEXT("HealthBar"));
	//Attach the widget to the root component and keep relative size
	HealthWidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	//Set health to currently be max
	Health = MaxHealth;


	// Create the ZombieCharacter's skeletal mesh and set it to be the mesh loaded above.
	ZombieSkeletalMesh = GetMesh();
	ZombieSkeletalMesh->SetSkeletalMesh(ZombieSkeletalMeshAsset.Object);
	ZombieSkeletalMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	ZombieSkeletalMesh->SetAnimInstanceClass(ZombieAnimAsset.Object->GeneratedClass);
	ZombieSkeletalMesh->SetupAttachment(RootComponent);

	// Create the DamageCollider and set it so that it extends out about as far as the
	// ZombieCharacter's horns would extend when attacking.
	ZombieDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("ZombieDamageCollider"));
	ZombieDamageCollider->SetRelativeLocation(FVector(70.f, 0.f, 40.f));
	ZombieDamageCollider->SetBoxExtent(FVector(30.f, 30.f, 20.f));
	ZombieDamageCollider->SetGenerateOverlapEvents(true);
	ZombieDamageCollider->SetCollisionProfileName(TEXT("Trigger"));
	ZombieDamageCollider->SetupAttachment(RootComponent);

	// Helps orient the PatrolCharacter so that when it walks it doesn't face the
	// Waypoint but instead the direction that it's walking.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 200.0f, 0.0f);

	
	
	// Set the default AIController of the class.
	AIControllerClass = AZombieAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

}
// Called every frame
void AZombie_Cow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Following are for the floating health bar	
		//Get the characters location, and set it for bar
	SetActorLocation(GetActorLocation() + MovementVelocity * DeltaTime);




	//Again will probably cut
	// Bounce health between min and max to show off health bar
	/*static const float TweenSpeed = 10.0f;
	Health = FMath::Clamp<float>(Health + DeltaTime * HealthTweenDirection * TweenSpeed, 0, MaxHealth);
	if ((Health == MaxHealth && HealthTweenDirection == 1)
		|| (Health == 0 && HealthTweenDirection == -1))
	{
		HealthTweenDirection *= -1;
	}
	*/

}

// Called when the game starts or when spawned
/**
 * Called when the game starts.
 */
void AZombie_Cow::BeginPlay()
{
	Super::BeginPlay();

	// Set the starting location of the ZombieCharacter.
	StartLocation = GetActorLocation();

	//Following pertain to the floating health bar component
	//Instantiate and create the health bar of user widget class
	UHealthBar* HealthBar = Cast<UHealthBar>(HealthWidgetComp->GetUserWidgetObject());
	//Set the owner of the health bar to be the current actor
	//HealthBar->SetOwnerActor();

}
/**
 * Called to make the ZombieCharacter take damage and check to see if the
 * ZombieCharacter needs to die.
 */

 //This function 'damages' the actor. It runs when the player interacts with an element that calls 'ApplyPointsDamage'
float AZombie_Cow::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("ouch!!!!! I TOOKDAMAGE.")));
	// Take the damage to apply from the ZombieCharacter's damage.
	Health -= DamageAmount;
	//Health -= 110;


	// If the ZombieCharacter's `Health` is at or below zero then we have take care of disabling the
	// ZombieAIController.
	if (Health <= 0.f)
	{
		// Have the ZombieAIController un possess the ZombieCharacter and then destroy the
		// ZombieAIController so it doesn't give any more input to the ZombieCharacter.
		AAIController* ZombieAIController = Cast<AAIController>(GetController());
		if (ZombieAIController == nullptr) return DamageAmount;
		ZombieAIController->UnPossess();
		ZombieAIController->Destroy();

		// Put the ZombieCharacter in the `DEAD` state so that the animation blueprint will play
		// the zombie dying animation.
		ToDeadState();

		// Now we set a timer for the length of the dying animation to make sure that if we have to
		// destroy the ZombieCharacter, we don't do it until the animation has finished playing.
		UWorld* World = GetWorld();
		if (World == nullptr) return DamageAmount;
		World->GetTimerManager().SetTimer(DeathAnimationTimer, this, &AZombie_Cow::AfterDeathAnimationFinished, DyingAnimationLengthInSeconds);


		//Return the damage amount
		return DamageAmount;
	}
	return DamageAmount;
}

void AZombie_Cow::Hit(float Damage)
{
	// Take the damage to apply from the ZombieCharacter's damage.
	//Health -= Damage;
	Health -= 60;
	
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("ouch!!!!!.")));

	// If the ZombieCharacter's `Health` is at or below zero then we have take care of disabling the
	// ZombieAIController.
	if (Health <= 0.f)
	{
		// Have the ZombieAIController un possess the ZombieCharacter and then destroy the
		// ZombieAIController so it doesn't give any more input to the ZombieCharacter.
		AAIController* ZombieAIController = Cast<AAIController>(GetController());
		if (ZombieAIController == nullptr) return;
		ZombieAIController->UnPossess();
		ZombieAIController->Destroy();

		// Put the ZombieCharacter in the `DEAD` state so that the animation blueprint will play
		// the zombie dying animation.
		ToDeadState();

		// Now we set a timer for the length of the dying animation to make sure that if we have to
		// destroy the ZombieCharacter, we don't do it until the animation has finished playing.
		UWorld* World = GetWorld();
		if (World == nullptr) return;
		World->GetTimerManager().SetTimer(DeathAnimationTimer, this, &AZombie_Cow::AfterDeathAnimationFinished, DyingAnimationLengthInSeconds);
	}
}

/*Called after the death animation finishes playing.
*/
void AZombie_Cow::AfterDeathAnimationFinished()
{
	// Now that the dying animation has finished playing we can see if we need to Destroy
	// the ZombieCharacter.
	if (SecondsAfterDeathBeforeDestroy == 0.f)
	{
		// The ZombieCharacter should be destroyed immediately so we don't need to set a
		// timer.
		Destroy();
	}
	else if (SecondsAfterDeathBeforeDestroy > 0.f)
	{
		// We have to wait some time before the ZombieCharacter should be Destroyed so we
		// set a timer that runs the method to destroy the ZombieCharacter.
		SetLifeSpan(SecondsAfterDeathBeforeDestroy);
	}
}
/**
 * Called to transition the ZombieCharacter to the IDLE state.
 */
void AZombie_Cow::ToIdleState()
{
	PreviousState = State;
	//For debugging
	if (GEngine)
	{	//Pass info of hit componentto debugger to be displayed on screen

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("I am going to IDLE now.")));
	}
	State = ZombieStates::IDLE;
}

/**
 * Called to transition the ZombieCharacter to the ROAM state.
 */
void AZombie_Cow::ToRoamState()
{
	PreviousState = State;
	if (GEngine)
	{	//Pass info of hit componentto debugger to be displayed on screen

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("I am going to back to looking for GRAAAINNNSSS .")));
	}
	State = ZombieStates::ROAM;

	UCharacterMovementComponent* ZombieMovement = GetCharacterMovement();
	if (ZombieMovement != nullptr)
	{
		ZombieMovement->MaxWalkSpeed = RoamSpeed;
	}
}
/**
 * Called to transition the ZombieCharacter to the CHASE state.
 */
void AZombie_Cow::ToChaseState()
{
	PreviousState = State;
	if (GEngine)
	{	//Pass info of hit componentto debugger to be displayed on screen

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("I am going to CHASE YOU now.")));
	}
	State = ZombieStates::CHASE;

	UCharacterMovementComponent* ZombieMovement = GetCharacterMovement();
	if (ZombieMovement != nullptr)
	{
		ZombieMovement->MaxWalkSpeed = ChaseSpeed;
	}
}

/**
 * Called to transition the ZombieCharacter to the ATTACK state.
 */
void AZombie_Cow::ToAttackState()
{
	PreviousState = State;
	if (GEngine)
	{	//Pass info of hit componentto debugger to be displayed on screen

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("GARRR !!! I'm attacking!")));
	}
	State = ZombieStates::ATTACK;
}
/**
 * Called to transition the ZombieCharacter to the DEAD state.
 */
void AZombie_Cow::ToDeadState()
{
	PreviousState = State;
	if (GEngine)
	{	//Pass info of hit componentto debugger to be displayed on screen

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Oh nooooo! I'm dead")));
	}
	State = ZombieStates::DEAD;
}


