//
//  SpJSImage.h
//  SpratIOS
//
//  Created by Antti Panula on 30.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSImage_h
#define SpratIOS_SpJSImage_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfimage);
SpJsHasProperty (smfimage);
SpJsGetProperty (smfimage);
SpJsSetProperty (smfimage);
SpJsGetPropertyNames (smfimage);
SpJsConstructor (smfimage);
SpJsFinalize (smfimage);

extern const SpJsClassDefinition smfimage_def;

#endif
