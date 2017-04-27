//
//  SpJSImageButton.h
//  SpratIOS
//
//  Created by Antti Panula on 30.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSImageButton_h
#define SpratIOS_SpJSImageButton_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfimagebutton);
SpJsHasProperty (smfimagebutton);
SpJsGetProperty (smfimagebutton);
SpJsSetProperty (smfimagebutton);
SpJsGetPropertyNames (smfimagebutton);
SpJsConstructor (smfimagebutton);
SpJsFinalize (smfimagebutton);

extern const SpJsClassDefinition smfimagebutton_def;
#endif
