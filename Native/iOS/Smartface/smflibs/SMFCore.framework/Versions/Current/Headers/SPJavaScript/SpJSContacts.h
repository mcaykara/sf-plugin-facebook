//
//  SpJSContacts.h
//  SpratIOS
//
//  Created by Antti Panula on 11/11/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSContacts__
#define __SpratIOS__SpJSContacts__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfcontacts);

SpJsHasProperty (smfcontacts);

SpJsGetProperty (smfcontacts);

SpJsSetProperty (smfcontacts);

SpJsGetPropertyNames (smfcontacts);

extern const SpJsClassDefinition smfcontacts_def;

#endif /* defined(__SpratIOS__SpJSContacts__) */
