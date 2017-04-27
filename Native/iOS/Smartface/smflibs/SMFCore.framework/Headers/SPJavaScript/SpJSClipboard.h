//
//  SpJSClipboard.h
//  SpratIOS
//
//  Created by Antti Panula on 12/3/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSClipboard__
#define __SpratIOS__SpJSClipboard__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfclipboard);

SpJsHasProperty (smfclipboard);

SpJsGetProperty (smfclipboard);

SpJsSetProperty (smfclipboard);

SpJsGetPropertyNames (smfclipboard);

extern const SpJsClassDefinition smfclipboard_def;
#endif /* defined(__SpratIOS__SpJSClipboard__) */
