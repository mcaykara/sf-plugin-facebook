/*
 * SpBrNuiSliderIOS.h
 *
 *  Created on: 20 Jun 2012
 *      Author: adem cayir
 */

#ifndef SPBRNUISLIDERANDROID_H_
#define SPBRNUISLIDERANDROID_H_

#include "Core/SpBrNuiSlider.h"

class SpBrNuiSliderAndroid: public SpBrNuiSlider {
public:
	SpBrNuiSliderAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiSliderAndroid(SpBrNuiSliderAndroid *objectToCopy);
	virtual ~SpBrNuiSliderAndroid();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void SetValue(int val);
	void FiringEventOnThis(int eventID, int eventCode = -1);
	void Reset(bool invalidate);
	int GetSliderHeight();
};


#endif /* SPBRNUISLIDERANDROID_H_ */
