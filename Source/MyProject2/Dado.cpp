// Fill out your copyright notice in the Description page of Project Settings.

#include "Dado.h"
#include "MyProject2BlockGrid.h" 
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "InputCoreTypes.h"
#include "UObject/ConstructorHelpers.h"

ADado::ADado()
{
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));
	ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh(TEXT("StaticMesh'/Game/Puzzle/Meshes/dice.dice'"));
	BlockMesh->SetStaticMesh(PlaneMesh.Get());
	BlockMesh->SetupAttachment(DummyRoot);

	BlockMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BlockMesh->SetCollisionObjectType(ECC_WorldDynamic);
	BlockMesh->SetCollisionResponseToAllChannels(ECR_Block);
	BlockMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	BlockMesh->OnClicked.AddDynamic(this, &ADado::BlockClicked);
}

void ADado::BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked)
{
	// 1. Hacemos que el dado gire
	Value++;
	if (Value > 6)
	{
		Value = 1;
	}
	UE_LOG(LogTemp, Warning, TEXT("El dado giró a la cara: %d"), Value);
	ladoCara();

	// 2. Le decimos al Grid que sume puntos
	/*if (OwningGrid != nullptr)
	{
		OwningGrid->AddScore();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("El dado no tiene Grid asignado."));
	}*/
}

void ADado::BeginPlay()
{
	Super::BeginPlay();

	// Iniciamos en la cara 3 por defecto
	Value = 3;
	ladoCara();
}

void ADado::ladoCara()
{
	switch (Value)
	{
	case 1:
		BlockMesh->SetRelativeRotation(FRotator(-90, 0, 0));
		break;
	case 2:
		BlockMesh->SetRelativeRotation(FRotator(0, 0, -90));
		break;
	case 3:
		BlockMesh->SetRelativeRotation(FRotator(0, 0, 0));
		break;
	case 4:
		BlockMesh->SetRelativeRotation(FRotator(0, 0, -180));
		break;
	case 5:
		BlockMesh->SetRelativeRotation(FRotator(0, 0, 90));
		break;
	case 6:
		BlockMesh->SetRelativeRotation(FRotator(90, 0, 0));
		break;
	}
}

void ADado::NextFace()
{
}

void ADado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}