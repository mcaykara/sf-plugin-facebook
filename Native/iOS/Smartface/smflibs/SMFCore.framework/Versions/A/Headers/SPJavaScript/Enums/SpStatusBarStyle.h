//
//  SpStatusBarStyle.h
//
//  Created by ugur on 18.03.2014
//

#ifndef __SPRATIOS__SPSTATUSBARSTYLE__
#define __SPRATIOS__SPSTATUSBARSTYLE__

#include "Core/SpBrNuiActivityIndicator.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfstatusbarstyle);
SpJsHasProperty (smfstatusbarstyle);
SpJsGetProperty (smfstatusbarstyle);
SpJsGetPropertyNames (smfstatusbarstyle);

bool js_set_statusbarstyle_value(SpJsValue value);

extern const SpJsClassDefinition smfstatusbarstyle_def;

#endif /* defined(__SPRATIOS__SPSTATUSBARSTYLE__) */
