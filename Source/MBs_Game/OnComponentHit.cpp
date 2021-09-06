// Fill out your copyright notice in the Description page of Project Settings.
//include files 

#include "OnComponentHit.h"
#include "Components/BoxComponent.h"//ox for simple collison
//Include engine components (for GEngine)
#include "Engine.h"

// Sets default values
AOnComponentHit::AOnComponentHit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Use a sphere as a simple collison representation
	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	//Enable physics on the sphere
	MyComp->SetSimulatePhysics(true);
	//Enable rigid body on the sphere
	MyComp->SetNotifyRigidBodyCollision(true);

	//Set collsion settings to initially 'block all dynamic'
	MyComp->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	//Connect to function 'OnCompHit'
	MyComp->OnComponentHit.AddDynamic(this, &AOnComponentHit::OnCompHit);

	//Set as root component
	RootComponent = MyComp;

}

// Called when the game starts or when spawned
void AOnComponentHit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOnComponentHit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Create the 'OnCompHit' function, whose purpose is to print to the screen the name of the actor hit by this actor
//Parameters the function takes are the hitting component, the actor who is hit, the hit component of the other actor,
//the direction vector, and the result (point of impact)
void AOnComponentHit::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//If the hit is happening to this actor and the other actor and it's component are NOT null
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		//If the engine is running
		if (GEngine)
		{	//Pass info of hit componentto debugger to be displayed on screen
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
		}
	}
}