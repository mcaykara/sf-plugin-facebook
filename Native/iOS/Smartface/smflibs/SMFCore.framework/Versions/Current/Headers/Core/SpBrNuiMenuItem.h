/*
 * SpBrNuiMenuItem.h
 *
 *  Created on: Jul 19, 2011
 *      Author: timo
 */

#ifndef SPBRNUIMENUITEM_H_
#define SPBRNUIMENUITEM_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"
#include "SpBrNuiMenuItem.h"

class SpDataSet;

class SpBrNuiMenuItem: public SpBrNuiBase {
public:
	SpBrNuiMenuItem(SpBrBase* base, SpContext* context);
    SpBrNuiMenuItem(SpBrNuiMenuItem* objectToCopy);
	virtual ~SpBrNuiMenuItem();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
	void Reset(bool invalidate = true) {}
	void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value) {}
    SpBrString* getObjectValue(SpBrString* targetAttribute) { return NULL; }

public:
    SpBrString* text;
    SpBrString* picture;
    SpBrNuiMenu* menu;
    int menuItemType;
    int menuIndex;
    std::vector<SpBrParcelable *> menuItems;
};

#endif /* SPBRNUIMENUITEM_H_ */
