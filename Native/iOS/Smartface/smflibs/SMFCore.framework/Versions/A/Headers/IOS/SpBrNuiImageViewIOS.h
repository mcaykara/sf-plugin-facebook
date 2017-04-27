/*
 * SpBrNuiImageViewIOS.h
 *
 *  Created on: 4 Aug 2011
 *      Author: Ali Can
 */

#ifndef SPBRNUIIMAGEVIEWIOS_H_
#define SPBRNUIIMAGEVIEWIOS_H_

#include "Core/SpBrNuiImageView.h"

class SpBrNuiImageViewIOS: public SpBrNuiImageView {
public:
	SpBrNuiImageViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiImageViewIOS(SpBrNuiImageViewIOS *objectToCopy);
	virtual ~SpBrNuiImageViewIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void Reset(bool invalidate = true);
    void SetNativeImage(SpBrString *value, bool fromNetwork = false,bool force=false);
    void SetEnableScroll(bool value);
    void SetEnableZoom(bool value);
    void SetImageFromImageGallery(void *image);
    void UpdateMinMaxZoomLevels();
    void SetZoomLevel();
    void RefreshImage();
    void NullImage();
    int GetActualHeight();
    int GetActualWidth();

public:
    bool tempImageVisible;
};


#endif /* SPBRNUIIMAGEVIEWIOS_H_ */
