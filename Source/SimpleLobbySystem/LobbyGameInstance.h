//$ Copyright 2024, Code Respawn Henry - All Rights Reserved $//

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LobbyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLELOBBYSYSTEM_API ULobbyGameInstance : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	static ULobbyGameInstance* GetInstance();

	static TWeakObjectPtr<ULobbyGameInstance> Instance;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UPROPERTY(BlueprintReadWrite,Category = GameInstance)
	FText PlayerName;

	UPROPERTY(BlueprintReadWrite,Category = GameInstance)
	int SkinIndex;
};
