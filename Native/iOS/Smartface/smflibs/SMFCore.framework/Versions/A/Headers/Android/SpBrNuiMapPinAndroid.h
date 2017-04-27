/*
 * SpBrNuiMapPinAndroid.h
 *
 *  Created on: 22 Oca 2014
 *      Author: enes.gemci
 */

#ifndef SPBRNUIMAPPINANDROID_H_
#define SPBRNUIMAPPINANDROID_H_

#include "Core/SpBrNuiMapPin.h"
#include "Core/SpMapViewPin.h"

class SpBrNuiMapPinAndroid: public SpBrNuiMapPin {
public:
	SpBrNuiMapPinAndroid(SpMapViewPin *pin, SpBrNuiMapView* obj);
	SpBrNuiMapPinAndroid();
	~SpBrNuiMapPinAndroid();

	void updateUI();
};

#endif /* SPBRNUIMAPPINANDROID_H_ */
