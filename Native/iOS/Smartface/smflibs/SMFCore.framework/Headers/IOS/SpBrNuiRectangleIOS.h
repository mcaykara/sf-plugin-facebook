/*
 * SpBrNuiRectangleIOS.h
 *
 *  Created on: Aug 18, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUIRECTANGLEIOS_H_
#define SPBRNUIRECTANGLEIOS_H_

#include "Core/SpBrNuiRectangle.h"

class SpBrNuiRectangleIOS: public SpBrNuiRectangle {
public:
	SpBrNuiRectangleIOS(SpBrBase* base, SpContext* context);
    SpBrNuiRectangleIOS(SpBrNuiRectangleIOS* objectToCopy);
	virtual ~SpBrNuiRectangleIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void ShowNativeObject(bool value);
};

#endif /* SPBRNUIRECTANGLEIOS_H_ */
