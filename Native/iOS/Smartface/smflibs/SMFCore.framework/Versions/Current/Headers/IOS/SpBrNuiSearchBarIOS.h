//
//  SpBrNuiSearchBarIOS.mm
//  Smartface
//
//  Created by ugur kilic on 30/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpBrNuiSearchBarIOS_h
#define SpratIOS_SpBrNuiSearchBarIOS_h

#include "Core/SpBrNuiBase.h"
#include "Core/SpBrNuiSearchBar.h"
#include "Core/SpBrString.h"

class SpBrNuiSearchBarIOS: public SpBrNuiSearchBar {
public:
	SpBrNuiSearchBarIOS(SpBrBase* base, SpContext* context);
	SpBrNuiSearchBarIOS(SpBrNuiSearchBarIOS* objectToCopy);
    ~SpBrNuiSearchBarIOS();
	void Load();
    void Invalidate(bool skipMainProperty = false);

public:
    void SetFocus();
    void SetPlaceHolderStrNative(SpBrString *placeHolderStr);
    void SetSearchBarTextNative(SpBrString *searchBarText);
    void Cancel();
    void CloseKeyboard();

    void SetBarStyle(int barStyle);
	void SetTintColor(int tintColor);
	void SetStickToNavigationBar(bool stickToNavigationBar);
    void SetShowsCancelButton(bool showsCancelButton);

protected:
    void *searchBarReporter;
};

#endif
