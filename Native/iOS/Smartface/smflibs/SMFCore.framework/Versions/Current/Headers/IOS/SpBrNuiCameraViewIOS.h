/*
 * SpBrNuiCameraViewIOS.h
 *
 *  Created on: Aug 28, 2011
 *      Author: ugurkilic
 */

//// CAMERAVIEW IS DEPRECATED!!! ////

#ifndef SPBRNUICAMERAVIEWIOS_H_
#define SPBRNUICAMERAVIEWIOS_H_

#include "Core/SpBrNuiCameraView.h"

class SpBrNuiCameraViewIOS: public SpBrNuiCameraView {
public:
	SpBrNuiCameraViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiCameraViewIOS(SpBrNuiCameraViewIOS* objectToCopy);
	virtual ~SpBrNuiCameraViewIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);

public:
    void Start();
    void Stop();
    void Capture();
    void Zoom(int level);

private:
    void *cameraReporter;
};

#endif /* SPBRNUICAMERAVIEWIOS_H_ */
