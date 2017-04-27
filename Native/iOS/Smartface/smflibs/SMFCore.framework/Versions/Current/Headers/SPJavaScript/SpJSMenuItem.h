//
//  SpJSMenuItem.h
//  SpratIOS
//
//  Created by Antti Panula on 12/18/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSMenuItem__
#define __SpratIOS__SpJSMenuItem__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfmenuitem);

SpJsHasProperty (smfmenuitem);

SpJsGetProperty (smfmenuitem);

SpJsSetProperty (smfmenuitem);

SpJsGetPropertyNames (smfmenuitem);

extern const SpJsClassDefinition smfmenuitem_def;

#endif /* defined(__SpratIOS__SpJSMenuItem__) */
