// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dado.generated.h"

class AMyProject2BlockGrid; 

UCLASS()
class MYPROJECT2_API ADado : public AActor
{
	GENERATED_BODY()
		/** Dummy root component */
		UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* DummyRoot;

	/** StaticMesh component for the clickable block */
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* BlockMesh;
public:
	// Sets default values for this actor's properties


public:
	ADado();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dado")
		int32 ladoDado;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dado")
		int32 Value;

	// Puntero para saber quién es su Grid y avisarle para sumar puntos
	UPROPERTY()
		class AMyProject2BlockGrid* OwningGrid;

	UFUNCTION(BlueprintCallable, CallInEditor)
		void ladoCara();
	UFUNCTION()
		void BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame

	/** Grid that owns us */
	

	virtual void Tick(float DeltaTime) override;
	void NextFace();
};