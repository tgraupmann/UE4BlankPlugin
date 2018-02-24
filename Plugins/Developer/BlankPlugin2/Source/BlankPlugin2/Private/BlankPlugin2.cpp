// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "BlankPlugin2PrivatePCH.h"


class FBlankPlugin2 : public IBlankPlugin2
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FBlankPlugin2, BlankPlugin2 )



void FBlankPlugin2::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FBlankPlugin2::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



