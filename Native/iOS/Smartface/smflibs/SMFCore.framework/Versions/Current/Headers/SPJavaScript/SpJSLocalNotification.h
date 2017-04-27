//
//  SpJSLocalNotification.h
//  Smartface
//
//  Created by Ugur Kilic on 05/11/2014.
//

#ifndef __SMARTFACE_LOCAL_NOTIFICATION__
#define __SMARTFACE_LOCAL_NOTIFICATION__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (localnotification);
SpJsGetProperty (localnotification);
SpJsSetProperty (localnotification);
SpJsGetPropertyNames (localnotification);
SpJsConstructor (localnotification);

extern const SpJsClassDefinition smflocalnotification_def;

extern const SpJsClassDefinition smflocalnotificationdummy_def;


#endif /* defined(__SMARTFACE_LOCAL_NOTIFICATION__) */
