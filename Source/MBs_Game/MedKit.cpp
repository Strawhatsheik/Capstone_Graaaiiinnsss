// Fill out your copyright notice in the Description page of Project Settings.


#include "MedKit.h"
//#include "MBs_GameCharacter.h"//Include character to apply medkit to

// Sets default values
AMedKit::AMedKit()
{
	//Delegate for OnOverlapBegin function (a delegate is a pointer to a function)
	OnActorBeginOverlap.AddDynamic(this, &AMedKit::OnOverlap);

}

//The onOverlap function
void AMedKit::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	//If the actor who caused overlap is not null and NOT this actor
	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		//And it is the player character
		 MyCharacter = Cast<AMBs_GameCharacter>(OtherActor);

		//If the characters health is not full
		if (MyCharacter && MyCharacter->GetHealth() < 1.0f)
		{
			//Update the health by adding to it
			//Full health is 1000
			MyCharacter->UpdateHealth(100.0f);
			//Destroy this actor (the used medpack)
			Destroy();
		}
	}
}


