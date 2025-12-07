// Copyright 2021 Starbreeze AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JukeboxEditorFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class JUKEBOXEDITORFUNCS_API UJukeboxEditorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure,Category="JukeboxCpp")
	static UPrimaryDataAsset* GetPDAClassObject(UObject* ClassType);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JukeboxCpp",meta=(DeterminesOutputType="ClassType"))
	static UObject* GetClassDefaultObject(UObject* ClassType);
};
