/*
 * SpBrNuiMenuAndroid.h
 *
 *  Created on: Jul 19, 2011
 *      Author: timo
 */

#ifndef SPBRNUIMENUANDROID_H_
#define SPBRNUIMENUANDROID_H_

#include "Core/SpDefs.h"
#include "Core/SpBrNuiMenu.h"

#ifdef TARGET_PLATFORM_ANDROID

class SpBrNuiMenuAndroid: public SpBrNuiMenu {
private:
public:
	SpBrNuiMenuAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiMenuAndroid(SpBrNuiMenuAndroid* objectToCopy);
	virtual ~SpBrNuiMenuAndroid();
	void Load();
	void ShowNativeMenu(SpBrParcelable *firedObject,TMenuType menuType);
};

#endif

#endif /* SPBRNUIMENUANDROID_H_ */
