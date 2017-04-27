//
//  SpJSCommentNode.h
//  SpratIOS
//
//  Created by Antti Panula on 6.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSCommentNode_h
#define SpratIOS_SpJSCommentNode_h

#include "Core/SpDefs.h"
#include "SpJSNode.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (commentnode);
SpJsHasProperty (commentnode);
SpJsGetProperty (commentnode);
SpJsSetProperty (commentnode);
SpJsGetPropertyNames (commentnode);
SpJsFinalize (commentnode);


extern const SpJsClassDefinition commentnode_def;

#endif
