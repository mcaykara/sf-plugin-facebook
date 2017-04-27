//
//  SpBrNuiGestureViewIOS.h
//  SpratIOS
//
//  Created by mehmet akyol on 5/13/13.

#ifndef SpratIOS_SpBrNuiGestureViewIOS_h
#define SpratIOS_SpBrNuiGestureViewIOS_h

#include "Core/SpBrNuiBase.h"
#include "Core/SpBrNuiGesture.h"

class SpBrNuiGestureViewIOS: public SpBrNuiGesture {
public:
	SpBrNuiGestureViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiGestureViewIOS(SpBrNuiGestureViewIOS* objectToCopy);
    virtual ~SpBrNuiGestureViewIOS();
public:
	void Load();
    void Invalidate(bool skipMainProperty = false);
};

#endif
