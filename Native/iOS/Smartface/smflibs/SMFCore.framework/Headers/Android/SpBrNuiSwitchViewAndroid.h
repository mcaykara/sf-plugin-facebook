/*
 * SpBrNuiSwitchViewIOS.h
 *
 *  Created on: Oct 20, 2011
 *      Author: ugur
 */

#ifndef SPBRNUISWITCHVIEWANDROID_H_
#define SPBRNUISWITCHVIEWANDROID_H_

#include "Core/SpBrNuiSwitchView.h"

class SpBrNuiSwitchViewAndroid : public SpBrNuiSwitchView {
public:
	SpBrNuiSwitchViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiSwitchViewAndroid(SpBrNuiSwitchViewAndroid *objectToCopy);
	virtual ~SpBrNuiSwitchViewAndroid();

	void Load();
    void Invalidate(bool skipMainProperty = false);

    bool GetCheckedNative();
    void SetNativeChecked(bool status);
    int GetSwitchHeight();
    int GetSwitchWidth();
    void NotifyChecked(bool isChecked);
};

#endif /* SPBRNUISWITCHVIEWIOS_H_ */

