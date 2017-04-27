//
//  SpJSWebView.h
//
//  Created by adem on 30.11.2012 -- 5.
//

#ifndef SpratIOS_SpJSWebView_h
#define SpratIOS_SpJSWebView_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfwebview);
SpJsHasProperty (smfwebview);
SpJsGetProperty (smfwebview);
SpJsSetProperty (smfwebview);
SpJsGetPropertyNames (smfwebview);
SpJsConstructor (smfwebview);
SpJsFinalize (smfwebview);

extern const SpJsClassDefinition smfwebview_def;

#endif
