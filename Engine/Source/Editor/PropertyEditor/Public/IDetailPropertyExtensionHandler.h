// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

class IDetailPropertyExtensionHandler
{
public:
	virtual ~IDetailPropertyExtensionHandler(){ }

	virtual bool IsPropertyExtenable(const UClass* InObjectClass, const class IPropertyHandle& PropertyHandle) const = 0;

	virtual TSharedRef<SWidget> GenerateExtensionWidget(const UClass* InObjectClass, TSharedPtr<IPropertyHandle> PropertyHandle) = 0;
};
