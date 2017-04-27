//
//  SpJSColor.h
//  SpratIOS
//
//  Created by Antti Panula on 11/7/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSColor_h
#define SpratIOS_SpJSColor_h

#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfcolor);

SpJsFinalize (smfcolor);

SpJsHasProperty (smfcolor);

SpJsGetProperty (smfcolor);

SpJsSetProperty (smfcolor);

int smfcolor_jsvalue_to_color(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfcolor);

SpJsValue smfcolor_color_to_jsvalue(int color);

extern const SpJsClassDefinition smfcolor_def;


#endif
