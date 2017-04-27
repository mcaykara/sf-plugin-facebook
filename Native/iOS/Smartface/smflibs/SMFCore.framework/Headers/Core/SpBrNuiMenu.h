/*
 * SpBrNuiMenu.h
 *
 *  Created on: Jul 19, 2011
 *      Author: timo
 */

#ifndef SPBRNUIMENU_H_
#define SPBRNUIMENU_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"
#include "SpBrNuiMenuItem.h"
#include "SpDefs.h"

class SpDataSet;

class SpBrNuiMenu: public SpBrNuiBase {
public:
	SpBrNuiMenu(SpBrBase* base, SpContext* context);
    SpBrNuiMenu(SpBrNuiMenu* objectToCopy);
	virtual ~SpBrNuiMenu();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
	void Reset(bool invalidate = true) {}
	void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value) {}
    SpBrString* getObjectValue(SpBrString* targetAttribute) { return NULL; }
    virtual void ShowNativeMenu(SpBrParcelable *firedObject,TMenuType menuType){};
public:
    int iTextColor, textColor;
    int iActiveTextColor, activeTextColor;
    int iBgColor, bgColor;
    int iActiveBgColor, activeBgColor;
    int iBorderColor, borderColor;
    int iBorderWidth, borderWidth;
    SpDataBridge* title;
    SpBrString *titleDynamic;
    SpBrString *imgUrlDynamic;
    int typeOfMenu;
    std::vector<SpBrParcelable *> menuItems;
public:
    void CreateJSObject(bool protect = true);
};

#endif /* SPBRNUIMENU_H_ */
