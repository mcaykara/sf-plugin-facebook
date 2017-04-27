//
//  SpBrNuiSliderDrawerIOS.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 16/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SPBRNUISLIDERDRAWERIOS_H_
#define SPBRNUISLIDERDRAWERIOS_H_

#include "Core/SpBrNuiSliderDrawer.h"

class SpBrNuiSliderDrawerIOS: public SpBrNuiSliderDrawer {
public:
    SpBrNuiSliderDrawerIOS(SpBrBase* base, SpContext* context);
    SpBrNuiSliderDrawerIOS(SpBrNuiSliderDrawerIOS* objectToCopy);
    virtual ~SpBrNuiSliderDrawerIOS();
    void Load();
    void Invalidate(bool skipMainProperty = false);
    void Show();
    void Hide();

public:
    void *drawerReporter;
};

#endif /* SPBRNUISLIDERDRAWERIOS_H_ */
