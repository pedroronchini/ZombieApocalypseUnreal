#include "HelloActor.h"
#include "Engine/Engine.h"

AHelloActor::AHelloActor()
{
	// Sem Tick: equivale a não ter Update() na Unity.
	PrimaryActorTick.bCanEverTick = false;
}

void AHelloActor::BeginPlay()
{
	Super::BeginPlay(); // chama a implementação da classe base, como base.Start()

	// Equivalente ao Debug.Log: aparece no Output Log.
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);

	// Mensagem na tela, útil para testes rápidos.
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayDuration, FColor::Cyan, Message);
	}
}