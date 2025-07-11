#pragma once
#include "CoreMinimal.h"
#include "SBZGasGrenadeData.h"
#include "SBZPlayerGasGrenadeData.generated.h"

UCLASS(Blueprintable)
class USBZPlayerGasGrenadeData : public USBZGasGrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSeconds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPenetration;
    
public:
    USBZPlayerGasGrenadeData();

};

