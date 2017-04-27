/*
 * SpBrNuiContainerIOS.h
 *
 *  Created on: Oct 19, 2011
 *      Author: ugur
 */

#ifndef SPBRNUICONTAINERIOS_H_
#define SPBRNUICONTAINERIOS_H_

#include "Core/SpBrNuiContainer.h"

class SpBrNuiContainerIOS: public SpBrNuiContainer {
public:
	SpBrNuiContainerIOS(SpBrBase* base, SpContext* context);
    SpBrNuiContainerIOS(SpBrNuiContainerIOS *objectToCopy);
	virtual ~SpBrNuiContainerIOS();
    void Load();
    void Invalidate(bool skipMainProperty = false);
    void ShowNativeObject(bool value);
    void AddRepeatboxes(std::vector<SpBrNuiBase *> &objects);
};



#endif /* SPBRNUICONTAINERIOS_H_ */
