//
//  SpJSDOMParser.h
//  SpratIOS
//
//  Created by Antti Panula on 6.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSDOMParser_h
#define SpratIOS_SpJSDOMParser_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (domparser);
SpJsHasProperty (domparser);
SpJsGetProperty (domparser);
SpJsSetProperty (domparser);
SpJsGetPropertyNames (domparser);
SpJsConstructor (domparser);
SpJsFinalize (domparser);
SpJsFunction (cb_domparser_clone);
SpJsFunction (cb_domparser_parse_from_string);
SpJsFunction (cb_domparser_parse_from_file);

extern const SpJsClassDefinition domparser_def;

#endif
