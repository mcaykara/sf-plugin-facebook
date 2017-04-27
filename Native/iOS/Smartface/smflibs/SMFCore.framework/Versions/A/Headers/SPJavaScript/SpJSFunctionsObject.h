#include "SpJsEngine/Core/SpJsEngine.h"
//
//  SpJSFunctionsObject.h
//  SpratIOS
//
//  Created by Antti Panula on 1.11.2012 -- 1.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSFunctionsObject_h
#define SpratIOS_SpJSFunctionsObject_h

SpJsFunction (cb_object_remove_from_parent);

SpJsFunction (cb_object_reset_object);

SpJsFunction (cb_object_toString);

SpJsFunction (cb_object_animate);

SpJsFunction (cb_object_alert);

SpJsFunction (cb_object_btoa);

SpJsFunction (cb_object_atob);

SpJsFunction (cb_object_pick);

SpJsFunction (cb_object_cancelpick);


SpJsFunction (cb_object_cropImage);

SpJsFunction (cb_object_showDatePicker);

SpJsFunction (cb_object_showTimePicker);

SpJsFunction (cb_object_contacts_getAll);

SpJsFunction (cb_object_contacts_pick);
SpJsValue cb_object_contacts_pick_old(
                                   SpJsObject function,
                                   SpJsObject thisObject,
                                   size_t argumentCount,
                                   const SpJsValue arguments[],
                                   SpJsValue* exception);

SpJsFunction (cb_object_add_contact);

SpJsFunction (cb_object_setTimeout);

SpJsFunction (cb_object_setInterval);


SpJsFunction (cb_object_clearTimeout);

SpJsFunction (cb_object_log);

SpJsFunction (cb_object_currentThread);

SpJsFunction (cb_gestures_addGesture);

SpJsFunction (cb_gestures_removeGesture);

#endif
