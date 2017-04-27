
/*
 * SpBrNuiStatusBar.h
 *
 *  Created on: Dec 30, 2014
 *      Author: nosaiba
 */
#include "SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"


#ifndef SPBRNUISTATUSBAR_H_
#define SPBRNUISTATUSBAR_H_

class SpBrNuiPage;
class SpBrBase;

class SpBrNuiStatusBar {
public:
    SpBrNuiStatusBar();
    SpBrNuiStatusBar(SpBrNuiStatusBar *objectToCopy);
    static SpBrNuiStatusBar* GetInstance();
	virtual ~SpBrNuiStatusBar();

public:
	virtual int GetBackgroundColor()=0;
	virtual void SetBackgroundColor(int backgroundColor)=0;
	virtual int GetStatusBarHeight()=0;
	virtual bool IsVisible()=0;
	virtual void SetVisible(bool visible)=0;
	virtual bool IsTransparent()=0;
	virtual void SetTransparent(bool transparent)=0;
	virtual void Invalidate(bool recreate = false)=0;

public:
	void UnloadJSObjectRef();
	SpJsObject GetJSObjectRef();
	void Reset();

public:
    SpBrBase* baseData;
    bool visible;
    bool transparent;

protected:
    SpJsObject jsObjectRef;
    int backgroundColor;
    int height;
};

#endif
