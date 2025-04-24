//$ Copyright 2024, Code Respawn Henry - All Rights Reserved $//

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSimpleLobbySystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
