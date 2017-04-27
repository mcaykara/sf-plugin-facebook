
/*
 * SpBrNuiEffects.h
 *
 *  Created on: Jan 8, 2015
 *      Author: nosaiba
 */
#include "SpDefs.h"
#include "SpBrNuiRipple.h"
#include "SpJsEngine/Core/SpJsEngine.h"


#ifndef SPBRNUIEFFECTS_H_
#define SPBRNUIEFFECTS_H_

class SpBrNuiBase;
class SpBrBase;

class SpBrNuiEffects {
public:
    SpBrNuiEffects();
    SpBrNuiEffects(SpBrNuiEffects *objectToCopy);
	virtual ~SpBrNuiEffects();


public:
	void UnloadJSObjectRef();
	SpJsObject GetJSObjectRef();
	void UpdateObjectRefs();

public:
    SpBrBase* baseData;
    SpJsObject jsObjectRef;
    SpBrNuiRipple* ripple;
#ifdef TARGET_PLATFORM_ANDROID
    jobject JniObjectRef;
    SpJsObject ParentObjectRef;
#endif
};

#endif
