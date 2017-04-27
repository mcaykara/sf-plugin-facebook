//
//  SpJSAdRequest.h
//  SpratIOS
//
//  Created by Mehmet Akyol on 23/09/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpJSAdRequest_h
#define SpratIOS_SpJSAdRequest_h
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfadrequest);
SpJsHasProperty (smfadrequest);
SpJsGetProperty (smfadrequest);
SpJsSetProperty (smfadrequest);
SpJsGetPropertyNames (smfadrequest);
SpJsConstructor (smfadrequest);
SpJsFinalize (smfadrequest);

SpJsFunction (cb_smfadrequest_addtestdevice);

extern const SpJsClassDefinition smfadrequest_def;

#endif
