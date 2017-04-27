//
//  SpJSCanvas.h
//  SpratIOS
//
//  Created by Selcuk Yayla, 4th March 2014.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSActionBar__
#define __SpratIOS__SpJSActionBar__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

#ifdef TARGET_PLATFORM_ANDROID

SpJsInit (smfactionbar);

SpJsHasProperty (smfactionbar);

SpJsGetProperty (smfactionbar);

SpJsSetProperty (smfactionbar);

SpJsConstructor (smfactionbar);

SpJsFinalize (smfactionbar);

SpJsGetPropertyNames (smfactionbar);

extern const SpJsClassDefinition smfactionbar_def;

#endif

#endif /* defined(__SpratIOS__SpJSActionBar__) */
