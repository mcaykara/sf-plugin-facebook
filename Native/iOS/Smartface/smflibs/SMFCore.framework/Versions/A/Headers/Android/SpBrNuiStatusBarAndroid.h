
/*
 * SpBrNuiStatusBarAndroid.h
 *
 *  Created on: Dec 29, 2014
 *      Author: nosaiba
 */
#include "Core/SpDefs.h"


#ifndef SPBRNUISTATUSBARANDROID_H_
#define SPBRNUISTATUSBARANDROID_H_
#include "Core/SpBrNuiStatusBar.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiPageAndroid;

class SpBrNuiStatusBarAndroid: public SpBrNuiStatusBar {
public:
	SpBrNuiStatusBarAndroid();
    SpBrNuiStatusBarAndroid(SpBrNuiStatusBarAndroid *objectToCopy);
	~SpBrNuiStatusBarAndroid();
	int GetBackgroundColor();
	void SetBackgroundColor(int backgroundColor);
	int GetStatusBarHeight();
	bool IsVisible();
	void SetVisible(bool visible);
	bool IsTransparent();
	void SetTransparent(bool transparent);

	void Invalidate(bool recreate = false);



};

#endif
