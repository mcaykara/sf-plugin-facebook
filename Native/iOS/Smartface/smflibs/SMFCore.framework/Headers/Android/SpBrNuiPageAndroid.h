/*
 * SpBrNuiPageAndroid.h
 *
 *  Created on: Aug 1, 2011
 *      Author: antti
 */

#ifndef SPBRNUIPAGEANDROID_H_
#define SPBRNUIPAGEANDROID_H_

#include "Core/SpBrNuiPage.h"
class SpBrNuiCanvasAndroid;
class SpBrNuiPageAndroid: public SpBrNuiPage {
public:
	SpBrNuiPageAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiPageAndroid(SpBrNuiPageAndroid* objectToCopy);
	virtual ~SpBrNuiPageAndroid();
	void Load();
	void LoadUI();
	void LoadActivityIndicators();
	void LoadActionBar();
	void Unload();
    void Invalidate(bool skipMainProperty = false);
    void FiringEventOnThis(int eventID, int eventCode = -1);
    void SetTopZOrderForCanvasObjects(bool b);
};

#endif /* SPBRNUIPAGEANDROID_H_ */
