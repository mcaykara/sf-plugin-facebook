/*
 * SpBrNuiActivityIndicatorIOS.h
 *
 *  Created on: Jan 25, 2012
 *      Author: ugurkilic
 */

#ifndef SPBRNUIACTIVITYINDICATORIOS_H_
#define SPBRNUIACTIVITYINDICATORIOS_H_

#include "Core/SpBrNuiActivityIndicator.h"

class SpBrNuiActivityIndicatorIOS: public SpBrNuiActivityIndicator {
public:
	SpBrNuiActivityIndicatorIOS(SpBrBase* base, SpContext* context);
    SpBrNuiActivityIndicatorIOS(SpBrNuiActivityIndicatorIOS *objectToCopy);
	virtual ~SpBrNuiActivityIndicatorIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);
};

#endif /* SPBRNUIACTIVITYINDICATORIOS_H_ */
