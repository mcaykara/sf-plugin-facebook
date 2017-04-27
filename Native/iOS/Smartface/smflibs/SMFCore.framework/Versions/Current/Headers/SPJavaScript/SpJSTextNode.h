//
//  SpJSTextNode.h
//  SpratIOS
//
//  Created by Antti Panula on 6.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSTextNode_h
#define SpratIOS_SpJSTextNode_h

#include "Core/SpDefs.h"
#include "SpJSNode.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (textnode);
SpJsHasProperty (textnode);
SpJsGetProperty (textnode);
SpJsSetProperty (textnode);
SpJsGetPropertyNames (textnode);
SpJsFinalize (textnode);


extern const SpJsClassDefinition textnode_def;

#endif
