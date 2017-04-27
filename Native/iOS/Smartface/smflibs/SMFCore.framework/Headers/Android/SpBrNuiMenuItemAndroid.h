/*
 * SpBrNuiMenuItemAndroid.h
 *
 *  Created on: Jul 19, 2011
 *      Author: timo
 */

#ifndef SPBRNUIMENUITEMANDROID_H_
#define SPBRNUIMENUITEMANDROID_H_

#include "Core/SpBrNuiMenuItem.h"

class SpBrNuiMenuItemAndroid: public SpBrNuiMenuItem {
public:
	SpBrNuiMenuItemAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiMenuItemAndroid(SpBrNuiMenuItemAndroid* objectToCopy);
	virtual ~SpBrNuiMenuItemAndroid();
	void Load();
	void Invalidate(bool skipMainProperty = false) {}
};

#endif /* SPBRNUIMENUITEMANDROID_H_ */
