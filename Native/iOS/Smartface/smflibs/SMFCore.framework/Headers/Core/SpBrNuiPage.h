/*
 * SpBrNuiPage.h
 *
 *  Created on: 01 A�u 2011
 *      Author: ugur
 */

#ifndef SPBRNUIPAGE_H_
#define SPBRNUIPAGE_H_

#include "SpBrNuiBase.h"
#include "SpBrNuiContainer.h"
#include "SpBrNuiNavigationItem.h"

class SpBrNuiMenu;
class SpBrNuiActionBar;
class SpBrNuiCanvas;

class SpBrNuiPage: public SpBrNuiContainer {
public:
    static SpBrNuiPage* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiPage* Create(SpBrNuiPage* objectToCopy);

	SpBrNuiPage(SpBrBase* base, SpContext* context);
    SpBrNuiPage(SpBrNuiPage* objectToCopy);
	virtual ~SpBrNuiPage();

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Relax();

    virtual void RemoveBackgroundImage() {};
    virtual void SetTopZOrderForCanvasObjects(bool b){};
    virtual void Load();
    void Unload();

public:
    bool IsDialog();
    bool IsDialogAndIsOnScreen();

public:
#ifdef TARGET_PLATFORM_IOS
    SpBrNuiNavigationItem *navigationItem;
#endif
    TOrientation orientation;
    SpBrString *iBackgroundPicture, *backgroundPicture;
	TPageEffectType iPageEffectType, pageEffectType;
	TPageEffectEase iPageEffectEase, pageEffectEase;
    TPageEffectSubType pageEffectSubType;
	bool pageEffectFade;
    bool enableTabbar, lockOrientation;
    bool parentAccessable;
    bool isLoaded;
    bool isPopped;
    bool reorderViews;
    bool pageJsxLoaded;
    TPageEffectType orientedEffect;
    SpBrNuiMenu *menu;
    bool isStatusBarSetted;
    bool isNavBarSetted;
    std::vector<void*> dialogsWaitingToShow;
    bool showNavigationBar, showActionBar;
    std::vector<SpBrNuiCanvas*> canvasObjects;
// JS Stuff
public:
    void CreateJSObject(bool protect = true);
#ifdef TARGET_PLATFORM_ANDROID
public:
    bool isUILoaded;
protected:
    SpBrNuiActionBar *actionBar;
#endif
};

#endif /* SPBRNUIPAGE_H_ */
