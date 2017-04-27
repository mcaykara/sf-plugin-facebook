/*
 * SpBrNuiCameraView.h
 *
 *  Created on: Aug 28, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUICAMERAVIEW_H_
#define SPBRNUICAMERAVIEW_H_

#include "SpBrNuiBase.h"

class SpBrNuiCameraView: public SpBrNuiBase {
public:
	SpBrNuiCameraView(SpBrBase* base, SpContext* context);
    SpBrNuiCameraView(SpBrNuiCameraView* objectToCopy);
	virtual ~SpBrNuiCameraView();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    void Reset(bool invalidate = true);
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void Capture() = 0;
    virtual void Zoom(int level) = 0;

public:
    bool autoFocus;

    int cameraType;
    int imageFormat;
    int resolution;
};

#endif /* SPBRNUICAMERAVIEW_H_ */
