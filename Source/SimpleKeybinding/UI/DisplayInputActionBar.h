// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

#pragma once

// UE
#include "CoreMinimal.h"
#include "Components/DynamicEntryBoxBase.h"
// 
#include "DisplayInputActionBar.generated.h"

class UCommonButtonBase;

/// <summary>
/// 可以自訂要顯示InputAction
/// <para>* 不像UCommonBoundActionBar自動抓取</para>
/// </summary>
UCLASS(ClassGroup = UI)
class SIMPLEKEYBINDING_API UDisplayInputActionBar : public UDynamicEntryBoxBase
{
	GENERATED_BODY()

	// ~Begin UWidget Interface
protected:
	virtual void OnWidgetRebuilt() override;

#if WITH_EDITOR
	void ValidateCompiledDefaults(IWidgetCompilerLog& CompileLog) const override;
#endif
	// ~End UWidget Interface

private:
	void UpdateDisplayInputAction();

private:
	UPROPERTY(EditAnywhere, Category = "EntryLayout", meta = (MustImplement = "/Script/SimpleKeybinding.DisplayInputActionInterface"))
	TSubclassOf<UCommonButtonBase> ActionButtonClass;

	UPROPERTY(EditAnywhere, Category = "Input")
	TArray<FDataTableRowHandle> InputActions;
};
