/*
 * SpBrNuiVideoViewIOS.h
 *
 *  Created on: Aug 18, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUIVIDEOVIEWIOS_H_
#define SPBRNUIVIDEOVIEWIOS_H_

#include "Core/SpBrNuiVideoView.h"

class SpEventGroup;

class SpBrNuiVideoViewIOS: public SpBrNuiVideoView  {
public:
	SpBrNuiVideoViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiVideoViewIOS(SpBrNuiVideoViewIOS* objectToCopy);
	virtual ~SpBrNuiVideoViewIOS();
    void Load();
    void Invalidate(bool skipMainProperty = false);

public:
    void CanPlay(int loop, SpEventGroup *eventGroup, bool inVideoPage);
    void Pause();
    void Stop();
    SpBrString* GetImageAt(int time, SpBrString *table);
    void AdjustView();

private:
    void *videoReporter;
};

#endif /* SPBRNUIVIDEOVIEWIOS_H_ */
