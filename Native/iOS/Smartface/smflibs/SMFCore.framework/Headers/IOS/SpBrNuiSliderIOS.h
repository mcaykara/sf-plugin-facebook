/*
 * SpBrNuiSliderIOS.h
 *
 *  Created on: 25 May 2012
 *      Author: ugur kilic
 */

#ifndef SPBRNUISLIDERIOS_H_
#define SPBRNUISLIDERIOS_H_

#include "Core/SpBrNuiSlider.h"

class SpBrNuiSliderIOS: public SpBrNuiSlider {
public:
	SpBrNuiSliderIOS(SpBrBase* base, SpContext* context);
    SpBrNuiSliderIOS(SpBrNuiSliderIOS *objectToCopy);
	virtual ~SpBrNuiSliderIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    bool created;
    void* superView;
    int viewIndex;
    bool recreate;
};


#endif /* SPBRNUISLIDERIOS_H_ */
