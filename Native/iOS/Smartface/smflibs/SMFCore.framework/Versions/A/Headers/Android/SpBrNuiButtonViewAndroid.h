/*
 * SpBrNuiButtonViewAndroid.h
 *
 *  Created on: Jul 19, 2011
 *      Author: timo
 */

#ifndef SPBRNUIBUTTONVIEWANDROID_H_
#define SPBRNUIBUTTONVIEWANDROID_H_




#include "Core/SpBrNuiButtonView.h"

class SpBrNuiButtonViewAndroid: public SpBrNuiButtonView {
public:
	SpBrNuiButtonViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiButtonViewAndroid(SpBrNuiButtonViewAndroid *objectToCopy);
	virtual ~SpBrNuiButtonViewAndroid();
	void Load();
	void SetNativeText(SpBrString* string);
    void SetNativeImage(SpBrString *value,bool fromNetwork);
	void Invalidate(bool skipMainProperty = false);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    void SetDisabledFontColor();
    void changeEnabledAndroid();
public:
    bool isInRepeatbox;
};

#endif /* SPBRNUIBUTTONVIEWANDROID_H_ */
