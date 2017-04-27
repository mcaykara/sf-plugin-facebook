//
//  SpBrPeripheralManager.h
//  SpratIOS
//
//  Created by Mehmet Akyol on 09/06/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpBrPeripheralManager_h
#define SpratIOS_SpBrPeripheralManager_h

#include "SpDefs.h"
#include "SpDefs.h"
#include "SpBrObject.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrPeripheralManager : SpBrObject {

public:
	SpBrPeripheralManager();
    void createPeripheralManager();
	virtual ~SpBrPeripheralManager();

    void startAdvertising(SpJsObject dictionary);
    void stopAdvertising();
    bool getIsAdvertising();
    SpJsObject GetJSObjectRef();

    bool optionShowPowerAlertKey;
    bool optionRestoreIdentifierKey;

    void *delegate;
    SpJsObject onUpdateStateRef;
    SpJsObject objectRef;
};
#endif
