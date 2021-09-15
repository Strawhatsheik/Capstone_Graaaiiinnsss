// Fill out your copyright notice in the Description page of Project Settings.
#include "OpenDoorTimelineCurve.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"//Include math components for LERP
#include "Kismet/GameplayStatics.h"//Include gameplay components for LERP


// Sets default values
AOpenDoorTimelineCurve::AOpenDoorTimelineCurve()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Open = false; //Door does not start open
	ReadyState = true; //Door is in ready state to be opened

	//Find and use doorframe static mesh as root component
	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	RootComponent = DoorFrame;

	//Find and use door and attach it as sub child to root component of door frame
	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	Door->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AOpenDoorTimelineCurve::BeginPlay()
{
	Super::BeginPlay();
	
	//Set rotate value to 1
	RotateValue = 1.0f;

	//If the door curve is NOT null
	if (DoorCurve)
	{
		//Instanstiate timeline component
		FOnTimelineFloat TimelineCallback;
		FOnTimelineEventStatic TimelineFinishedCallback;

		//Bind timeline to this door
		//When moving through function call 'ControlDoor'
		TimelineCallback.BindUFunction(this, FName("ControlDoor"));
		TimelineFinishedCallback.BindUFunction(this, FName{ TEXT("SetState") });
		//When timeline is finished call SetState function
		MyTimeLine.AddInterpFloat(DoorCurve, TimelineCallback);
		MyTimeLine.SetTimelineFinishedFunc(TimelineFinishedCallback);
	}
}

// Called every frame
void AOpenDoorTimelineCurve::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Connect our timeline to Delta time
	MyTimeLine.TickTimeline(DeltaTime);

}

//Create ControlDoor function
void AOpenDoorTimelineCurve::ControlDoor()
{
	//Get playback position of timeline 
	TimelineValue = MyTimeLine.GetPlaybackPosition();
	//Use playback position vlaue on float curve to set relative rotation of door
	//"RotateValue" is set in 'ToggleDoor' function
	CurveFloatValue = RotateValue * DoorCurve->GetFloatValue(TimelineValue);

	//Control rotation on x,y,z plane
	FQuat NewRotation = FQuat(FRotator(0.f, CurveFloatValue, 0.f));

	//Set new rotation
	Door->SetRelativeRotation(NewRotation);
}

//Create 'SetState' function
//Door can only be opend or closed if ReadyState equals true
void AOpenDoorTimelineCurve::SetState()
{
	//Set ReadyState
	ReadyState = true;
}

//Create 'ToggleDoor' function, which wil lcheck ReadyState, open the door, retrieve it's rotation
//and determine whether player is in front of or behind door
void AOpenDoorTimelineCurve::ToggleDoor()
{
	//If ReadyState is true
	if (ReadyState)
	{
		//toggle Open
		Open = !Open;
		

		//Retreive player pawn activating function
		APawn* OurPawn = UGameplayStatics::GetPlayerPawn(this, 0);
		//Get the forward vector of pawn (player), ie. the direction they are facing
		FVector PawnLocation = OurPawn->GetActorLocation();
		//Get vector between door actor and player actor
		FVector Direction = GetActorLocation() - PawnLocation;
		//Using direction and player location, retrieve 'x' value that is either positive or negative
		Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

		//Retrieve door's rotation (relative)
		DoorRotation = Door->RelativeRotation;

		//If open is currently true (the door is opening)
		if (Open)
		{
			//Set rotate value based on 'X' co-ordiante retrieved 
			//This controls which way the door will rotate depending on players location
			if (Direction.X > 0.0f)
			{
				RotateValue = 1.0f;
			}
			else
			{
				RotateValue = -1.0f;
			}

			//Door is opening, not in readyState
			ReadyState = false;
			//Start timeline from beginning
			MyTimeLine.PlayFromStart();
		}
		//Open is not true, the door is closing
		else
		{
			//Door is closing, not in ready state
			ReadyState = false;
			//Play timeline in reverse
			MyTimeLine.Reverse();
		}
	}

}