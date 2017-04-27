//
//  SpNotificationProirity.h
//
//  Created by nosaiba on 14/11/2014.
//
//

#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfnotificationpriority);

SpJsHasProperty (smfnotificationpriority);

SpJsGetProperty (smfnotificationpriority);

SpJsSetProperty (smfnotificationpriority);

SpJsGetPropertyNames (smfnotificationpriority);


int smfnotificationpriority_string_to_int(SpJsValue value);

extern const SpJsClassDefinition smfNotificationPriority_def;
