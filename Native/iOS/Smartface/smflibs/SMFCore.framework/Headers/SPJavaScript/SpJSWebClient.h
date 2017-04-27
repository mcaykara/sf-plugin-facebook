//
//  SpJSWebClient.h
//
//  Created by adem on 15.11.2012
//

#ifndef SpratIOS_SpJSWebClient_h
#define SpratIOS_SpJSWebClient_h

#include "Core/SpDefs.h"
#include "SPJavaScript/SpJSNetworkObject.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfwebclient);
SpJsHasProperty (smfwebclient);
SpJsGetProperty (smfwebclient);
SpJsGetPropertyNames (smfwebclient);
SpJsSetProperty (smfwebclient);
SpJsConstructor (smfwebclient);

extern const SpJsClassDefinition smfwebclient_def;

#endif
