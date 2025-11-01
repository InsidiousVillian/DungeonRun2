// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TesterActor.generated.h"

UCLASS()
class DUNGEONRRUNS_API ATesterActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATesterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	 // Points between which the actor moves
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
    FVector PointA;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
    FVector PointB;

    // Speed of movement
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
    float Speed;

private:
    float Alpha; // 0 to 1 interpolation factor
    bool bGoingToB; // Direction flag

};
