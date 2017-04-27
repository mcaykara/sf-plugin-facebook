//
//  SpJSApplication.h
//  SpratIOS
//
//  Created by Antti Panula on 11/6/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSData_h
#define SpratIOS_SpJSData_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfdata);

SpJsHasProperty (smfdata);

SpJsGetProperty (smfdata);

SpJsSetProperty (smfdata);

SpJsGetPropertyNames (smfdata);

extern const SpJsClassDefinition smfdata_def;


#endif
