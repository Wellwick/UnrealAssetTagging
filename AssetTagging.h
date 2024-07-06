// ----------------------------------------------------------------------------
// Copyright (c) Wellwick
// Licensed under the MIT license.  
// See LICENSE.TXT in the project root for license information.
// ----------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAssetTagging, All, All)

class FAssetTagging final : public IModuleInterface
{
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};

