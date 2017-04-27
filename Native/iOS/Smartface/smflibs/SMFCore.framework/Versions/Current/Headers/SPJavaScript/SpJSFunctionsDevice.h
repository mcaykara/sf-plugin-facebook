#include "SpJsEngine/Core/SpJsEngine.h"
//
//  SpJSFunctionsDevice.h
//  SpratIOS
//
//  Created by Antti Panula on 12/7/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSFunctionsDevice__
#define __SpratIOS__SpJSFunctionsDevice__

SpJsFunction (cb_device_setAccelerometerStatus);
SpJsFunction (cb_device_setGPSStatus);
SpJsFunction (cb_device_turnLightsOn);
SpJsFunction (cb_device_vibrate);
SpJsFunction (cb_device_canOpenUrl);
SpJsFunction (cb_device_getPackageInfo);
SpJsFunction (cb_device_captureScreen);
SpJsFunction (cb_touch_authenticate);
SpJsFunction (cb_touch_authenticate);
SpJsFunction (cb_device_checkpermission);
SpJsFunction (cb_device_requestpermissions);
SpJsFunction (cb_device_shouldShowRequestPermissionRationale);
SpJsFunction (cb_check_update);
SpJsFunction (cb_download_update);
SpJsFunction (cb_update_all);
SpJsFunction (cb_update_cancel);
SpJsFunction (cb_restart);

#endif /* defined(__SpratIOS__SpJSFunctionsDevice__) */
