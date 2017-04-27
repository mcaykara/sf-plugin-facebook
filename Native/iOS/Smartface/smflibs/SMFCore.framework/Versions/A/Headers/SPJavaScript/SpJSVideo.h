//
//  SpJSVideo.h
//  SpratIOS
//
//  Created by Antti Panula on 12/10/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSVideo__
#define __SpratIOS__SpJSVideo__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfvideo);
SpJsHasProperty (smfvideo);
SpJsGetProperty (smfvideo);
SpJsSetProperty (smfvideo);
SpJsGetPropertyNames (smfvideo);
SpJsConstructor (smfvideo);
SpJsFinalize (smfvideo);

extern const SpJsClassDefinition smfvideo_def;

#endif /* defined(__SpratIOS__SpJSVideo__) */
