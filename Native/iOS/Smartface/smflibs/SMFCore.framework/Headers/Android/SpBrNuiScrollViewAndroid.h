/*
 * SpBrNuiScrollViewIOS.h
 *
 *  Created on: Oct 31, 2011
 *      Author: adem.cayir
 */

#ifndef SPBRNUISCROLLVIEWANDROID_H_
#define SPBRNUISCROLLVIEWANDROID_H_

#include "Core/SpBrNuiScrollView.h"

class SpBrNuiScrollViewAndroid: public SpBrNuiScrollView {
public:
	SpBrNuiScrollViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiScrollViewAndroid(SpBrNuiScrollViewAndroid *objectToCopy);
	virtual ~SpBrNuiScrollViewAndroid();
    void Load();
    void Invalidate(bool skipMainProperty = false);
    void ScrollToX(int x, bool animated = false);
    void ScrollToY(int y, bool animated = false);
    void SetNativeContentSize(SpUtSize newContentSize);
    void SetPageWidth(SpBrString* newValue);
	void SetPageHeight(SpBrString* newValue);
	void setPageAlignment(int value);
};

#endif /* SPBRNUISCROLLVIEWIOS_H_ */
