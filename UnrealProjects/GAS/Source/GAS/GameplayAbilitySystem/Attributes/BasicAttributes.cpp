// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAttributes.h"
#include "Net/UnrealNetwork.h"

UBasicAttributes::UBasicAttributes()
{
	HP = 100.f;
	Max_HP = 100.f;
	Stamina = 100.f;
	Max_Stamina = 100.f;
}

void UBasicAttributes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributes, HP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributes, Max_HP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributes, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributes, Max_Stamina, COND_None, REPNOTIFY_Always);
}
