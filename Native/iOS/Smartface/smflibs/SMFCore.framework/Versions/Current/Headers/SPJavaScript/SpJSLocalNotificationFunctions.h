//
//  SpJSLocalNotificationFunctions.h
//  Smartface
//
//  Created by Ugur Kilic on 05/11/2014.
//

#ifndef __SMARTFACE_LOCAL_NOTIFICATION_FUNCTIONS__
#define __SMARTFACE_LOCAL_NOTIFICATION_FUNCTIONS__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smflocal);
SpJsGetProperty (smflocal);
SpJsSetProperty (smflocal);
SpJsGetPropertyNames (smflocal);


extern const SpJsClassDefinition smflocal_def;

SpJsFunction (cb_local_schedulenotification);
SpJsFunction (cb_local_schedulednotifications);
SpJsFunction (cb_local_cancelnotification);
SpJsFunction (cb_local_presentnotification);

SpJsFunction (cb_local_notifynotification);

#endif /* defined(__SMARTFACE_LOCAL_NOTIFICATION_FUNCTIONS__) */
