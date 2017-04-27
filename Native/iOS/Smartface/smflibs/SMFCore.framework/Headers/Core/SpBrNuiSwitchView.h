/*
 * SpBrNuiSwitchView.h
 *
 *  Created on: Oct 20, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUISWITCHVIEW_H_
#define SPBRNUISWITCHVIEW_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"

class SpBrNuiSwitchView: public SpBrNuiBase {
public:
    static SpBrNuiSwitchView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiSwitchView* Create(SpBrNuiSwitchView* objectToCopy);

	SpBrNuiSwitchView(SpBrBase* base, SpContext* context);
    SpBrNuiSwitchView(SpBrNuiSwitchView* objectToCopy);
	virtual ~SpBrNuiSwitchView();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
	void Reset(bool invalidate = true);
	void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void FiringEventOnThis(int eventID, int eventCode = -1);

public:
    virtual bool GetCheckedNative() = 0;
    virtual void SetNativeChecked(bool status) = 0;
    virtual int GetSwitchHeight() = 0;
    virtual int GetSwitchWidth() = 0;
    void SetChecked(bool status);
    void SetOnTintColor(int color);
    int GetOnTintColor();
    void SetTintColor(int color);
    int GetTintColor();
    void SetThumbTintColor(int color);
    int GetThumbTintColor();
    bool IsChecked();
protected:
    bool iChecked, checked;
    // TODO android and ios must implement this
    int iTintColor, tintColor;
    int iOnTintColor, onTintcolor;
    int iThumbTintColor, thumbTintColor;
};


#endif /* SPBRNUISWITCHVIEW_H_ */
