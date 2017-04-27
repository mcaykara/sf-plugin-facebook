/*
 * SpBrNuiComboBoxAndroid.h
 *
 *  Created on: Aug 17, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUICOMBOBOXANDROID_H_
#define SPBRNUICOMBOBOXANDROID_H_

#include "Core/SpBrNuiComboBox.h"

class SpBrNuiComboBoxAndroid: public SpBrNuiComboBox {
public:
	SpBrNuiComboBoxAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiComboBoxAndroid(SpBrNuiComboBoxAndroid* objectToCopy);
	virtual ~SpBrNuiComboBoxAndroid();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void SetOptions(std::vector<SpBrString*> &objects);
    void SetCaptionText(SpBrString* newText);
    SpBrString* GetText();
    void FiringEventOnThis(int eventID, int eventCode = -1);
private:
    void *mainArray;
};

#endif /* SPBRNUICOMBOBOXANDROID_H_ */
