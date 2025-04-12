// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

// Self
#include "Widget/DisplayInputActionBar.h"
// UE
#include "Editor/WidgetCompilerLog.h"
// CommonUI
#include "CommonButtonBase.h"
//
#include "Widget/IDisplayInputActionInterface.h"

void UDisplayInputActionBar::OnWidgetRebuilt()
{
	Super::OnWidgetRebuilt();

	if (!IsDesignTime())
	{
		// 建好介面就立即更新一次
		UpdateDisplayInputAction();
	}
}

#if WITH_EDITOR
void UDisplayInputActionBar::ValidateCompiledDefaults(IWidgetCompilerLog& CompileLog) const
{
	Super::ValidateCompiledDefaults(CompileLog);

	if (!ActionButtonClass)
	{
		FString Msg = FString::Printf(TEXT("%s has no ActionButtonClass specified."), *GetName());
		CompileLog.Error(FText::FromString(Msg));
	}
	else if (CompileLog.GetContextClass() && ActionButtonClass->IsChildOf(CompileLog.GetContextClass()))
	{
		FString Msg = FString::Printf(TEXT("%s has a recursive ActionButtonClass specified (reference itself)."), *GetName());
		CompileLog.Error(FText::FromString(Msg));
	}
}
#endif

void UDisplayInputActionBar::UpdateDisplayInputAction()
{
	ResetInternal();

	if (!IsEntryClassValid(ActionButtonClass))
	{
		return;
	}

	for (auto& Action : InputActions)
	{
		UUserWidget* ActionButton = CreateEntryInternal(ActionButtonClass);
		if (ensure(ActionButton))
		{
			if (ActionButton->Implements<UDisplayInputActionInterface>())
			{
				IDisplayInputActionInterface::Execute_SetInputAction(ActionButton, Action);
			}
		}
	}
}
