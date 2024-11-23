// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

#pragma once

// UE
#include "CoreMinimal.h"
#include "Components/DynamicEntryBoxBase.h"
// 
#include "DisplayInputActionBar.generated.h"

/// <summary>
/// 可以自訂要顯示InputAction
/// <para>* 不像UCommonBoundActionBar自動抓取</para>
/// </summary>
UCLASS(ClassGroup = UI)
class SIMPLEKEYBINDING_API UDisplayInputActionBar : public UDynamicEntryBoxBase
{
	GENERATED_BODY()
	
};
