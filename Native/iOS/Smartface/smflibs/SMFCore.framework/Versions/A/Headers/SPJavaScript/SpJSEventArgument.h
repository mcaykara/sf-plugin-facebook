//
//  SpJSEventArgument.h
//
//  Created by adem on 19.11.2012 -- 5.
//

#ifndef SpratIOS_SpJSEventArgument_h
#define SpratIOS_SpJSEventArgument_h
#include <stdlib.h>
#include <vector>
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfeventargument);

SpJsHasProperty (smfeventargument);

SpJsGetProperty (smfeventargument);

SpJsSetProperty (smfeventargument);

SpJsFinalize (smfeventargument);

SpJsGetPropertyNames (smfeventargument);

extern const SpJsClassDefinition smfeventargument_def;

#endif
