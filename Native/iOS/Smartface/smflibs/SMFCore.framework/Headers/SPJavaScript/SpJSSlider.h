//
//  SpJSSlider.h
//  SpratIOS
//
//  Created by Antti Panula on 12/1/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSSlider__
#define __SpratIOS__SpJSSlider__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfslider);
SpJsHasProperty (smfslider);
SpJsGetProperty (smfslider);
SpJsSetProperty (smfslider);
SpJsGetPropertyNames (smfslider);
SpJsConstructor (smfslider);
SpJsFinalize (smfslider);

extern const SpJsClassDefinition smfslider_def;

#endif /* defined(__SpratIOS__SpJSSlider__) */
