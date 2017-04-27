/*
 * SpBrNuiTextViewIOS.h
 *
 *  Created on: Jul 6, 2011
 *      Author: antti
 */

#ifndef SPBRNUITEXTVIEWIOS_H_
#define SPBRNUITEXTVIEWIOS_H_

#include "Core/SpBrNuiTextView.h"

#define KScrollEnabledConstant  9876

class SpBrNuiTextViewIOS: public SpBrNuiTextView {
public:
	SpBrNuiTextViewIOS(SpBrBase* base, SpContext* context);
	SpBrNuiTextViewIOS(SpBrNuiTextViewIOS *objectToCopy);
	virtual ~SpBrNuiTextViewIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void Reset(bool invalidate = true);
	void SetNativeText(SpBrString* string);
    void SetNativeRect(SpUtRect rect);
    void CheckScrolling();
    SpUtSize GetTextSize();
    void SetStrikeThrough(bool strikeThru);
    void enableScrollBar(bool value) {};
    void enableMultiline(bool value) {};
    void SetAdjustFontSize(bool adjust);
    void SetMinimumFontSize(int fontSize);

public:
    int currentOffsetForVerticalAlignment;
    int zIndexInRepeatbox;
};

#endif /* SPBRNUITEXTVIEWIOS_H_ */
