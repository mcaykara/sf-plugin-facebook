//
//  SpJSPage.h
//  SpratIOS
//
//  Created by Antti Panula on 30.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSPage_h
#define SpratIOS_SpJSPage_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfpage);
SpJsHasProperty (smfpage);
SpJsGetProperty (smfpage);
SpJsSetProperty (smfpage);
SpJsGetPropertyNames (smfpage);
SpJsConstructor (smfpage);
SpJsFinalize (smfpage);

extern const SpJsClassDefinition smfpage_def;

#endif
