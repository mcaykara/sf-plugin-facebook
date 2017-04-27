//
//  SpJSNavigationBarNew.h
//  Smartface
//
//  Created by ugur kilic on 04/03/2014
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SPJSNAVIGATIONBARNEW__
#define __SPJSNAVIGATIONBARNEW__
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"
#ifdef TARGET_PLATFORM_IOS

#include "Core/SpDefs.h"

SpJsHasProperty (spjsnavigationbarnew);
SpJsGetProperty (spjsnavigationbarnew);
SpJsSetProperty (spjsnavigationbarnew);
SpJsGetPropertyNames(spjsnavigationbarnew);

extern const SpJsClassDefinition spjsnavigationbarnew_def;

extern const SpJsClassDefinition spjsios_def;
#endif

#endif /* defined(__SPJSNAVIGATIONBARNEW__) */
