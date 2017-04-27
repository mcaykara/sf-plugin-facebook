//
//  SpJSBarButtonItem.h
//  Smartface
//
//  Created by ugur kilic on 04/03/2014
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SPJSBARBUTTONITEM__
#define __SPJSBARBUTTONITEM__
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"
#ifdef TARGET_PLATFORM_IOS

#include "Core/SpDefs.h"

SpJsHasProperty (spjsbarbuttonitem);
SpJsGetProperty (spjsbarbuttonitem);
SpJsGetPropertyNames (spjsbarbuttonitem);
SpJsSetProperty (spjsbarbuttonitem);
SpJsConstructor (spjsbarbuttonitem);
SpJsFinalize (spjsbarbuttonitem);

extern const SpJsClassDefinition spjsbarbuttonitem_def;

#endif

#endif /* defined(__SPJSBARBUTTONITEM__) */
