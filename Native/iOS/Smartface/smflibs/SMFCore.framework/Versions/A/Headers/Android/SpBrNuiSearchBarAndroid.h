
/*
 * SpBrNuiSearchBar.h
 *
 *  Created on: 25 June 2014
 *      Author: Selcuk Yayla
 */

#ifndef SPBRNUISEARCHBARANDROID_H_
#define SPBRNUISEARCHBARANDROID_H_

#include "Core/SpBrNuiBase.h"
#include "Core/SpBrNuiSearchBar.h"
#include "Core/SpBrString.h"

class SpBrNuiSearchBarAndroid: public SpBrNuiSearchBar {
public:
	SpBrNuiSearchBarAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiSearchBarAndroid(SpBrNuiSearchBarAndroid* objectToCopy);
    ~SpBrNuiSearchBarAndroid();
	void Load();
    void Invalidate(bool without = false);
    void Reset(bool invalidate);

public:
    void SetPlaceHolderStrNative(SpBrString* placeHolderStr);
    void SetSearchBarTextNative(SpBrString* searchBarText);
    SpBrString* GetSearchBarText();

    SpBrString* GetIcon();
	void SetIcon(SpBrString* icon);
    bool GetActionView() const;
	void SetActionView(bool isActionView);
    SpBrString* GetCloseIcon();
    void SetCloseIcon(SpBrString* icon);
    int GetFontColor();
    void SetFontColor(int color);
	void Cancel();
	void CloseKeyboard();
    void SetFocus();

public:
    SpBrString *icon;
    bool actionView;
    int fontColor;
    SpBrString* closeIcon;
};


#endif /* SPBRNUISEARCHBARANDROID_H_ */
