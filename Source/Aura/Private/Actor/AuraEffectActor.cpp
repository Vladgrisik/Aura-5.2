// copyright Druid mechanics


#include "Actor/AuraEffectActor.h"

AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");

}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}


