//
//  SpMapViewPin.h
//  SpratIOS
//
//  Created by mehmet akyol on 12/16/13.
//  Copyright (c) 2013 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpMapViewPin__
#define __SpratIOS__SpMapViewPin__

#include "SpDefs.h"
#include <iostream>
#include "SpBrString.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpMapViewPin {
	SpBrString* pinId;
	SpBrString* title;
	SpBrString* subTitle;
	float latitude;
	float longitude;
	SpBrString* selImageUri;
    SpBrString* unSelImageUri;
	bool draggable;
	bool animate;
	bool visible;

public:
	SpMapViewPin();
	~SpMapViewPin();

	void setPinId(SpBrString *tempId);
	void setTitle(SpBrString *tempTitle);
	void setSubTitle(SpBrString *tempSubTitle);
	void setLongitude(float longi);
	void setLatitude(float lati);
	void setSelImageUri(SpBrString* imgUrl);
    void setUnSelImageUri(SpBrString* imgUrl);
	void setDraggable(bool drag);
	void setAnimate(bool anime);
	SpBrString* getPinId();
	SpBrString* getTitle();
	SpBrString* getSubTitle();
	float getLongitude();
	float getLatitude();
	SpBrString* getSelImageUri();
    SpBrString* getUnSelImageUri();
	bool const& getDraggable();
	bool const& getAnimate();
	void setVisibility(bool value);
	bool getVisibility();

    SpJsObject jsObject;
    bool firstShow;
    bool isDynamic;
};

#endif /* defined(__SpratIOS__SpMapViewPin__) */
