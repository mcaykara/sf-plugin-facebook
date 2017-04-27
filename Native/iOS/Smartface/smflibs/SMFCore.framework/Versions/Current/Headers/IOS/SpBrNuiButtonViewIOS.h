/*
 * SpBrNuiButtonViewIOS.h
 *
 *  Created on: 4 Aug 2011
 *      Author: Ali Can
 */

#ifndef SPBRNUIBUTTONVIEWIOS_H_
#define SPBRNUIBUTTONVIEWIOS_H_

#include "Core/SpBrNuiButtonView.h"

#define KImageButtonLabelMargin 0

class SpUtRect;

class SpBrNuiButtonViewIOS: public SpBrNuiButtonView {
public:
	SpBrNuiButtonViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiButtonViewIOS(SpBrNuiButtonViewIOS *objectToCopy);
	virtual ~SpBrNuiButtonViewIOS();

	void Load();
    void Invalidate(bool skipMainProperty = false);
    void SetRect(SpUtRect rect, bool invalidate);
    void SetNativeText(SpBrString* newText);
    void SetNativeImage(SpBrString *value,bool fromNetwork =false);
    void EnableNativeObject(bool value);
    void SetInset(SpUtSize imageSize);
    void SetDisabledFontColor();
    bool firstInvalidateIsDone;
};

#endif /* SPBRNUIBUTTONVIEWIOS_H_ */

