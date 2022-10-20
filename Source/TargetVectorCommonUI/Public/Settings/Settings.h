#pragma once

#include "Settings.generated.h"

UENUM(BlueprintType)
enum class EProfanityLevel : uint8
{
	Disabled UMETA(DisplayName = "Disabled"),
	Basic UMETA(DisplayName = "Basic"),
	Medium UMETA(DisplayName = "Medium"),
	Large UMETA(DisplayName = "Strict"),
};

UENUM(BlueprintType)
enum class EGoreLevel : uint8
{
	All UMETA(DisplayName = "All"),
	NoGibs UMETA(DisplayName = "No Dismemberment"),
	NoLongDeath UMETA(DisplayName = "No Long Death and No Dismemberment"),
	NoBlood UMETA(DisplayName = "No Blood, No Dismemberment, No Long Death"),
	None UMETA(DisplayName = "None"),
};