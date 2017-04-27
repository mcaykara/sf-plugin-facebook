//
//  SpJSAttributeNode.h
//  SpratIOS
//
//  Created by Antti Panula on 7.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSAttributeNode_h
#define SpratIOS_SpJSAttributeNode_h

#include "Core/SpDefs.h"
#include "SpJSNode.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (attributenode);
SpJsHasProperty (attributenode);
SpJsGetProperty (attributenode);
SpJsSetProperty (attributenode);
SpJsGetPropertyNames (attributenode);
SpJsFinalize (attributenode);


extern const SpJsClassDefinition attributenode_def;

#endif
