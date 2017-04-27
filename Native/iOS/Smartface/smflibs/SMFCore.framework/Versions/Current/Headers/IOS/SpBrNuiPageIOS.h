/*
 * SpBrNuiPageIOS.h
 *
 *  Created on: Jul 29, 2011
 *      Author: antti
 */

#ifndef SPBRNUIPAGEIOS_H_
#define SPBRNUIPAGEIOS_H_
#include "Core/SpDefs.h"
#ifdef TARGET_PLATFORM_IOS
#include "Core/SpBrNuiPage.h"

class SpBrNuiPageIOS: public SpBrNuiPage {
public:
	SpBrNuiPageIOS(SpBrBase* base, SpContext* context);
    SpBrNuiPageIOS(SpBrNuiPageIOS* objectToCopy);
	virtual ~SpBrNuiPageIOS();
    void Load();
    void Unload();
    void Invalidate(bool skipMainProperty = false);
    void FreeChildViews();
    void RemoveBackgroundImage();
    void UpdateNavigationBarItems(KNavigationItemBarButtons itemsPosition);
    void UpdateNavigationBarTitle();
    void UpdateNavigationBarEnabled();
    SpBrString* GetPageTitle();
    void RefreshSliderDrawerGesture();

public:
    void StopGifAnimations();
    void SetRootViewController(void* vc);
    void UnloadChilds();
public:
    void *ownerViewController;
    void *activeVideoObject;
    bool videoInPlayer;
    void *activeBarcodeObject;
    void *viewToBecomeFirstResponder;
    bool viewVisible;
    void *sliderDrawerGestureRecognizer;
private:
    KIOSTextAlignment SpJsValueToEnum(SpJsValue value,bool &success);
};
#endif



#endif /* SPBRNUIPAGEIOS_H_ */
