/*
 * SpBrNuiAdViewAndroid.h
 *
 *  Created on: Jan 17, 2012
 *      Author: antti
 */

#ifndef SPBRNUIADVIEWANDROID_H_
#define SPBRNUIADVIEWANDROID_H_

#include "Core/SpBrNuiAdView.h"

class SpBrNuiAdViewAndroid: public SpBrNuiAdView {
private:
public:
	SpBrNuiAdViewAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiAdViewAndroid(SpBrNuiAdViewAndroid* objectToCopy);
	virtual ~SpBrNuiAdViewAndroid();
	void Load();
    void Invalidate(bool skipMainProperty = false);
	void* GetObjectRef() const;
	void loadAdRequest();
    void SetBannerSize();
	void SetAdUnitId();
};

#endif /* SPBRNUIADVIEWANDROID_H_ */
