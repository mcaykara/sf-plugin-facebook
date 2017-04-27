//
//  SpJSXMLSerializer.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSXMLSerializer_h
#define SpratIOS_SpJSXMLSerializer_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (xmlserializer);
SpJsHasProperty (xmlserializer);
SpJsGetProperty (xmlserializer);
SpJsSetProperty (xmlserializer);
SpJsGetPropertyNames (xmlserializer);
SpJsFinalize (xmlserializer);
SpJsConstructor (xmlserializer);

SpJsFunction (cb_xmlserializer_serialize_to_string);



extern const SpJsClassDefinition xmlserializer_def;


#endif
