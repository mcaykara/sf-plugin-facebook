//
//  SpJSQuickLook.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 19/02/16.
//  Copyright © 2016 Smartface. All rights reserved.
//

#ifndef SpJSQuickLook_h
#define SpJSQuickLook_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smf_quicklook);
SpJsGetProperty (smf_quicklook);
SpJsSetProperty (smf_quicklook);
SpJsGetPropertyNames (smf_quicklook);
SpJsConstructor (smf_quicklook);
SpJsFinalize (smf_quicklook);

extern const SpJsClassDefinition smf_quicklook_def;

//Callback Functions

SpJsFunction(cb_quicklook_show);

#endif /* SpJSQuickLook_h */
