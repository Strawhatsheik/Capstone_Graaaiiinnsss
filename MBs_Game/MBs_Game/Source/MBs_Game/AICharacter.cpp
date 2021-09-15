// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"
#include "AIControllerC.h"
#include "ConstructorHelpers.h"
#include <Components/WidgetComponent.h>  //Include widget for display
#include "HealthBar.h"//Include health bar to be displayed
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AAICharacter::AAICharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Initialize the pawn 'sensing' component
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	// Load the assets needed for the ZombieCharacter.
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>ZombieSkeletalMeshAsset(TEXT("SkeletalMesh'/Game/FarmAnimalsPack/Cow/Meshes/ZombieCow.ZombieCow'"));
	//Load the animation instance for zombie cow
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint>ZombieAnimAsset(TEXT("AnimBlueprint'/Game/FarmAnimalsPack/Cow/Meshes/ZombieCowAnimBlueprint.ZombieCowAnimBlueprint'"));

	//Sets the peripheral vision of AI character to   90 degrees
	PawnSensingComp->SetPeripheralVisionAngle(90.f);
	
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

}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
	//Register the function that is going to fire when the character sees a Pawn
	//IF the Pawn sensing component is true (exists)
	if (PawnSensingComp)
	{
		//Register it's function
		PawnSensingComp->OnSeePawn.AddDynamic(this, &AAICharacter::OnSeePlayer);
	}
//Following pertain to the floating health bar component
	//Instantiate and create the health bar of user widget class
	UHealthBar* HealthBar = Cast<UHealthBar>(HealthWidgetComp->GetUserWidgetObject());
	//Set the owner of the health bar to be the current actor
	//HealthBar->SetOwnerActor(this);

	// Make sure every character starts with different health
	//(An interesting feature, but one I may not keep)
	//Set health to random number between o and max health range
	Health = FMath::RandRange(0.0f, MaxHealth);
	//Set the tween for demo, not needed in game
	//HealthTweenDirection = FMath::RandBool() ? 1 : -1;

	/*wont need, have AI
	// Move in a random direction at a random speed
	const float DirRads = FMath::RandRange(0.0f, 2 * PI);
	MovementVelocity = FVector(FMath::Cos(DirRads), FMath::Sin(DirRads), 0) * 10.0f;

	// Face that way too
	RootComponent->SetWorldRotation(FRotator::MakeFromEuler(FVector(0, 0, DirRads / PI * 180 - 90)));
	*/




}
//The OnSeePlayer function, sets the seen character to blackboard
void AAICharacter::OnSeePlayer(APawn* Pawn)
{
	//Cast to our instance of AICOntrollerC
	AAIControllerC* AIController = Cast<AAIControllerC>(GetController());
	//Set the seen target on the blackboard
	//If AIController is true, IE was cast to properly
	if (AIController)
	{
		//For debugging
		GLog->Log("I SEE you!!!");
		AIController->SetSeenTarget(Pawn);
	}
}
// Called every frame
void AAICharacter::Tick(float DeltaTime)
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

// Called to bind functionality to input
void AAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

