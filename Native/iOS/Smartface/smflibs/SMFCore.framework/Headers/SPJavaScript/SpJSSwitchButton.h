//
//  SpJSSwitchButton.h
//  SpratIOS
//
//  Created by Antti Panula on 12/18/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSSwitchButton__
#define __SpratIOS__SpJSSwitchButton__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfswitchbutton);
SpJsHasProperty (smfswitchbutton);
SpJsGetProperty (smfswitchbutton);
SpJsSetProperty (smfswitchbutton);
SpJsGetPropertyNames (smfswitchbutton);
SpJsConstructor (smfswitchbutton);
SpJsFinalize (smfswitchbutton);

extern const SpJsClassDefinition smfswitchbutton_def;

#endif /* defined(__SpratIOS__SpJSSwitchButton__) */
