// MIT

#include "Utility/UIFunctionLibrary.h"
#include "Engine/UserInterfaceSettings.h"

void UUIFunctionLibrary::SetUIScale(float CustomUIScale)
{
	UUserInterfaceSettings* UISettings = GetMutableDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass());

	if (UISettings)
	{
		UISettings->ApplicationScale = CustomUIScale;
	}
}

void UUIFunctionLibrary::ConvertTemperature(EMeasurementFormat InputType, float TempIn, EMeasurementFormat &OutputType, float &Temp)
{
	if (InputType == EMeasurementFormat::Metric)
	{
		float fahr;
		fahr = (1.8 * TempIn) + 32.0;
		OutputType = EMeasurementFormat::Imperial;
		Temp = fahr;
	}
	else
	{
		float cel;
		cel = (TempIn - 32) / 1.8;
		OutputType = EMeasurementFormat::Metric;
		Temp = cel;
	}
}

void UUIFunctionLibrary::ConvertDistance(EMeasurementFormat InputType, float DistanceIn, EMeasurementFormat &OutputType, float &Distance)
{
	if (InputType == EMeasurementFormat::Metric)
	{
		float inches;
		inches = DistanceIn / 2.54;
		OutputType = EMeasurementFormat::Imperial;
		Distance = inches;
	}
	else 
	{
		float centimeters;
		centimeters = DistanceIn * 2.54;
		OutputType = EMeasurementFormat::Metric;
		Distance = centimeters;
	}
}

void UUIFunctionLibrary::ConvertTime(int HourIn, int MinuteIn, int SecondIn, ETimePeriod TimePeriodIn, ETimeFormat TimeFormatIn, int &Hour, int &Minute, int &Second, ETimePeriod &TimePeriod, ETimeFormat &TimeFormat)
{
	Hour = HourIn;
	Minute = MinuteIn;
	Second = SecondIn;
}

void UUIFunctionLibrary::IsLeapYear(int Year, bool &IsLeapYear)
{
	if (((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0))
		IsLeapYear = true;
	else
		IsLeapYear = false;
}

int UUIFunctionLibrary::GetNumberOfDays(int Month, int Year)
{
	//Leap Year condition, if Month is 2
	if (Month == 2)
	{
		if ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0))
			return 29;
		else
			return 28;
	}
	//months which has 31 days
	else if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8
		|| Month == 10 || Month == 12)
		return 31;
	else
		return 30;
}