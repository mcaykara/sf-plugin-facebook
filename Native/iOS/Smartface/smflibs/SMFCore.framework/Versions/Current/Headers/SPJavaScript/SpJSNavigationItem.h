//
//  SpJSNavigationItem.h
//  Smartface
//
//  Created by ugur kilic on 04/03/2014
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SPJSNAVIGATIONITEM__
#define __SPJSNAVIGATIONITEM__
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"
#ifdef TARGET_PLATFORM_IOS

#include "Core/SpDefs.h"

SpJsHasProperty (spjsnavigationitem);
SpJsGetProperty (spjsnavigationitem);
SpJsSetProperty (spjsnavigationitem);
SpJsGetProperty (spjsnavigationitem);

extern const SpJsClassDefinition spjsnavigationitem_def;
#endif

#endif /* defined(__SPJSNAVIGATIONITEM__) */
