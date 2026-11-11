// Fill out your copyright notice in the Description page of Project Settings.

#include "Dado.h"
#include "MyProject2BlockGrid.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
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

	// Sin física para que no se desordenen
	BlockMesh->SetSimulatePhysics(false);
	BlockMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BlockMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	BlockMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	BlockMesh->OnClicked.AddDynamic(this, &ADado::BlockClicked);

	bIsJumping = false;
	JumpTimer = 0.f;
}

void ADado::BeginPlay()
{
	Super::BeginPlay();

	if (Value == 0)
	{
		Value = FMath::RandRange(1, 6);
	}

	ladoCara();

	StartLocation = GetActorLocation();
}

void ADado::BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked)
{
	// --- NUEVO LOG: Avisamos qué dado se tocó ---
	
	UE_LOG(LogTemp, Warning, TEXT("El dado tocado tiene el numero: %d"), Value);

	if (OwningGrid != nullptr)
	{
		// --- NUEVO LOG: Cuántos dados hay en total ---
		UE_LOG(LogTemp, Warning, TEXT("Revisando la lista del Grid que tiene %d dados..."), OwningGrid->ListaDados.Num());

		int32 DadosEncontrados = 0; // Variable para contar cuántos coinciden

		for (ADado* dadoEnLista : OwningGrid->ListaDados)
		{
			if (dadoEnLista != nullptr && dadoEnLista->Value == this->Value)
			{
				dadoEnLista->ApplyVerticalImpulse();
				DadosEncontrados++; // Sumamos 1 a los encontrados
			}
		}

		// --- NUEVO LOG: Resultado final ---
		UE_LOG(LogTemp, Warning, TEXT("Se encontraron y saltaron %d dados con el número %d"), DadosEncontrados, Value);
		UE_LOG(LogTemp, Warning, TEXT("..."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("¡ERROR! El dado no tiene un Grid (OwningGrid) asignado."));
	}
}
void ADado::ApplyVerticalImpulse()
{
	if (bIsJumping) return;
	bIsJumping = true;
	JumpTimer = 0.f;
}

void ADado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsJumping)
	{
		JumpTimer += DeltaTime * 3.0f;
		float AlturaSalto = FMath::Sin(JumpTimer * PI) * 150.0f;

		SetActorLocation(StartLocation + FVector(0.f, 0.f, AlturaSalto));

		// --- GIRO FORZADO EN EL EJE Y (ROLL) ---
		FRotator RotacionActual = BlockMesh->GetRelativeRotation();

		RotacionActual.Pitch = 0.f; // X a cero
		RotacionActual.Yaw = 0.f;   // Z a cero
		RotacionActual.Roll += DeltaTime * 720.f; // Giramos en Y (Roll) - 2 vueltas

		BlockMesh->SetRelativeRotation(RotacionActual);

		if (JumpTimer >= 1.0f)
		{
			JumpTimer = 0.f;
			bIsJumping = false;

			SetActorLocation(StartLocation);
			ladoCara();
		}
	}
}

void ADado::ladoCara()
{
	BlockMesh->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));

	switch (Value)
	{
	case 1: BlockMesh->AddRelativeRotation(FRotator(-90, 0, 0)); break;
	case 2: BlockMesh->AddRelativeRotation(FRotator(0, 0, -90)); break;
	case 3: BlockMesh->AddRelativeRotation(FRotator(0, 0, 0)); break;
	case 4: BlockMesh->AddRelativeRotation(FRotator(0, 0, -180)); break;
	case 5: BlockMesh->AddRelativeRotation(FRotator(0, 0, 90)); break;
	case 6: BlockMesh->AddRelativeRotation(FRotator(90, 0, 0)); break;
	}
}

void ADado::NextFace()
{
}