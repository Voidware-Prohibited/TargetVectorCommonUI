// MIT

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TARGETVECTORCOMMONUI_API UUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Custom UI scale 1.0f == 100%, 2.0f == 200%, 0.5f == 50% etc.
	UFUNCTION(BlueprintCallable, Category = "User Interface")
	static void SetUIScale(float CustomUIScale);

};