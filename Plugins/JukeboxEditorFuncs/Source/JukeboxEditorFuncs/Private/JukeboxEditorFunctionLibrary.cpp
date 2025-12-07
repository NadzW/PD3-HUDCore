// Copyright 2021 Starbreeze AB. All Rights Reserved.


#include "JukeboxEditorFunctionLibrary.h"

UPrimaryDataAsset* UJukeboxEditorFunctionLibrary::GetPDAClassObject(UObject* ClassType)
{
    if (!ClassType)
    {
        UE_LOG(LogTemp, Warning, TEXT("Null Reference"));
        return nullptr;
    }

    if (UBlueprint* BP = Cast<UBlueprint>(ClassType))
    {
        if (BP->GeneratedClass)
        {
            return Cast<UPrimaryDataAsset>(BP->GeneratedClass->GetDefaultObject());
        }
    }
    return Cast<UPrimaryDataAsset>(ClassType);
}

UObject* UJukeboxEditorFunctionLibrary::GetClassDefaultObject(UObject* ClassType)
{
    if (!ClassType)
    {
        UE_LOG(LogTemp, Warning, TEXT("Null Reference"));
        return nullptr;
    }
    return ClassType->GetClass()->GetDefaultObject();
}
