//
//  SpJSDataTable.h
//
//  Created by adem on 27/12/12.
//

#ifndef SpratIOS_SpJSDataTable_h
#define SpratIOS_SpJSDataTable_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfdatatable);
SpJsHasProperty (smfdatatable);
SpJsGetProperty (smfdatatable);
SpJsSetProperty (smfdatatable);
SpJsGetPropertyNames (smfdatatable);

extern const SpJsClassDefinition smfdatatable_def;


#endif
