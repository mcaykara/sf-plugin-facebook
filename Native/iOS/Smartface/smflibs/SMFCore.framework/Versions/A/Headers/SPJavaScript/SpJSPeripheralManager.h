//
//  SpJSPeripheralManager.h
//  SpratIOS
//
//  Created by Mehmet Akyol on 09/06/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpJSPeripheralManager_h
#define SpratIOS_SpJSPeripheralManager_h

#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfperipheralmanager);
SpJsHasProperty (smfperipheralmanager);
SpJsGetProperty (smfperipheralmanager);
SpJsSetProperty (smfperipheralmanager);
SpJsGetPropertyNames (smfperipheralmanager);
SpJsFinalize (smfperipheralmanager);
SpJsConstructor (smfperipheralmanager);

extern const SpJsClassDefinition smfperipheralmanager_def;

#endif
