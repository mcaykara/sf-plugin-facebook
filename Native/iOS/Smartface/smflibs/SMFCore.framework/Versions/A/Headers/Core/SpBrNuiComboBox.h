/*
 * SpBrNuiComboBox.h
 *
 *  Created on: Aug 17, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUICOMBOBOX_H_
#define SPBRNUICOMBOBOX_H_

#include <vector>

#include "SpBrNuiBase.h"
#include "SpBrString.h"

class SpBrNuiComboBox: public SpBrNuiBase {
public:
	SpBrNuiComboBox(SpBrBase* base, SpContext* context);
    SpBrNuiComboBox(SpBrNuiComboBox* objectToCopy);
	virtual ~SpBrNuiComboBox();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    void Reset(bool invalidate = true);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);

	virtual void SetCaptionText(SpBrString* string) = 0;
    virtual SpBrString* GetText() = 0;

public:
    SpBrString *captionText;

    SpBrString *activeImage;
    SpBrString *pressedImage;
    SpBrString *inactiveImage;

    int activeTextColor;
    int activeBorderColor;
    int activeBackgroundColor;
    int activeIndex;

    bool firstShown;
    bool iShowScroll, showScroll;
};

#endif /* SPBRNUICOMBOBOX_H_ */
