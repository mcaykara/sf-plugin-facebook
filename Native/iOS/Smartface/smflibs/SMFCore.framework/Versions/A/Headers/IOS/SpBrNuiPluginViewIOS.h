/*
 * SpBrNuiPluginViewIOS.h
 *
 *  Created on: May 10, 2015
 *      Author: ugur kilic
 */

#ifdef SMF_PLUGINS_ENABLED

#ifndef SPBRNUIPLUGINVIEWIOS_H_
#define SPBRNUIPLUGINVIEWIOS_H_

#include "SpBrNuiPluginView.h"
#import "SpDynamicJSClassHandler.h"

class SpBrNuiPluginViewIOS: public SpBrNuiPluginView {
public:
    SpBrNuiPluginViewIOS(SpDynamicJSClassHandler *_handler, size_t argumentCount, const JSValueRef arguments[], SpBrBase* base, SpContext* context);
    virtual ~SpBrNuiPluginViewIOS();

    void Reset(bool invalidate = true);
    void Load();
    void Invalidate(bool skipMainProperty = false);
};

#endif /* SPBRNUIPLUGINVIEWIOS_H_ */

#endif
