//
//  SpJSMapType.h
//
//  Created by adem on 30.11.2012 -- 5.
//

#ifndef __SpratIOS__SpJSActivityIndicatorStyle__
#define __SpratIOS__SpJSActivityIndicatorStyle__

#include "Core/SpBrNuiActivityIndicator.h"
#include "SpJsEngine/Core/SpJsEngine.h"


SpJsInit (smfactivityindicatorstyle);

SpJsHasProperty (smfactivityindicatorstyle);

SpJsGetProperty (smfactivityindicatorstyle);

SpJsSetProperty (smfactivityindicatorstyle);

bool js_set_activityindicatorstyle_value_to_view(SpJsValue value, SpBrNuiActivityIndicator* view);

SpJsGetPropertyNames (smfactivityindicatorstyle);

extern const SpJsClassDefinition smfactivityindicatorstyle_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
