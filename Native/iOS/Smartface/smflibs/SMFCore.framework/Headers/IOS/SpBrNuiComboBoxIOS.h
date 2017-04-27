/*
 * SpBrNuiComboBoxIOS.h
 *
 *  Created on: Aug 17, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUICOMBOBOXIOS_H_
#define SPBRNUICOMBOBOXIOS_H_

#include "Core/SpBrNuiComboBox.h"

class SpBrNuiComboBoxIOS: public SpBrNuiComboBox {
public:
	SpBrNuiComboBoxIOS(SpBrBase* base, SpContext* context);
    SpBrNuiComboBoxIOS(SpBrNuiComboBoxIOS* objectToCopy);
	virtual ~SpBrNuiComboBoxIOS();

	void Load();
    void Invalidate(bool skipMainProperty = false);
	void SetCaptionText(SpBrString* newText);
    SpBrString* GetText();
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);

public:
    void Selected();
    void Closed();

private:
    void *comboboxReporter;
    void *mainArray;
    void *comboIcon;

    int selected;
};

#endif /* SPBRNUICOMBOBOXIOS_H_ */