/*
 * SpBrNuiGesture.h
 *
 * Created on: May 10, 2013
 * Author: adem
 */

#ifndef SPBRNUIGESTUREANDROID_H_
#define SPBRNUIGESTUREANDROID_H_

#include "Core/SpBrNuiBase.h"
#include "Core/SpBrNuiGesture.h"

class SpBrNuiGestureAndroid: public SpBrNuiGesture {
public:
	SpBrNuiGestureAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiGestureAndroid(SpBrNuiGestureAndroid* objectToCopy);
    virtual ~SpBrNuiGestureAndroid();
public:
	void Load();
    void Invalidate(bool skipMainProperty = false);
};

#endif /* SPBRNUIRECTANGLE_H_ */
