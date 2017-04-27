/*
 * SpBrNuiEditBoxViewIOS.h
 *
 *  Created on: 17 August 2011
 *      Author: Ali Can Keserel
 */

#ifndef SPBRNUIEDITBOXVIEWIOS_H_
#define SPBRNUIEDITBOXVIEWIOS_H_

#include "Core/SpBrNuiEditBoxView.h"

class SpBrNuiEditBoxViewIOS: public SpBrNuiEditBoxView {
public:
	SpBrNuiEditBoxViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiEditBoxViewIOS(SpBrNuiEditBoxViewIOS *objectToCopy);
	virtual ~SpBrNuiEditBoxViewIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);

    void SetFocus();
    void SetNativeText(SpBrString* newText);
	SpBrString* GetNativeText();
    void UpdateNativePlaceHolder();

    void CloseKeyboard();
    void UpdateFontColor(int color);
    void UpdatePlaceHolderTextColor(int color);
    void UpdateKeyboardType();
    void UpdateReturnKeyType();
    void UpdateKeyboardAppearance();
    void UpdateIsPassword();

    bool UsingUITextField();
    void SetUpperCase(bool value);
    void CheckRecreationNeed();

public:
    void *editboxReporter;
};

#endif /* SPBRNUIEDITBOXVIEWIOS_H_ */
