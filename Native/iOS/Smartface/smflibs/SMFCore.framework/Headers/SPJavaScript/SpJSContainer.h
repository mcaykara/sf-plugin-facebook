//
//  SpJSContainer.h
//  SpratIOS
//
//  Created by Antti Panula on 11/12/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSContainer__
#define __SpratIOS__SpJSContainer__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfcontainer);
SpJsHasProperty (smfcontainer);
SpJsGetProperty (smfcontainer);
SpJsSetProperty (smfcontainer);
SpJsGetPropertyNames (smfcontainer);
SpJsConstructor (smfcontainer);
SpJsFinalize (smfcontainer);

extern const SpJsClassDefinition smfcontainer_def;

#endif /* defined(__SpratIOS__SpJSContainer__) */
