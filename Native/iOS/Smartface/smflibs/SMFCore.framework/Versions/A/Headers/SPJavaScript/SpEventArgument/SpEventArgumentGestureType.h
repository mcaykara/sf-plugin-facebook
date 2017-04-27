//
//  SpEventArgumentGestureType.h
//  SpratIOS
//
//  Created by mehmet akyol on 5/20/13.
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpEventArgumentGestureType_h
#define SpratIOS_SpEventArgumentGestureType_h

#include <vector>
#include <string>

#include "SpEventArgument.h"

class SpEventArgumentGestureType : public SpEventArgument {
private:
	int gestureDirection;
    char *gestureTypePtr;
public:
	SpEventArgumentGestureType(int direction);
	~SpEventArgumentGestureType();
    int GetPropertyType(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    void findGestureType();
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};



#endif
