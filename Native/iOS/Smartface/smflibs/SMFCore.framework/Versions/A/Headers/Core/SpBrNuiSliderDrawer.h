//
//  SpBrNuiSliderDrawer.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 16/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SPBRNUISLIDERDRAWER_H_
#define SPBRNUISLIDERDRAWER_H_

#include "SpBrNuiContainer.h"
#include "SpBrNuiBase.h"

#ifdef TARGET_PLATFORM_ANDROID
#include "SpBrString.h"
#endif

class SpBrNuiSliderDrawer: public SpBrNuiContainer {
public:
    static SpBrNuiSliderDrawer* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiSliderDrawer* Create(SpBrNuiSliderDrawer* objectToCopy);

    SpBrNuiSliderDrawer(SpBrBase* base, SpContext* context);
    SpBrNuiSliderDrawer(SpBrNuiSliderDrawer* objectToCopy);
    virtual ~SpBrNuiSliderDrawer();

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Reset(bool invalidate = true);
    virtual void Show(){};
    virtual void Hide(){};

public:
    bool position, iPosition;
#ifdef TARGET_PLATFORM_ANDROID
    SpBrString* icon;
#endif
};

#endif  /* SPBRNUISLIDERDRAWER_H_ */
