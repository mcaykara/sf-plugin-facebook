//
//  SpJSNotifications.h
//  SpratIOS
//
//  Created by adem on 28/12/12.
//

#ifndef __SpratIOS__SpJSNotifications__
#define __SpratIOS__SpJSNotifications__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfnotifications);

SpJsHasProperty (smfnotifications);

SpJsGetProperty (smfnotifications);

SpJsSetProperty (smfnotifications);

SpJsGetPropertyNames (smfnotifications);

extern const SpJsClassDefinition smfnotifications_def;

extern const SpJsClassDefinition spjsnotificationtypesenum_def;

#endif /* defined(__SpratIOS__SpJSNavigationBar__) */
