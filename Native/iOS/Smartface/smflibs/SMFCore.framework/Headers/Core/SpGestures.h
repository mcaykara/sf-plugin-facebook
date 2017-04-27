//
//  SpGestures.h
//  SpratIOS
//
//  Created by mehmet akyol on 10/21/13.
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SpratIOS__SpGestures__
#define __SpratIOS__SpGestures__

#include <iostream>
#include "SpBrString.h"

class SpGestures {
	SpBrString *gestureId;
    char *type;
    char *direction;
    int requiredTouches;
    int requiredTaps;
    
public:
    SpGestures();
    SpGestures(const SpGestures &obj);
    ~SpGestures();
    void setGestureId(SpBrString *tempId);
    void setType(char *tempType);
    void setDirection(char *tempDirection);
    void setTouches(int touches);
    void setTaps(int taps);
    SpBrString* getGestureId();
    char* const& getType();
    char* const& getDirection();
    int const& getTouches();
    int const& getTaps();
    
};


#endif /* defined(__SpratIOS__SpGestures__) */
