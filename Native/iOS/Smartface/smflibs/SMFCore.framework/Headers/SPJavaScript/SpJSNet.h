//
//  SpJSNet.h
//
//  Created by adem on 15.11.2012
//

#ifndef SpratIOS_SpJSNet_h
#define SpratIOS_SpJSNet_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfnet);

SpJsHasProperty (smfnet);

SpJsGetProperty (smfnet);

SpJsSetProperty (smfnet);

SpJsGetPropertyNames (smfnet);

extern const SpJsClassDefinition smfnet_def;

#endif
