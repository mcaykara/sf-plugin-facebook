//
//  SpJSElement.h
//  SpratIOS
//
//  Created by Antti Panula on 6.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSElement_h
#define SpratIOS_SpJSElement_h

#include "Core/SpDefs.h"
#include "SpJSNode.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (element);
SpJsHasProperty (element);
SpJsGetProperty (element);
SpJsSetProperty (element);
SpJsGetPropertyNames (element);
SpJsFinalize (element);


extern const SpJsClassDefinition element_def;

#endif
