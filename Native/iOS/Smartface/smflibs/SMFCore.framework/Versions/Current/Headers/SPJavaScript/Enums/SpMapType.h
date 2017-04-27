//
//  SpJSMapType.h
//
//  Created by adem on 29.11.2012 -- 5.
//

#ifndef __SpratIOS__SpJSMapType__
#define __SpratIOS__SpJSMapType__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"


SpJsInit (smfmaptype);

SpJsHasProperty (smfmaptype);

SpJsGetProperty (smfmaptype);

SpJsSetProperty (smfmaptype);

bool js_set_maptype_value_to_view(SpJsValue value, SpBrNuiMapView* view);

SpJsGetPropertyNames (smfmaptype);

extern const SpJsClassDefinition smfmaptype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
