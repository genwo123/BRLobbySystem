//$ Copyright 2024, Code Respawn Henry - All Rights Reserved $//


#include "LobbyGameInstance.h"



TWeakObjectPtr<ULobbyGameInstance> ULobbyGameInstance::Instance;

ULobbyGameInstance* ULobbyGameInstance::GetInstance()
{
	return Instance.Get();
}

void ULobbyGameInstance::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	Instance = this;
}

void ULobbyGameInstance::Deinitialize()
{
	Super::Deinitialize();

	Instance = nullptr;
}
