//
//  SpJSPages.h
//  SpratIOS
//
//  Created by Antti Panula on 30.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSPages_h
#define SpratIOS_SpJSPages_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfpages);

SpJsHasProperty (smfpages);

SpJsGetProperty (smfpages);

SpJsSetProperty (smfpages);

SpJsGetPropertyNames (smfpages);

extern const SpJsClassDefinition smfpages_def;

#endif
