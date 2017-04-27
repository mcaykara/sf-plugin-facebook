/*
 * SpBrNuiSwitchViewIOS.h
 *
 *  Created on: Oct 20, 2011
 *      Author: ugur
 */

#ifndef SPBRNUISWITCHVIEWIOS_H_
#define SPBRNUISWITCHVIEWIOS_H_

#include "Core/SpBrNuiSwitchView.h"

class SpBrNuiSwitchViewIOS: public SpBrNuiSwitchView {
public:
	SpBrNuiSwitchViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiSwitchViewIOS(SpBrNuiSwitchViewIOS *objectToCopy);
	virtual ~SpBrNuiSwitchViewIOS();

	void Load();
    void Invalidate(bool skipMainProperty = false);

    bool GetCheckedNative();
    void SetNativeChecked(bool status);
    int GetSwitchHeight();
    int GetSwitchWidth();
};

#endif /* SPBRNUISWITCHVIEWIOS_H_ */

