
#ifndef SPBRNUICONTAINER_H_
#define SPBRNUICONTAINER_H_

#include "SpBrNuiBase.h"
#include <vector>
class SpContext;
class SpBrBase;
class SpDataSource;
class RepeatBoxItemProperties;
class SpBrNuiRepeatBoxAndroid;

class SpBrNuiContainer: public SpBrNuiBase {
public:
    static SpBrNuiContainer* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiContainer* Create(SpBrNuiContainer* objectToCopy);

	SpBrNuiContainer(SpBrBase* base, SpContext* context);
    SpBrNuiContainer(SpBrNuiContainer* objectToCopy);
	virtual ~SpBrNuiContainer();
    
    void FreeCriticalObjects();
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
	void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
	SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    /**
     * Adds native UI object to container
     */
    void AddSubview(SpBrNuiBase *childObject);
    void InsertSubviewAt(SpBrNuiBase *childObject, int index);
    
    /**
     * This function's logic is not SpBrNuiContainer responsibility, must be moved to another responsible class
     */
    bool AddPluginSubview(SpJsObject childPluginView);
    /**
     * Readds the native views to UI object of container
     */
    virtual void RefreshViews();
    
    void RemoveSubview(SpBrNuiBase *childObject);
    void RemoveAllSubviews();
    void Unload();
    void Protect();
    void Unprotect();
    void DisplayFinishedTempFiles();
    void EmptyRepeatboxes(bool allRows);
    void NullImages();
    virtual void ResetChildrenLocks();
	void SetTouchEnabledForChildren(SpBrNuiContainer* container);
	void SetTouchEnabledForRepeatBoxChildren(SpBrNuiRepeatBoxAndroid* repeatObject, RepeatBoxItemProperties * item);
    void CalculateAverageHeights();
    void CalculateAverageHeightsOnPageShow();
    int GetDesignHeight();
    
    void PerformLayout(bool invalidate = true);
    void SetChildrenRectangles(bool invalidate = true, RepeatBoxItemProperties **item = NULL, SpNuiRepeatBox **repeatBox = NULL);
    /**
     * it controls all object's onshow events.
     *
     */
    void EventControl();
    void TriggerContainerVisibilityEvent();
    void EventControlAfterReset(bool parentVisible);
	void InvalidateLayout(SpBrNuiBase* invalideObjectSource);
    TLayoutOrientation GetLayoutOrientation();
    void SetLayoutOrientation(TLayoutOrientation orientation);
    TLayoutAlignment GetLayoutAlignment();
    void SetLayoutAlignment(TLayoutAlignment alignment);
    int GetLayoutHorizontalGap();
    void SetLayoutHorizontalGap(int gap);
    int GetLayoutVerticalGap();
    void SetLayoutVerticalGap(int gap);
    bool GetAutoSize();
    void SetAutoSize(bool autoSize);
    TLayoutType GetLayoutType();
    void SetLayoutType(TLayoutType lt);
    void ReadGeometry(SpDataSource* datasource);
    
    virtual void SetScrollsToTop(bool value);
public:
	TPageType iPageType;
	TLayoutType layoutType,iLayoutType;
    TLayoutOrientation layoutOrientation,iLayoutOrientation;
	TLayoutAlignment layoutAlignment,iLayoutAlignment;
    int tabBarHeight;
    bool autoExpandToFit, iAutoExpandToFit;
    int heightDifference;
    int navigationBarHeight;
    int averageContainerHeight, averageContainerWidth;
    int designWidth,designHeight;
    int designWidthType,designHeightType;
    bool scrollsToTop, iScrollsToTop;
    #ifdef TARGET_PLATFORM_ANDROID
    bool viewRemoved;
    #endif
protected:
	int type;
	bool valid;
	int layoutHorizontalGap, iLayoutHorizontalGap;
	int layoutVerticalGap, iLayoutVerticalGap;
    bool layoutEverPerformed;
    
public:
	std::vector<SpBrNuiBase*> childs, iChilds;
};

#endif
