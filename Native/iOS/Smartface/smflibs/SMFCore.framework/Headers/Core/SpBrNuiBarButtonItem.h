//
//  SpBrNuiBarButtonItem.h
//  Smartface
//
//  Created by ugur kilic on 03/04/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef __SMARTFACE__SPBRNUIBARBUTTONITEM__
#define __SMARTFACE__SPBRNUIBARBUTTONITEM__

#include "SpBrNuiBase.h"
#include <vector>
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiPageIOS;

class SpBrNuiBarButtonItem: public SpBrNuiBase {
public:
    SpBrNuiBarButtonItem();
    SpBrNuiBarButtonItem(SpBrNuiBarButtonItem *objectToCopy);
    virtual ~SpBrNuiBarButtonItem();

    SpJsObject GetJSObjectRef();

public:
    void SetCallback(SpJsObject value);
    void SetBackgroundImageForState(SpBrString *value, int state);
    void BarButtonPressed();
    void AssignDefaultValue(const char *attribute, const char *value);
    void UpdateIfVisible();

public:
    SpJsObject objectRef;
    SpJsObject eventCallBack;
    void *responder;
    SpBrNuiPageIOS *parentPage;

    SpBrString *title;
    SpBrString *image;
    SpBrString *backgroundImageNormal;
    SpBrString *backgroundImageHighlighted;
    SpBrString *backgroundImageDisabled;
    SpBrString *fontName;

    int tintColor;
    int fontS;

    KBarButtonSystemItem systemItem;
    KBarButtonStyle itemStyle;
};

#endif /* defined(__SMARTFACE__SPBRNUIBARBUTTONITEM__) */
