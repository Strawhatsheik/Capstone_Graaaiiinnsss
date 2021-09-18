// Fill out your copyright notice in the Description page of Project Settings.

//#include "Actor.h" 

#include "HealthComponent.h"
#include "Engine.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	//Populate default health value
	DefaultHealth = 100;
	//Set starting health to default
	Health = DefaultHealth;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	//Retreive owner (actor or pawn) of this component
	AActor* Owner = GetOwner();

	//If owner is successfully retrieved
	if (Owner)
	{
		//Bind 'OnTakeAnyDamge' to the Actor owning the compoent, not the component
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}
	
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	//Check actually taking an amount of damage
	if (Damage <= 0)
	{
		return;
	}

	//If actuall amount, minus from current health
	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Ouch! I must be in the pain volume!")));

}


// Called every frame
//void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
	//Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
//}

