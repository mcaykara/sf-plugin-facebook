/*
 * SpBrNuiVideoViewAndroid
 *
 *  Created on: Sep 16, 2011
 *      Author: ademcayir
 */
#ifndef SPBRNUIVIDEOVIEWANDROID_H_
#define SPBRNUIVIDEOVIEWANDROID_H_

#include "Core/SpBrNuiVideoView.h"

class SpEventGroup;

class SpBrNuiVideoViewAndroid : public SpBrNuiVideoView  {
public:
	SpBrNuiVideoViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiVideoViewAndroid(SpBrNuiVideoViewAndroid* objectToCopy);
	virtual ~SpBrNuiVideoViewAndroid();
    void Load();
    void Invalidate(bool skipMainProperty = false);

public:
    SpBrString* GetImageAt(int time, SpBrString *table);
    void CanPlay(int loop, SpEventGroup *eventGroup, bool inVideoPage);
    void Pause();
    void Stop();
};


#endif
