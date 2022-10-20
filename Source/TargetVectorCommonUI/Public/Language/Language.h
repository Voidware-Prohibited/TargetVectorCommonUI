#pragma once

#include "Language.generated.h"

UENUM(BlueprintType)
enum class ELanguage : uint8
{
	EnglishUS UMETA(DisplayName = "English (American)"),
	EnglishUK UMETA(DisplayName = "English (European)"),
	SpanishLT UMETA(DisplayName = "Spanish (American)"),
	SpanishCS UMETA(DisplayName = "Spanish (European)"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(ELanguage, ELanguage::Count);