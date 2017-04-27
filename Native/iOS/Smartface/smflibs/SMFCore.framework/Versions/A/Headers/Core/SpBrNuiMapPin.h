/*
 * SpBrNuiMapPin.h
 *
 *  Created on: 22 Oca 2014
 *      Author: enes.gemci
 */

#ifndef SPBRNUIMAPPIN_H_
#define SPBRNUIMAPPIN_H_

#include "SpBrNuiBase.h"
#include "SpMapViewPin.h"
#include "SpBrNuiMapView.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiMapPin {
public:
    static SpBrNuiMapPin* Create();
    static SpBrNuiMapPin* Create(SpMapViewPin* pin, SpBrNuiMapView* obj);

	SpBrNuiMapPin(SpMapViewPin *pin, SpBrNuiMapView* obj);
	SpBrNuiMapPin();
	virtual ~SpBrNuiMapPin();

public:
	void setPin(SpMapViewPin *pin);
	SpMapViewPin * getPin();
	virtual void updateUI(){};
	SpJsObject GetJSObjectRef();
private:
	SpMapViewPin *pin;
    SpJsObject classObj;

public:
	SpBrNuiMapView *parent;
};

#endif /* SPBRNUIMAPPIN_H_ */
