// Fill out your copyright notice in the Description page of Project Settings.

#include "SpaceGame.h"
#include "Star.h"
#include "SpaceGameGameMode.h"


// Sets default values
AStar::AStar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->AttachTo(RootComponent);

	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Trigger->AttachTo(mesh);
	Trigger->OnComponentBeginOverlap.AddDynamic(this, &AStar::OnBeginOverlap);
	Trigger->OnComponentEndOverlap.AddDynamic(this, &AStar::OnEndOverlap);

	ownedBy = OwnedBy::Neutral;
	//fleet = nullptr;
}


// Called when the game starts or when spawned
void AStar::BeginPlay()
{
	Super::BeginPlay();

	shipBuildTimer = prodTime;
}

// Called every frame
void AStar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	if (fleet == nullptr)
	{
		TArray<AActor*> fleets;
		GetOverlappingActors(fleets, AFleet::StaticClass());
		if (fleets.Num() == 1)
		{
			fleet = Cast<AFleet>(fleets.Pop());
			ownedBy = fleet->ownedBy;
		}
	}
	else
		fleet->IncreaseMorale(DeltaTime);

	shipBuildTimer -= DeltaTime;
	if (shipBuildTimer < 0 && ownedBy != OwnedBy::Neutral)
	{
		if (fleet == nullptr)
		{
			FVector location = GetActorLocation();
			FRotator rotation = GetActorRotation();
			fleet = Cast<AFleet>(GetWorld()->SpawnActor(fleetBP, &location, &rotation));
			fleet->GiveShipType(Cast<ASpaceGameGameMode>(GetWorld()->GetAuthGameMode())->GetShipType(ownedBy));
			fleet->ownedBy = ownedBy;
			fleet->SetLastVisitedStar(this);
		}
		else
			fleet->AddShip();

		shipBuildTimer = prodTime;
	}
}
void AStar::OnBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->IsA(AFleet::StaticClass()))
	{
		AFleet* newFleet = Cast<AFleet>(OtherActor);
		if (newFleet->ownedBy != OwnedBy::Neutral)
		{
			if (fleet == nullptr)
			{
				fleet = newFleet;
				ownedBy = fleet->ownedBy;
				fleet->StarDefence(starDefence);
			}
		}
	}
}
void AStar::OnEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (fleet != nullptr)
	{
		fleet->StarDefence(0);
		fleet = nullptr;
	}
}

AFleet* AStar::GetFleet()
{
	return fleet;
}