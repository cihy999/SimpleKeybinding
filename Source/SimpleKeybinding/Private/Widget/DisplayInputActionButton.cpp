// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

// Self
#include "Widget/DisplayInputActionButton.h"
// CommonUI
#include "CommonActionWidget.h"
#include "CommonTextBlock.h"

void UDisplayInputActionButton::SetInputAction_Implementation(FDataTableRowHandle InputActionRow)
{
	CurrentInputAction = InputActionRow;
	UpdateInputActionWidget();
}

void UDisplayInputActionButton::UpdateInputActionWidget()
{
	if (!GetInputSubsystem())
	{
		return;
	}

	FText DisplayName = FText();
	if (InputActionWidget)
	{
		InputActionWidget->SetInputAction(CurrentInputAction);
		DisplayName = InputActionWidget->GetDisplayText();
	}
	if (Text_ActionName)
	{
		Text_ActionName->SetText(DisplayName);
	}
}
