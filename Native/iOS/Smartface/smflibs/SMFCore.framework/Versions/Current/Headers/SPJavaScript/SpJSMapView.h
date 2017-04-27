//
//  SpJSMapView.h
//
//  Created by adem on 29.11.2012 -- 5.
//

#ifndef SpratIOS_SpJSMapView_h
#define SpratIOS_SpJSMapView_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfmapview);
SpJsHasProperty (smfmapview);
SpJsGetProperty (smfmapview);
SpJsSetProperty (smfmapview);
SpJsGetPropertyNames (smfmapview);
SpJsConstructor (smfmapview);
SpJsFinalize (smfmapview);

SpJsFunction (cb_mapview_addPin);

SpJsFunction (cb_mapview_removePin);

SpJsFunction (cb_map_getpin);


extern const SpJsClassDefinition smfmapview_def;

#endif
