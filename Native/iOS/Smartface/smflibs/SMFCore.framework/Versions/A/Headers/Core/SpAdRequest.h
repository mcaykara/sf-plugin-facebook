//
//  SpAdRequest.h
//  SpratIOS
//
//  Created by Mehmet Akyol on 23/09/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpAdRequest_h
#define SpratIOS_SpAdRequest_h

#include <iostream>
#include "SpDefs.h"
#include "SpBrNuiBase.h"
#include "SpUtLocation.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpAdRequest{
public:
    SpAdRequest();

    char* birthday;
    int gender;
    SpUtLocation *location;
public:
    void setBirthday(char* day);
    void setGender(int gen);
    void setLocation(SpUtLocation *utLoc);
    char* getBirthday();
    int getgender();
    SpUtLocation* getLocation();
    SpJsObject GetJSObjectRef();
    std::vector<char*> testDeviceIds;
private:
    SpJsObject classObj;
};

#endif
