//
//  SpBrBluetoothManager.h
//  Smartface.io
//
//  Created by ugur on 05.06.2014
//

#ifndef _SPBRBLUETOOTHMANAGER_H_
#define _SPBRBLUETOOTHMANAGER_H_

#include "SpDefs.h"
#include "SpDefs.h"

#include <string>
#include <map>
#include <list>
#include "SpJsEngine/Core/SpJsEngine.h"
using namespace std;

class SpJSCallbackGroup;
class SpBrBeaconRegion;

extern const char* onBluetoothFunctionEnterRegion;
extern const char* onBluetoothFunctionExitRegion;
extern const char* onBluetoothFunctionStartMonitoringForRegion;
extern const char* onBluetoothFunctionDetermineState;
extern const char* onBluetoothFunctionRangeBeacons;
extern const char* onBluetoothFunctionFailForRegion;

extern const char* onBluetoothBeaconRegionObject;

class SpBrBluetoothManager {
public:
	SpBrBluetoothManager();
	virtual ~SpBrBluetoothManager();

public:
    static SpBrBluetoothManager* SharedManager();

public:
    void StartMonitoringForRegion(SpJsObject beaconRegionObject, SpJSCallbackGroup *callbacks, map<string, int> functionIndexes);
    void StartRangingBeaconsInRegion(SpJsObject beaconRegionObject);
    void StopMonitoringForRegion(SpJsObject beaconRegionObject);
    void StopRangingBeaconsInRegion(SpJsObject beaconRegionObject);
    SpJsValue PeripheralDataWithMeasuredPower(SpJsObject beaconRegionObject, double measuredPower);

    bool IsBLESupported();

    void TriggerEvent(const char* identifier, const char* functionName, SpJsObject argObject = SpJsNullObject);
    SpJsObject GetBeaconRegionRef(const char* identifier);

private:
    void *delegate;
    map<SpBrBeaconRegion *, SpJSCallbackGroup *>regionCallbackMap;
    map<SpBrBeaconRegion *, std::map<string, int> >eventIndexes;
};

#endif /* _SPBRBLUETOOTHMANAGER_H_ */
