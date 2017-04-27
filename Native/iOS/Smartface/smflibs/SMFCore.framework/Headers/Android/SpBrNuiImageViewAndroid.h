/*
 * SpBrNuiImageViewAndroid.h
 *
 *  Created on: Jul 7, 2011
 *      Author: timo
 */

#ifndef SPBRNUIIMAGEVIEWANDROID_H_
#define SPBRNUIIMAGEVIEWANDROID_H_

#ifdef TARGET_PLATFORM_ANDROID

#include "Core/SpBrNuiImageView.h"

class SpBrNuiImageViewAndroid: public SpBrNuiImageView {
public:
	SpBrNuiImageViewAndroid(SpBrBase* base, SpContext* context);
	/**
	 * it will be used by repeat box to clone this object
	 */
	SpBrNuiImageViewAndroid(SpBrNuiImageViewAndroid* objectToCopy);
	virtual ~SpBrNuiImageViewAndroid();
	void Load();
	void Invalidate(bool skipMainProperty = false);
    void Reset(bool invalidate = true);
    void SetNativeImage(SpBrString* value, bool fromNetwork = false,bool force=false);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChange);
    bool isInRepeatBox;
    void SetEnableScroll(bool value);
    void UpdateMinMaxZoomLevels();
    void SetZoomLevel();
    void SetEnableZoom(bool value);
    void setOutline(int type, int radius);
    int GetActualHeight();
    int GetActualWidth();

public:
    int outlineType;
    int outlineRadius;
};

#endif

#endif /* SPBRNUIIMAGEVIEWANDROID_H_ */
