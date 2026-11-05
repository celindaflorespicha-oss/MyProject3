// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2BlockGrid.h"
#include "MyProject2Block.h"
#include "Dado.h" // <-- Agregado para reconocer la clase ADado
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

AMyProject2BlockGrid::AMyProject2BlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(200.f, 0.f, 0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Puntuacion: {0}"), FText::AsNumber(0)));
	ScoreText->SetupAttachment(DummyRoot);

	// Set defaults
	Size = 3;
	BlockSpacing = 300.f;
	BlockSize = 0.5f;
}


void AMyProject2BlockGrid::BeginPlay()
{
	Super::BeginPlay();

	// Number of blocks
	const int32 NumBlocks = Rows * Columns;

	TArray<int32> PlayerScores = { 100,200,150,150 };
	PlayerScores.Add(400);
	PlayerScores.Sort();
	for (int32 Puntaje : PlayerScores) {
		UE_LOG(LogTemp, Warning, TEXT("Score: %d"), Puntaje);
	}

	// crear una lista de dados en el blockgrit
	TArray<ADado*> ListaDados;

	// Loop to spawn each block
	for (int32 BlockIndex = 0; BlockIndex < NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex / Columns) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex % Columns) * BlockSpacing; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		ADado* NewDado = GetWorld()->SpawnActor<ADado>(BlockLocation, FRotator(0, 0, 0));

		// insertar en la lista (lista add(newBlock))
		if (NewDado != nullptr)
		{
			ListaDados.Add(NewDado);
		}

		// Código original del bloque (mantenido y comentado)
		// AMyProject2Block* NewBlock = GetWorld()->SpawnActor<AMyProject2Block>(BlockLocation, FRotator(0,0,0));
		//NewBlock->CambiarTamanio(newSize);

		if (NewDado != nullptr)
		{
			// Usamos la función nativa de Unreal para escalar el actor
			NewDado->SetActorScale3D(FVector(BlockSize, BlockSize, BlockSize));

			NewDado->OwningGrid = this;

			// NewBlock->CambiarTamanio(BlockSize);
			// NewBlock->OwningGrid = this;
		}
	}

	// log mostrar la cantidad de elementos en la listaDado siempre desde la variable
	UE_LOG(LogTemp, Warning, TEXT("Cantidad total de dados en la lista: %d"), ListaDados.Num());
}

void AMyProject2BlockGrid::AddScore(int32 PuntosASumar)
{
	// Increment score
	//Score++;

	// Sumamos el valor que manda el dado
	Score = Score + PuntosASumar;

	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Puntuacion: {0}"), FText::AsNumber(Score)));
}

#undef LOCTEXT_NAMESPACE