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