//
//  SpJSScrollView.h
//  SpratIOS
//
//  Created by Antti Panula on 11/12/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSScrollView__
#define __SpratIOS__SpJSScrollView__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfscrollview);
SpJsHasProperty (smfscrollview);
SpJsGetProperty (smfscrollview);
SpJsSetProperty (smfscrollview);
SpJsGetPropertyNames (smfscrollview);
SpJsConstructor (smfscrollview);
SpJsFinalize (smfscrollview);

extern const SpJsClassDefinition smfscrollview_def;

#endif /* defined(__SpratIOS__SpJSScrollView__) */
