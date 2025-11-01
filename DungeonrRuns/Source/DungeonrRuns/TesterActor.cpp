// Fill out your copyright notice in the Description page of Project Settings.


#include "TesterActor.h"

// Sets default values
ATesterActor::ATesterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default values
    Speed = 1.0f;
    Alpha = 0.0f;
    bGoingToB = true;

}

// Called when the game starts or when spawned
void ATesterActor::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Tester called"));
    }

	PointA = GetActorLocation();        // Start at current location
    PointB = PointA + FVector(500, 0, 0); // Move 500 units along X
    SetActorLocation(PointA);
	
}

// Called every frame
void ATesterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update alpha based on speed
    Alpha += DeltaTime * Speed * (bGoingToB ? 1 : -1);

    // Clamp alpha between 0 and 1
    Alpha = FMath::Clamp(Alpha, 0.0f, 1.0f);

    // Interpolate between points
    FVector NewLocation = FMath::Lerp(PointA, PointB, Alpha);
    SetActorLocation(NewLocation);

    // Reverse direction at the ends
    if (Alpha >= 1.0f) bGoingToB = false;
    else if (Alpha <= 0.0f) bGoingToB = true;

}

