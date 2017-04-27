/*
 * SpBrNuiActivityIndicatorAndroid.h
 *
 *  Created on: Jan 27, 2012
 *      Author: adem.cayir
 */

#ifndef SPBRNUIACTIVITYINDICATORANDRIOD_H_
#define SPBRNUIACTIVITYINDICATORANDRIOD_H_

#include "Core/SpBrNuiActivityIndicator.h"

class SpBrNuiActivityIndicatorAndroid: public SpBrNuiActivityIndicator {
private:
	int calculated_edge_width;
public:
	SpBrNuiActivityIndicatorAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiActivityIndicatorAndroid(SpBrNuiActivityIndicatorAndroid* copy);
	virtual ~SpBrNuiActivityIndicatorAndroid();
	void Load();
	void Reset(bool);
    void Invalidate(bool skipMainProperty = false);
    bool SetStyle(int s);
};

#endif
