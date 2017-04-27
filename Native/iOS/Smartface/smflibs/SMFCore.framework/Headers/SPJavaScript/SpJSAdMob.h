//
//  SpJSAdMob.h
//  SpratIOS
//
//  Created by Antti Panula on 12/10/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSAdMob__
#define __SpratIOS__SpJSAdMob__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfadmob);
SpJsHasProperty (smfadmob);
SpJsGetProperty (smfadmob);
SpJsSetProperty (smfadmob);
SpJsGetPropertyNames (smfadmob);
SpJsConstructor (smfadmob);
SpJsFinalize (smfadmob);

SpJsFunction (cb_smfadmob_load);

extern const SpJsClassDefinition smfadmob_def;

#endif /* defined(__SpratIOS__SpJSAdMob__) */
