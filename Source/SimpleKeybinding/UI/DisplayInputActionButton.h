// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

#pragma once

// UE
#include "CoreMinimal.h"
// CommonUI
#include "CommonButtonBase.h"
//
#include "UI/IDisplayInputActionInterface.h"
// 
#include "DisplayInputActionButton.generated.h"

class UCommonTextBlock;

/// <summary>
/// 配合DisplayInputActionBar顯示按鈕
/// </summary>
UCLASS(Abstract, meta = (DisableNativeTick))
class SIMPLEKEYBINDING_API UDisplayInputActionButton : public UCommonButtonBase, public IDisplayInputActionInterface
{
	GENERATED_BODY()
	
public:
	// ~Begin IDisplayInputActionInterface
	virtual void SetInputAction_Implementation(FDataTableRowHandle InputActionRow) override;
	// ~End IDisplayInputActionInterface

protected:
	// ~Begin CommonButtonBase
	virtual void UpdateInputActionWidget() override;
	// ~End CommonButtonBase

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "BindWidget")
	TObjectPtr<UCommonTextBlock> Text_ActionName;

	FDataTableRowHandle CurrentInputAction;
};
