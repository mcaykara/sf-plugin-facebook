#include "SpJsEngine/Core/SpJsEngine.h"
//
//  SpJSCanvas.h
//  SpratIOS
//
//  Created by Selcuk Yayla, 5th March 2014.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSActionBarMenuItem__
#define __SpratIOS__SpJSActionBarMenuItem__
#ifdef TARGET_PLATFORM_ANDROID
#include "Core/SpDefs.h"

SpJsInit (smfactionmenuitem);

SpJsHasProperty (smfactionmenuitem);

SpJsGetProperty (smfactionmenuitem);

SpJsSetProperty (smfactionmenuitem);

SpJsConstructor (smfactionmenuitem);

SpJsFinalize (smfactionmenuitem);

SpJsGetPropertyNames (smfactionmenuitem);

extern const SpJsClassDefinition smfactionmenuitem_def;
#endif
#endif /* defined(__SpratIOS__SpJSActionBar__) */
