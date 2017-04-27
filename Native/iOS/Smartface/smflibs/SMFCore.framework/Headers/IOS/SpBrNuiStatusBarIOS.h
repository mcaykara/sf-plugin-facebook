//
//  SpBrNuiStatusBarIOS.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 05/01/15.
//  Copyright (c) 2015 Smartface. All rights reserved.
//
#include "Core/SpBrNuiStatusBar.h"
#import "SpBrNuiPageIOS.h"

#ifndef SpratIOS_SpBrNuiStatusBarIOS_h
#define SpratIOS_SpBrNuiStatusBarIOS_h

class SpBrNuiStatusBarIOS: public SpBrNuiStatusBar {
public:
    SpBrNuiStatusBarIOS();
    SpBrNuiStatusBarIOS(SpBrNuiStatusBarIOS *objectToCopy);
    ~SpBrNuiStatusBarIOS();

public:
    int GetBackgroundColor();
    void SetBackgroundColor(int _backgroundColor);
    int GetStatusBarHeight();
    bool IsVisible();
    void SetVisible(bool _visible);
    bool IsTransparent();
    void SetTransparent(bool _transparent);
    void Invalidate(bool recreate = false);
    int GetStyle();
    void SetStyle(int _style);

private:
    int style;
};

#endif
