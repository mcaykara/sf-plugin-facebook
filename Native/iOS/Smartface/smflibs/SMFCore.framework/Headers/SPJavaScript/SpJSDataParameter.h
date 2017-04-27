//
//  SpJSDataParameter.h
//  SpratIOS
//
//  Created by ugur kilic on 1/8/13.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSDataParameter__
#define __SpratIOS__SpJSDataParameter__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfdataparameter);
SpJsHasProperty (smfdataparameter);
SpJsGetProperty (smfdataparameter);
SpJsSetProperty (smfdataparameter);
SpJsConstructor (smfdataparameter);
SpJsFinalize (smfdataparameter);
SpJsGetPropertyNames (smfdataparameter);

class SpBrString;
class SmfDataParameter
{
public:
    SpBrString *name;
    SpBrString *value;
    SpBrString *bind;
    SpJsObject objectRef;

public:
    SmfDataParameter();
    ~SmfDataParameter();
};

extern const SpJsClassDefinition smfdataparameter_def;

#endif /* defined(__SpratIOS__SpJSDataParameter__) */
