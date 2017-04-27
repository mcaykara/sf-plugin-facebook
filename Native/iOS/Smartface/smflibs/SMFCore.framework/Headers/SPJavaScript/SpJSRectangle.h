//
//  SpJSRectangle.h
//  SpratIOS
//
//  Created by Antti Panula on 12/1/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSRectangle__
#define __SpratIOS__SpJSRectangle__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiRectangle;

SpJsInit (smfrectangle);
SpJsHasProperty (smfrectangle);
SpJsGetProperty (smfrectangle);
SpJsSetProperty (smfrectangle);
SpJsGetPropertyNames (smfrectangle);
SpJsConstructor (smfrectangle);
SpJsFinalize (smfrectangle);

bool js_set_gradient_orientation(SpBrNuiRectangle* view, SpJsValue value, bool initial);

extern const SpJsClassDefinition smfrectangle_def;


#endif /* defined(__SpratIOS__SpJSRectangle__) */
