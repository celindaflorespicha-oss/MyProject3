// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2BlockGrid.h"
#include "MyProject2Block.h"
#include "Dado.h" 
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

AMyProject2BlockGrid::AMyProject2BlockGrid()
{
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(200.f, 0.f, 0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Puntuacion: {0}"), FText::AsNumber(0)));
	ScoreText->SetupAttachment(DummyRoot);

	Size = 3;
	BlockSpacing = 300.f; // Espacio entre dados
	BlockSize = 1.8f;     // Tamaño del dado
}

void AMyProject2BlockGrid::BeginPlay()
{
	Super::BeginPlay();

	if (Rows <= 0) { Rows = 3; }
	if (Columns <= 0) { Columns = 4; }

	const int32 NumBlocks = Rows * Columns;

	// --- COMENTADO: Array de ejemplo ---
	/*
	TArray<int32> PlayerScores = { 100,200,150,150 };
	PlayerScores.Add(400);
	PlayerScores.Sort();
	for (int32 Puntaje : PlayerScores) {
		UE_LOG(LogTemp, Warning, TEXT("Score: %d"), Puntaje);
	}
	*/
	// ---------------------------------------------------

	for (int32 BlockIndex = 0; BlockIndex < NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex / Columns) * BlockSpacing;
		const float YOffset = (BlockIndex % Columns) * BlockSpacing;

		// Z = 150.f para que nazcan elevados y no choquen con el suelo
		const FVector BlockLocation = FVector(XOffset, YOffset, 150.f) + GetActorLocation();

		ADado* NewDado = GetWorld()->SpawnActor<ADado>(BlockLocation, FRotator(0, 0, 0));

		if (NewDado != nullptr)
		{
			// Hacemos que el número sea aleatorio justo al crearlo
			NewDado->Value = FMath::RandRange(1, 6);

			// 1. Lo giramos
			NewDado->ladoCara();

			// 2. TRUCO DE RECENTRADO: Le ordenamos volver a su posición exacta en la cuadrícula
			// y movemos su malla visual al centro del hueco para que no se desparrame.
			NewDado->SetActorLocation(BlockLocation);
			NewDado->BlockMesh->SetRelativeLocation(FVector(-25.f, -25.f, -25.f));

			NewDado->SetActorScale3D(FVector(BlockSize, BlockSize, BlockSize));
			NewDado->OwningGrid = this;

			// Añadimos el dado a la lista
			ListaDados.Add(NewDado);
		}

		// Código original del bloque (mantenido y comentado)
		// AMyProject2Block* NewBlock = GetWorld()->SpawnActor<AMyProject2Block>(BlockLocation, FRotator(0,0,0));
		// NewBlock->CambiarTamanio(newSize);
	}

	UE_LOG(LogTemp, Warning, TEXT("Cantidad total de dados en la lista: %d"), ListaDados.Num());
}

void AMyProject2BlockGrid::AddScore(int32 PuntosASumar)
{
	// Score++;
	Score = Score + PuntosASumar;
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Puntuacion: {0}"), FText::AsNumber(Score)));
}

#undef LOCTEXT_NAMESPACE