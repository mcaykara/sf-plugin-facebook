//
//  SpJSXPathNSResolver.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSXPathNSResolver_h
#define SpratIOS_SpJSXPathNSResolver_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (xpathnsresolver);
SpJsHasProperty (xpathnsresolver);
SpJsGetProperty (xpathnsresolver);
SpJsSetProperty (xpathnsresolver);
SpJsGetPropertyNames (xpathnsresolver);
SpJsFinalize (xpathnsresolver);

extern const SpJsClassDefinition xpathnsresolver_def;

SpJsFunction (cb_xpathnsresolver_lookup_namespace_URI);

#endif
