//
//  SpJSMenu.h
//  SpratIOS
//
//  Created by Antti Panula on 12/12/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSMenu__
#define __SpratIOS__SpJSMenu__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfmenu);

SpJsHasProperty (smfmenu);

SpJsGetProperty (smfmenu);

SpJsSetProperty (smfmenu);

SpJsGetPropertyNames (smfmenu);

SpJsConstructor (smfmenu);

SpJsFinalize (smfmenu);

extern const SpJsClassDefinition smfmenu_def;

#endif /* defined(__SpratIOS__SpJSMenu__) */
