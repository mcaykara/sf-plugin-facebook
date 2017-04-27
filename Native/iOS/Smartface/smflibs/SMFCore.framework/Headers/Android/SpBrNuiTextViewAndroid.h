/*
 * SpBrNuiTextViewAndroid.h
 *
 *  Created on: Jun 22, 2011
 *      Author: umit
 */

#ifndef SPBRNUITEXTVIEWANDROID_H_
#define SPBRNUITEXTVIEWANDROID_H_

#include "Core/SpBrNuiTextView.h"

class SpBrNuiTextViewAndroid: public SpBrNuiTextView {
private:
public:
	SpBrNuiTextViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiTextViewAndroid(SpBrNuiTextViewAndroid* objectToCopy);
	virtual ~SpBrNuiTextViewAndroid();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void Reset(bool invalidate = true);
    void SetNativeText(SpBrString* string);
    void SetStrikeThrough(bool strikeThru);
    SpUtSize GetTextSize();
    void enableScrollBar(bool value);
    void enableMultiline(bool value);
    void SetAdjustFontSize(bool adjust);
    void SetMinimumFontSize(int fontSize);
    void setAutoLink();
    void updateFontColor();
public:
    bool isInRepeatbox;
};

#endif /* SPBRNUITEXTVIEWANDROID_H_ */
