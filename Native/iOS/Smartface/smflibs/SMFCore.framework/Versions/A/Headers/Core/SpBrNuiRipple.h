
/*
 * SpBrNuiRipple.h
 *
 *  Created on: Jan 8, 2015
 *      Author: nosaiba
 */
#include "SpDefs.h"
#include "SpBrString.h"
#include "SpJsEngine/Core/SpJsEngine.h"


#ifndef SPBRNUIRIPPLE_H_
#define SPBRNUIRIPPLE_H_

class SpBrBase;

class SpBrNuiRipple {
public:
    SpBrNuiRipple();
    SpBrNuiRipple(SpBrNuiRipple *objectToCopy);
	virtual ~SpBrNuiRipple();
	void Invalidate();


public:
	void UnloadJSObjectRef();
	SpJsObject GetJSObjectRef();
public:
    void setColor(int color);
    void setMask(SpBrString* mask);
    void setEnabled(bool enabled);
    int getColor();
    SpBrString* getMask();
    bool isEnabled();

public:
    SpBrBase* baseData;
    SpJsObject jsObjectRef;
    SpContext *context;

#ifdef TARGET_PLATFORM_ANDROID
    jobject JniObjectRef;
    SpJsObject ParentObjectRef;
#endif
public:
    int color;
    SpBrString* mask;
    bool enabled;

};

#endif
