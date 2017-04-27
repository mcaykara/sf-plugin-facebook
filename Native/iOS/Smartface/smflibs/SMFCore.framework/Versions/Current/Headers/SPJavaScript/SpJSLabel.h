//
//  SpJSLabel.h
//  SpratIOS
//
//  Created by Antti Panula on 30.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSLabel_h
#define SpratIOS_SpJSLabel_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smflabel);
SpJsHasProperty (smflabel);
SpJsGetProperty (smflabel);
SpJsSetProperty (smflabel);
SpJsGetPropertyNames (smflabel);
SpJsConstructor (smflabel);
SpJsFinalize (smflabel);

extern const SpJsClassDefinition smflabel_def;

#endif
