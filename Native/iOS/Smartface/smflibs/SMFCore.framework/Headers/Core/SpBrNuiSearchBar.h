/*
 * SpBrNuiSearchBar.h
 *
 *  Created on: 25 June 2014
 *      Author: Selcuk Yayla
 */

#ifndef SPBRNUISEARCHBAR_H_
#define SPBRNUISEARCHBAR_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"
class SpDataBridge;

class SpBrNuiSearchBar: public SpBrNuiBase {
public:
    static SpBrNuiSearchBar* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiSearchBar* Create(SpBrNuiSearchBar* objectToCopy);

	SpBrNuiSearchBar(SpBrBase* base, SpContext* context);
	SpBrNuiSearchBar(SpBrNuiSearchBar* objectToCopy);
    virtual ~SpBrNuiSearchBar();
public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    virtual void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* tarGetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* tarGetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);

    SpBrString* GetPlaceHolderStr();
    virtual SpBrString* GetSearchBarText();
	void SetPlaceHolderStr(SpBrString* placeHolderStr);
	void SetSearchBarText(SpBrString* searchBarText, bool invalidate = false);

    virtual void SetPlaceHolderStrNative(SpBrString* placeHolderStr) = 0;
    virtual void SetSearchBarTextNative(SpBrString* searchBarText) = 0;
    virtual void Cancel() = 0;
    virtual void CloseKeyboard() = 0;

    int GetBarStyle() const;
    int GetTintColor() const;
    bool GetStickToNavigationBar() const;
    bool GetShowsCancelButton() const;

public:
	SpBrString *text;
    SpBrString *placeHolder;
    bool iStickToNavigationBar;
    bool iShowsCancelButton;
    int iBarStyle;
    int iTintColor;

protected:
    bool stickToNavigationBar;
    bool showsCancelButton;
    int barStyle;
    int tintColor;
    SpDataBridge *placeHolderDataBridge;
};


#endif /* SPBRNUISEARCHBAR_H_ */
