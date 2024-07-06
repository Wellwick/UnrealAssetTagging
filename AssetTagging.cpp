// ----------------------------------------------------------------------------
// Copyright (c) Wellwick
// Licensed under the MIT license.  
// See LICENSE.TXT in the project root for license information.
// ----------------------------------------------------------------------------

#include "AssetTagging.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_GAME_MODULE(FAssetTagging, AssetTagging);

DEFINE_LOG_CATEGORY(LogAssetTagging)

void FAssetTagging::StartupModule()
{
    UE_LOG(LogAssetTagging, Log, TEXT("AssetTagging: Log Started"));
}

void FAssetTagging::ShutdownModule()
{
    UE_LOG(LogAssetTagging, Log, TEXT("AssetTagging: Log Ended"));
}
