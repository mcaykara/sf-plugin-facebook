//
//  SpJSBLE.h
//  Smartface.io
//
//  Created by ugur on 05.06.2014
//

#ifndef SMARTFACE_BLE_H
#define SMARTFACE_BLE_H

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfble);
SpJsGetProperty (smfble);
SpJsGetPropertyNames (smfble);

extern const SpJsClassDefinition smfble_def;

extern const SpJsClassDefinition smfble_event_argument_def;

#endif /* SMARTFACE_BLE_H */
