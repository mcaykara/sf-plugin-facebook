//
//  SearchBarStyle.h
//  Smartface
//
//  Created by ugur kilic on 30/12/2014.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef __SMARTFACE_SEARCHBARSTYLE__
#define __SMARTFACE_SEARCHBARSTYLE__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfsearchbarstyle);
SpJsGetProperty (smfsearchbarstyle);
SpJsGetPropertyNames (smfsearchbarstyle);

TBarStyle smfsearchbarstyle_jsvalue_convert(SpJsValue value, bool &success);

extern const SpJsClassDefinition smfsearchbarstyle_def;

#endif /* defined(__SMARTFACE_SEARCHBARSTYLE__) */
