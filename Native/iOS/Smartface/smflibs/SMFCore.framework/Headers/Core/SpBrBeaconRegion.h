//
//  SpBrBeaconRegion.h
//  Smartface.io
//
//  Created by ugur on 05.06.2014
//

#ifndef _SPBRBEACONREGION_H_
#define _SPBRBEACONREGION_H_

#include "SpDefs.h"
#include "SpDefs.h"
#include <string>
#include "SpJsEngine/Core/SpJsEngine.h"

using namespace std;

class SpBrBeaconRegion
{
public:
	SpBrBeaconRegion();
	virtual ~SpBrBeaconRegion();

public:
    SpJsObject objectRef;
    string proximityUUID;
    string identifier;
    int major, minor;
};

#endif /* _SPBRBEACONREGION_H_ */
