/*
 * SpBrNuiMenuIOS.h
 *
 *  Created on: Feb 29, 2011
 *      Author: ugur
 */

#ifndef SPBRNUIMENUIOS_H_
#define SPBRNUIMENUIOS_H_

#include "Core/SpBrNuiMenu.h"

class SpBrNuiMenuIOS: public SpBrNuiMenu {
public:
	SpBrNuiMenuIOS(SpBrBase* base, SpContext* context);
    SpBrNuiMenuIOS(SpBrNuiMenuIOS* objectToCopy);
	virtual ~SpBrNuiMenuIOS();

    void ShowNativeMenu(SpBrParcelable *firedObject, TMenuType menuType);
};

#endif /* SPBRNUIMENUIOS_H_ */
