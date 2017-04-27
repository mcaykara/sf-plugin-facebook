/*
 * SpBrNuiScrollViewIOS.h
 *
 *  Created on: Oct 20, 2011
 *      Author: ugur
 */

#ifndef SPBRNUISCROLLVIEWIOS_H_
#define SPBRNUISCROLLVIEWIOS_H_

#include "Core/SpBrNuiScrollView.h"

class SpBrNuiScrollViewIOS: public SpBrNuiScrollView {
public:
	SpBrNuiScrollViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiScrollViewIOS(SpBrNuiScrollViewIOS *objectToCopy);
	virtual ~SpBrNuiScrollViewIOS();

    void Load();
    void Invalidate(bool skipMainProperty = false);

    void ScrollToX(int x, bool animated = false);
    void ScrollToY(int y, bool animated = false);
    void SetNativeContentSize(SpUtSize newContentSize);
    void SetPageWidth(SpBrString* newValue);
    void SetPageHeight(SpBrString* newValue);
    void setPageAlignment(int value);
    void SetScrollsToTop(bool value);

private:
    void *scrollViewReporter;
};

#endif /* SPBRNUISCROLLVIEWIOS_H_ */
