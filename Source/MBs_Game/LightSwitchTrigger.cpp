// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitchTrigger.h"//Include blueprint file
#include "Components/PointLightComponent.h" //Include point light components
#include "Components/SphereComponent.h" //Include sphere components
#include "DrawDebugHelpers.h" // include draw debug helpers header file

// Sets default values
ALightSwitchTrigger::ALightSwitchTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set intensity of light and store to variable
	LightIntensity = 4000.0f;

	//Create the point light component with it's default settings and direct it as 'root' component
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->Intensity = LightIntensity;
	PointLight->bVisible = true;
	RootComponent = PointLight;

	// Create the sphere component, with it's default settings, and attach to point light
	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Sphere Component"));
	LightSphere->InitSphereRadius(300.0f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetupAttachment(RootComponent);

	//Call overlap function to set up notification when actor enters (overlaps) the sphere 
	LightSphere->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitchTrigger::OnOverlapBegin);
	//Call end overlap function to set up a notification when an actor leaves the sphere
	LightSphere->OnComponentEndOverlap.AddDynamic(this, &ALightSwitchTrigger::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ALightSwitchTrigger::BeginPlay()
{
	Super::BeginPlay();
	
	//Draw a debug sphere the same size as light sphere for visibility 
	DrawDebugSphere(GetWorld(), GetActorLocation(), 300.f, 50, FColor::Green, true, -1, 0, 2);

}

// Called every frame
void ALightSwitchTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Create and define the 'OnOverlap' function, whose purpose is to toggle the state of the light from off to on, or vice versa, when another actor enters or overlaps the component
//Parameters the function takes are the overlapped component, the actor who is overlapped, the other component doing the overlap and the area it happened (an int),
// a boolean to hold whether an overlap occurred, from the last parameter, a sweep to check for overlap.  
void ALightSwitchTrigger::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//If the otheractor does NOT equal this one (can't overlap self), and there is another compoent attached to actor
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//Call the Toggle light state
		ToggleLight();
	}
}

//Create and define the 'OnOverlapEnd' function, whose purpose is to toggle the state of the light from off to on, or vice versa, when another acot exits or leaves the overlap
//Parameters the function takes are the overlapped component, the actor who is overlapped, the other component doing the overlap and the area it happened (an int), 
//no bool or sweep needed as to exit, we have already established entrance and thus overlap.
void ALightSwitchTrigger::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//If the otheractor does NOT equal this one (can't overlap self), and there is another compoent attached to actor
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//Call the Toggle light state function
		ToggleLight();
	}
}

// This is the Toggle Light state function.It toggles the light either on or off depending on it's current state 
void ALightSwitchTrigger::ToggleLight()
{
	//Toggle off or on
	PointLight->ToggleVisibility();
}


