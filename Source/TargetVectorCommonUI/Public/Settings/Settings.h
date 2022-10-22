#pragma once

#include "Settings.generated.h"

UENUM(BlueprintType)
enum class EProfanityFilterLevel : uint8
{
	Disabled UMETA(DisplayName = "All Profanity"),
	Basic UMETA(DisplayName = "Basic"),
	Medium UMETA(DisplayName = "Medium"),
	Large UMETA(DisplayName = "Strict"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EProfanityFilterLevel, EProfanityFilterLevel::Count);

UENUM(BlueprintType)
enum class EGoreFilterLevel : uint8
{
	Disabled UMETA(DisplayName = "All Gore"),
	NoGibs UMETA(DisplayName = "No Dismemberment"),
	NoLongDeath UMETA(DisplayName = "No Long Death and No Dismemberment"),
	None UMETA(DisplayName = "None"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EGoreFilterLevel, EGoreFilterLevel::Count);

UENUM(BlueprintType)
enum class ENudityFilterLevel : uint8
{
	Disabled UMETA(DisplayName = "All Nudity"),
	Basic UMETA(DisplayName = "Blurred"),
	None UMETA(DisplayName = "None"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(ENudityFilterLevel, ENudityFilterLevel::Count);

UENUM(BlueprintType)
enum class EColorBlindFilter : uint8
{
	Disabled UMETA(DisplayName = "Disabled"),
	Protanope UMETA(DisplayName = "Protanope"),
	Deuteranope UMETA(DisplayName = "Deuteranope"),
	Tritanope UMETA(DisplayName = "Tritanope"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EColorBlindFilter, EColorBlindFilter::Count);