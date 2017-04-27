//
//  SpJSFunctionsBluetooth.h
//  Smartface.io
//
//  Created by ugur kilic on 5/5/14.
//  Copyright (c) 2014 smartface.io. All rights reserved.
//

#ifndef __SMARTFACE__SPJSFUNCTIONSBLUETOOTH_H_
#define __SMARTFACE__SPJSFUNCTIONSBLUETOOTH_H_

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsFunction (cb_ble_startMonitoringForRegion);

SpJsFunction (cb_ble_startRangingBeaconsInRegion);

SpJsFunction (cb_ble_stopMonitoringForRegion);

SpJsFunction (cb_ble_stopRangingBeaconsInRegion);

SpJsFunction (cb_ble_peripheralDataWithMeasuredPower);

SpJsFunction (cb_ble_isBLESupported);

SpJsFunction (cb_ble_startAdvertising);

SpJsFunction (cb_ble_stopAdvertising);

SpJsFunction (cb_ble_isAdvertising);

#endif /* __SMARTFACE__SPJSFUNCTIONSBLUETOOTH_H_ */
