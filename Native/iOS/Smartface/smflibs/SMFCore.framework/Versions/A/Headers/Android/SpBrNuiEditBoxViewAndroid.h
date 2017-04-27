/*
 * SpBrNuiEditBoxViewAndroid.h
 *
 *  Created on: 17 August 2011
 *      Author: Ali Can Keserel
 */

#ifndef SPBRNUIEDITBOXVIEWANDROID_H_
#define SPBRNUIEDITBOXVIEWANDROID_H_

#include "Core/SpBrNuiEditBoxView.h"
#include "Core/SpDefs.h"

class SpBrNuiEditBoxViewAndroid: public SpBrNuiEditBoxView {
public:
	SpBrNuiEditBoxViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiEditBoxViewAndroid(SpBrNuiEditBoxViewAndroid *objectToCopy);
	virtual ~SpBrNuiEditBoxViewAndroid();
	void Load();
    void Reset(bool invalidate = true);
    void Invalidate(bool skipMainProperty = false);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void SetNativeText(SpBrString* string);
	SpBrString* GetNativeText();
	void FiringEventOnThis(int eventID, int eventCode = -1);
	void SetFocus();
	void UpdateNativePlaceHolder();
	void setPlaceHolderToAndroidView(SpBrString*);
	void setFontSizeToAndroidView();
	void setEditboxText(SpBrString*);
	void SetUpperCase(bool value);
	void CloseKeyboard();
	void UpdateFontColor(int color);
	void UpdateKeyboardType();
	void UpdateReturnKeyType();
	void UpdateIsPassword();
	void UpdatePlaceHolderTextColor(int color);
public:
    void *editboxReporter;
private:
    enum {
    	TYPE_CLASS_TEXT = 1,
    	TYPE_TEXT_FLAG_MULTI_LINE = 131072,
    	TYPE_TEXT_VARIATION_PASSWORD = 128,
        TYPE_CLASS_NUMBER = 2,
        TYPE_NUMBER_VARIATION_PASSWORD = 16,
        TYPE_NUMBER_FLAG_DECIMAL = 8192,
        TYPE_CLASS_PHONE = 3};
    bool focused;
#ifdef TARGET_PLATFORM_ANDROID
    void SetAndroidTextEditMode(JNIEnv * env);
    void SetEditBehaviourToAndroid();
#endif
};

#endif /* SPBRNUIEDITBOXVIEWANDROID_H_ */
