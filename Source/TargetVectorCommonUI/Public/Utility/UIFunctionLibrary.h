// MIT

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Style/StyleSettings.h"
#include <TargetVectorCommonUI/Public/Style/StyleSettings.h>
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

	// Convert Temperature
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "User Interface")
	static void ConvertTemperature(EMeasurementFormat InputType, float TempIn, EMeasurementFormat &OutputType, float &Temp);

	// Convert Distance
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "User Interface")
	static void ConvertDistance(EMeasurementFormat InputType, float DistanceIn, EMeasurementFormat &OutputType, float &Distance);

	// Convert Time
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "User Interface")
	static void ConvertTime(int HourIn, int MinuteIn, int SecondIn, ETimePeriod TimePeriodIn, ETimeFormat TimeFormatIn, int &Hour, int& Minute, int& Second, ETimePeriod &TimePeriod, ETimeFormat &TimeFormat);

	// Check if Leap Year
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "User Interface")
	static void IsLeapYear(int Year, bool &IsLeapYear);

	// Get Number of Days in Month in given Year
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "User Interface")
	static int GetNumberOfDays(int Month, int Year);
};