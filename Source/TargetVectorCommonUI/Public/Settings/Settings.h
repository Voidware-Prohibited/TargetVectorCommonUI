#pragma once

#include "Settings.generated.h"

UENUM(BlueprintType)
enum class EProfanityFilterLevel : uint8
{
	Disabled UMETA(DisplayName = "All Profanity"),
	Basic UMETA(DisplayName = "Basic"),
	Medium UMETA(DisplayName = "Medium"),
	Large UMETA(DisplayName = "Strict"),
};

UENUM(BlueprintType)
enum class EGoreFilterLevel : uint8
{
	Disabled UMETA(DisplayName = "All Gore"),
	NoGibs UMETA(DisplayName = "No Dismemberment"),
	NoLongDeath UMETA(DisplayName = "No Long Death and No Dismemberment"),
	None UMETA(DisplayName = "None"),
};

UENUM(BlueprintType)
enum class ENudityFilterLevel : uint8
{
	Disabled UMETA(DisplayName = "All Nudity"),
	Basic UMETA(DisplayName = "Blurred"),
	None UMETA(DisplayName = "None"),
};