// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class THEKABUNDAUE_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
	// Static Mesh for the pickup
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PickupMesh;
	
	UPROPERTY(EditAnywhere)
	UShapeComponent* PickupBox;

	UPROPERTY(EditAnywhere)
	USceneComponent* PickupRoot;
	
	UFUNCTION()
		void onPlayerEnter(UPrimitiveComponent* overlappedComp, AActor* enteringActor, UPrimitiveComponent* otherComp, 
			int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult); 
};
