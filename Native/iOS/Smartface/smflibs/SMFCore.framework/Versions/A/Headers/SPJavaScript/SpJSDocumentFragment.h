//
//  SpJSDocumentFragment.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSDocumentFragment_h
#define SpratIOS_SpJSDocumentFragment_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (documentfragment);
SpJsHasProperty (documentfragment);
SpJsGetProperty (documentfragment);
SpJsSetProperty (documentfragment);
SpJsGetPropertyNames (documentfragment);
SpJsFinalize (documentfragment);

extern const SpJsClassDefinition documentfragment_def;


#endif
