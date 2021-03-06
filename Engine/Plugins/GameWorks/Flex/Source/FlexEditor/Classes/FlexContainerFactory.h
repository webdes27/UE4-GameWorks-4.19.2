// Copyright 1998-2013 Epic Games, Inc. All Rights Reserved.

//=============================================================================
// FlexContainerFactory
//=============================================================================

#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Factories/Factory.h"
#include "FlexContainerFactory.generated.h"

UCLASS(hidecategories=Object)
class FLEXEDITOR_API UFlexContainerFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	// Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class,UObject* InParent,FName Name,EObjectFlags Flags,UObject* Context,FFeedbackContext* Warn) override;
	// Begin UFactory Interface	
};



