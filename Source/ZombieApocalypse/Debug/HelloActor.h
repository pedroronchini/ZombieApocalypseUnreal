#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HelloActor.generated.h" // sempre o último include

// Actor de teste da Etapa 0: confirma que o C++ compila e roda no editor.
UCLASS()
class ZOMBIEAPOCALYPSE_API AHelloActor : public AActor
{
	GENERATED_BODY()

public:
	AHelloActor();

protected:
	virtual void BeginPlay() override;

private:
	// Editável no painel Details, como um [SerializeField] na Unity.
	UPROPERTY(EditAnywhere, Category = "Debug")
	FString Message = TEXT("Olá, Unreal!");

	UPROPERTY(EditAnywhere, Category = "Debug", meta = (ClampMin = "0.5"))
	float DisplayDuration = 5.0f;
};