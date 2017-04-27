//
//  SpJSRepeatBox.h
//  SpratIOS
//
//  Created by Antti Panula on 1.11.2012 -- 1.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSRepeatBox_h
#define SpratIOS_SpJSRepeatBox_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfrepeatbox);
SpJsHasProperty (smfrepeatbox);
SpJsGetProperty (smfrepeatbox);
SpJsSetProperty (smfrepeatbox);
SpJsGetPropertyNames (smfrepeatbox);
SpJsConstructor (smfrepeatbox);
SpJsFinalize (smfrepeatbox);

extern const SpJsClassDefinition smfrepeatbox_def;


#endif
