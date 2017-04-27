//
//  SpBrNuiNavigationItem.h
//  Smartface
//
//  Created by ugur kilic on 03/04/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef __SMARTFACE__SPBRNUINAVIGATIONITEM__
#define __SMARTFACE__SPBRNUINAVIGATIONITEM__
#include "SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"
#ifdef TARGET_PLATFORM_IOS

#include "SpBrNuiBase.h"
#include "SpBrNuiBarButtonItem.h"

#include <vector>

typedef enum {
    KNavigationItemBarButtonsLeft,
    KNavigationItemBarButtonsRight,
} KNavigationItemBarButtons;

class SpBrNuiNavigationItem {
public:
    SpBrNuiNavigationItem(SpBrNuiPage *parentPage);
    virtual ~SpBrNuiNavigationItem();

    SpJsObject GetJSObjectRef();

public:
    void SetTitle(SpBrString *value);
    void UpdateLeftItems();
    void UpdateRightItems();
    void UpdateTitleView();
    void SetEnabled(bool enabled);

public:
    SpJsObject rightBarButtonItemRefs;
    SpJsObject leftBarButtonItemRefs;
    SpJsObject titleViewRef;
    SpBrString *title;
    bool enabled;

private:
    SpBrNuiPage *page;
    SpJsObject objectRef;
};

#endif
#endif /* defined(__SMARTFACE__SPBRNUINAVIGATIONITEM__) */
