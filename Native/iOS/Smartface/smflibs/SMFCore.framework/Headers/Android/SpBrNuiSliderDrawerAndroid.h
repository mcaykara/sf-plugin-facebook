//
//  SpBrNuiSliderDrawerAndroid.h
//
//
//  Created by Nosaiba Darwish on 18/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SPBRNUISLIDERDRAWERANDROID_H_
#define SPBRNUISLIDERDRAWERANDROID_H_

#include "Core/SpBrNuiSliderDrawer.h"

class SpBrNuiSliderDrawerAndroid: public SpBrNuiSliderDrawer {
public:
    SpBrNuiSliderDrawerAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiSliderDrawerAndroid(SpBrNuiSliderDrawerAndroid* objectToCopy);
    virtual ~SpBrNuiSliderDrawerAndroid();
    void Load();
    void Invalidate(bool without = false);
    void Hide();
    void Show();
    void setDrawerPosition();
    void setDrawerEnabled();
    void setIcon();
};

#endif /* SPBRNUISLIDERDRAWERANDROID_H_ */
