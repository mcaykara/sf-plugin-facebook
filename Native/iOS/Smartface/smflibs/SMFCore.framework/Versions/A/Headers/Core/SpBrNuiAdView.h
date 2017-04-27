/*
 * SpBrNuiAdView.h
 *
 *  Created on: Jan 17, 2012
 *      Author: antti
 */

#ifndef SPBRNUIADVIEW_H_
#define SPBRNUIADVIEW_H_

#include "SpBrNuiBase.h"
#include "SpAdRequest.h"

class SpBrNuiAdView: public SpBrNuiBase{
public:
	SpBrNuiAdView(SpBrBase* base, SpContext* context);
    SpBrNuiAdView(SpBrNuiAdView* objectToCopy);
	virtual ~SpBrNuiAdView();
public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Reset(bool invalidate = true);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void NotifyFromCustomVariable(SpBrString *value);
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);
    virtual void loadAdRequest(){};
public:
    SpBrString *iAdUnitIDIOS, *adUnitIDIOS;
    SpBrString *iAdUnitIDAndroid, *adUnitIDAndroid;
    SpAdRequest* smfRequest;
    int iAdSize, adSize;
    int iBannerSize, bannerSize;
    int iAnimated, animated;
};

#endif /* SPBRNUIADVIEW_H_ */
