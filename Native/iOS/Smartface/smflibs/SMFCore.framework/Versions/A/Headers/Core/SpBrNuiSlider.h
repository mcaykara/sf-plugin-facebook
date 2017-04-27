/*
 * SpBrNuiSlider.h
 *
 *  Created on: 25 May 2012
 *      Author: ugur kilic
 */

#ifndef SPBRNUISLIDER_H_
#define SPBRNUISLIDER_H_

#include "SpBrNuiBase.h"

class SpBrNuiSlider: public SpBrNuiBase {
public:
    static SpBrNuiSlider* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiSlider* Create(SpBrNuiSlider* objectToCopy);

	SpBrNuiSlider(SpBrBase* base, SpContext* context);
    SpBrNuiSlider(SpBrNuiSlider* objectToCopy);
	virtual ~SpBrNuiSlider();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Reset(bool invalidate = true);
    virtual void SetValue(int val);
public:
    SpBrString *minTrackImage, *iMinTrackImage;
    SpBrString *maxTrackImage, *iMaxTrackImage;
    SpBrString *thumbImage, *iThumbImage;

    int iValue, value;
    int minValue;
    int maxValue;
    int stepSize;
    int iMinTrackColor, minTrackColor;
    int iMaxTrackColor, maxTrackColor;
    int iThumbTrackColor, thumbTrackColor;

    bool iShowThumb, showThumb;
    bool continuous;
};

#endif /* SPBRNUISLIDER_H_ */
