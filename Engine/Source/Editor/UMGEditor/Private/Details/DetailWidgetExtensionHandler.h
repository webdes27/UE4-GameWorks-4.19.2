// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Editor/PropertyEditor/Public/IDetailPropertyExtensionHandler.h"

class FDetailWidgetExtensionHandler : public IDetailPropertyExtensionHandler
{
public:
	FDetailWidgetExtensionHandler(TSharedPtr<class FWidgetBlueprintEditor> InBlueprintEditor);

	virtual bool IsPropertyExtenable(const UClass* InObjectClass, const class IPropertyHandle& PropertyHandle) const override;

	virtual TSharedRef<SWidget> GenerateExtensionWidget(const UClass* InObjectClass, TSharedPtr<IPropertyHandle> PropertyHandle) override;

private:
	TWeakPtr<class FWidgetBlueprintEditor> BlueprintEditor;
};