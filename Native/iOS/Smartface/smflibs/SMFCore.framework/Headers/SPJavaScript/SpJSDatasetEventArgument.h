/*
 * SpBrDatabaseOperator.cpp
 *
 *  Created on: Agu 21, 2013
 *      Author: ugurkilic
 */

#ifndef SpratIOS_SpJSDatasetEventArgument_h
#define SpratIOS_SpJSDatasetEventArgument_h

#include <stdlib.h>
#include <vector>
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfdataseteventargument);

SpJsHasProperty (smfdataseteventargument);

SpJsGetPropertyNames (smfdataseteventargument);

//SpJsGetProperty (smfdataseteventargument);

SpJsSetProperty (smfdataseteventargument);

SpJsFinalize (smfdataseteventargument);

extern const SpJsClassDefinition smfdataseteventargument_def;

#endif
