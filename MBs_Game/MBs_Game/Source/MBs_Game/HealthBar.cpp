// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthBar.h"
#include <Components/ProgressBar.h>//Include the progress bar
#include <Components/TextBlock.h>//Include text blocks

void UHealthBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	//If the owner of the bar can be retrieved
	if (!OwnerOfBar.IsValid())
		return;//As this is a tick function there is nothing to retrieve, but must be reurned as every tick the bar must be reevaluated and updated.

	//Set the health bars current state by retreiving health info of actor
	HealthBar->SetPercent(OwnerOfBar->GetHealth() / OwnerOfBar->GetMaxHealth());

	//Formatting to male the numbersappear in percentage
	FNumberFormattingOptions Opts;
	//Remove numbers after decimal
	Opts.SetMaximumFractionalDigits(0);
	//Create the current health label and retrieve the current health, concantenating with Opts to make percentage
	CurrentHealthLabel->SetText(FText::AsNumber(OwnerOfBar->GetHealth(), &Opts));
	//Create the max health label and retrieve the value of maxhealth, concantenating with Opts to make percentage
	MaxHealthLabel->SetText(FText::AsNumber(OwnerOfBar->GetMaxHealth(), &Opts));
}
