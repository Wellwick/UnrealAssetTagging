// ----------------------------------------------------------------------------
// Copyright (c) Wellwick
// Licensed under the MIT license.  
// See LICENSE.TXT in the project root for license information.
// ----------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "TaggedAsset.generated.h"
#include "Clang/ClangPlatform.h"

/**
 * An interface for an asset that has tags in its metadata. Implementation is required on the asset to specify the
 * metadata tags, but they are automatically populated via an editor subsystem.
 */
UINTERFACE(MinimalAPI, Blueprintable)
class UTaggedAsset : public UInterface
{
	GENERATED_BODY()
};

/** Interface declaration for ITaggedAsset. */
class ITaggedAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	virtual void AddTags();

	/** Places tags in metadata and marks this asset as one that can be viewed for tag metadata. */
	void PopulateTagsToMetadata() const;

	/** Gets the tags for this asset. */
	UFUNCTION(BlueprintCallable)
	FGameplayTagContainer GetTags() const;

	/** Gets the tags for a given asset. */
	static FGameplayTagContainer GetTags(const TSoftObjectPtr<UObject> Asset); 

private:
	/** The tags which will be added to the metadata of this asset. */
	FGameplayTagContainer Tags;
};
