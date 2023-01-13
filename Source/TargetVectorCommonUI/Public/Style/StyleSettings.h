#pragma once

#include "Engine/Texture2D.h"
#include "Engine/EngineTypes.h"
#include "Styling/SlateColor.h"
#include "Components/EditableTextBox.h"
#include "Layout/Margin.h"
#include "NativeGameplayTags.h"
#include "CommonButtonBase.h"
#include "Fonts/SlateFontInfo.h"
#include "StyleSettings.generated.h"

UENUM(BlueprintType)
enum class ESize : uint8
{
	ExtraSmall UMETA(DisplayName = "Extra Small"),
	Small UMETA(DisplayName = "Small"),
	Medium UMETA(DisplayName = "Medium"),
	Large UMETA(DisplayName = "Large"),
	ExtraLarge UMETA(DisplayName = "Extra Large"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(ESize, ESize::Count);

UENUM(BlueprintType)
enum class EFValidationState : uint8
{
	Message UMETA(DisplayName = "Message"),
	Warning UMETA(DisplayName = "Warning"),
	Error UMETA(DisplayName = "Error"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EFValidationState, EFValidationState::Count);

UENUM(BlueprintType)
enum class EWidgetCenter : uint8
{
	ScreenCenter UMETA(DisplayName = "Screen Center"),
	MousePosition UMETA(DisplayName = "Mouse Position"),
	Location UMETA(DisplayName = "Location"),
};

UENUM(BlueprintType)
enum class EHorizontalEnumList : uint8
{
	Left UMETA(DisplayName = "Left"),
	Center UMETA(DisplayName = "Center"),
	Right UMETA(DisplayName = "Right"),
};

UENUM(BlueprintType)
enum class ETimeFormat : uint8
{
	TwelveHour UMETA(DisplayName = "12 Hour"),
	TwentyFourHour UMETA(DisplayName = "24 Hour"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(ETimeFormat, ETimeFormat::Count);

UENUM(BlueprintType)
enum class ETimePeriod : uint8
{
	AM UMETA(DisplayName = "AM"),
	PM UMETA(DisplayName = "PM"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(ETimePeriod, ETimePeriod::Count);

UENUM(BlueprintType)
enum class EDateFormat : uint8
{
	DayMonthYear UMETA(DisplayName = "DD/MM/YYYY"),
	YearMonthDay UMETA(DisplayName = "YYYY/MM/DD"),
	MonthDayYear UMETA(DisplayName = "MM/DD/YYYY"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EDateFormat, EDateFormat::Count);

UENUM(BlueprintType)
enum class EMeasurementFormat : uint8
{
	Metric UMETA(DisplayName = "Metric"),
	Imperial UMETA(DisplayName = "Imperial"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EMeasurementFormat, EMeasurementFormat::Count);

UENUM(BlueprintType)
enum class EUIColorSlot : uint8
{
	Primary UMETA(DisplayName = "Primary"),
	Background UMETA(DisplayName = "Background"),
	Confirm UMETA(DisplayName = "Confirm"),
	Back UMETA(DisplayName = "Back"),
	Modify UMETA(DisplayName = "Modify"),
	Delete UMETA(DisplayName = "Delete"),
	ConfirmAlt UMETA(DisplayName = "Confirm Alt"),
	Enemy UMETA(DisplayName = "Enemy"),
	Neutral UMETA(DisplayName = "Neutral"),
	Self UMETA(DisplayName = "Self"),
	Fireteam UMETA(DisplayName = "Fireteam"),
	Command UMETA(DisplayName = "Command"),
	Section UMETA(DisplayName = "Section"),
	Organization UMETA(DisplayName = "Organization"),
	Count UMETA(Hidden)
};
ENUM_RANGE_BY_COUNT(EUIColorSlot, EUIColorSlot::Count);

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FButtonIconTextures
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> NormalHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> NormalClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Selected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> SelectedHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> SelectedClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Disabled;

};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FColorSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor NormalHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor NormalClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Selected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor SelectedHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor SelectedClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Disabled;

};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FCommonTextStyleSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSubclassOf<class UCommonTextStyle> ExtraSmall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSubclassOf<class UCommonTextStyle> Small;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSubclassOf<class UCommonTextStyle> Medium;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSubclassOf<class UCommonTextStyle> Large;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSubclassOf<class UCommonTextStyle> ExtraLarge;

};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FCommonTextStyles
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet NormalHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet NormalClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet Selected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet SelectedHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet SelectedClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FCommonTextStyleSet Disabled;

};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FFieldColorSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Warning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Error;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor Disabled;
};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FFieldCaptionIconTextures
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Warning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Error;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Disabled;

};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FFieldTextSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FText Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FText Warning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FText Error;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FText Disabled;
};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FMarginSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FMargin ExtraSmall { 0.0f, 0.0f, 0.0f, 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FMargin Small { 0.0f, 0.0f, 0.0f, 0.0f  };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FMargin Medium { 0.0f, 0.0f, 0.0f, 0.0f  };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FMargin Large { 0.0f, 0.0f, 0.0f, 0.0f  };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FMargin ExtraLarge { 0.0f, 0.0f, 0.0f, 0.0f  };
};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FSpacingSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FVector2D ExtraSmall { 0.0f, 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FVector2D Small { 0.0f, 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FVector2D Medium { 0.0f, 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FVector2D Large { 0.0f, 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FVector2D ExtraLarge { 0.0f, 0.0f };
};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FFloatSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	float ExtraSmall { 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	float Small { 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	float Medium { 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	float Large { 0.0f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	float ExtraLarge { 0.0f };
};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FEditableTextBoxStyleSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FEditableTextBoxStyle Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FEditableTextBoxStyle Warning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FEditableTextBoxStyle Error;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FEditableTextBoxStyle Disabled;

};

USTRUCT(BlueprintType)
struct TARGETVECTORCOMMONUI_API FUIAppStyle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Logo;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FColorSet TextColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FSlateColor BackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TSubclassOf<class UCommonButtonStyle> CommonButtonStyle;
};