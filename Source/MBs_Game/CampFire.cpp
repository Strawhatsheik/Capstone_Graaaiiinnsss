// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFire.h"
#include "Kismet/Gameplaystatics.h"//Include gameplay statics
#include "TimerManager.h"//For timer functionality
#include "Components/BoxComponent.h"//Include for box component for collision
#include "Particles/ParticleSystemComponent.h"//Include for particle displays

// Sets default values
ACampFire::ACampFire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Create box component for overlap functions
	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
	//Size of box component
	MyBoxComponent->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	//Make it the root component to the actor
	RootComponent = MyBoxComponent;

	//Create the particle system for this actor (what makes the fire unstatic looking)
	Fire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("My Fire"));
	//Set it's location relative to actor
	Fire->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	//Attach it to the root component of actor (the collision box)
	Fire->SetupAttachment(RootComponent);

	//Add the overlap functions to the box component
	MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACampFire::OnOverlapBegin);
	MyBoxComponent->OnComponentEndOverlap.AddDynamic(this, &ACampFire::OnOverlapEnd);

	//Whether the fire can or cannot apply damage (remember player has some times of invincibility)
	bCanApplyDamage = false;
}
/*comment out for now
// Called when the game starts or when spawned
void ACampFire::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACampFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

} */

//Declare the onOverlapBEGIN function
//Takes as parameters the overlapped component, the other actor who caused overlap, the other component that caused overlap, the index of where the hit was, a boolean to hold the sweep result (sweep checks collision is possible before checking collision spot), and two constants to hold the result of hit and sweep
void ACampFire::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//If the collision was with another actor and component (not this actors components)
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		//Damage can be applied
		bCanApplyDamage = true;
		//Sets the damage from the fire to be applied to player character
		MyCharacter = Cast<AActor>(OtherActor);
		//Sets the result of sweep to be hits result
		MyHit = SweepResult;
		//Starts the fire timer and the damage it causes 
		GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ACampFire::ApplyFireDamage, 2.2f, true, 0.0f);
	}
}
//Declare the onOverlapEND function
//Takes as parameters the overlapped component, the other actor who caused overlap, the other component that caused overlap, the index of where the hit was,
void ACampFire::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//Overlap has ended, damage cannot be applied
	bCanApplyDamage = false;
	//Clear the fire timer
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
}

//Function that applies the fire damage
void ACampFire::ApplyFireDamage()
{
	//If damage can be applied
	if (bCanApplyDamage)
	{
		//Apply 200 points worth of fire type' damage to player character
		UGameplayStatics::ApplyPointDamage(MyCharacter, 200.0f, GetActorLocation(), MyHit, nullptr, this, FireDamageType);
	}
}