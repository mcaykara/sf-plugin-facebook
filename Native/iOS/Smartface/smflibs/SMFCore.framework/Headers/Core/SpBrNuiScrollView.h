/*
 * SpBrNuiScrollView.h
 *
 *  Created on: Oct 19, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUISCROLLVIEW_H_
#define SPBRNUISCROLLVIEW_H_

#include "SpBrNuiBase.h"
#include "SpBrNuiContainer.h"

class SpBrNuiScrollView: public SpBrNuiContainer {
public:
    static SpBrNuiScrollView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiScrollView* Create(SpBrNuiScrollView* objectToCopy);

	SpBrNuiScrollView(SpBrBase* base, SpContext* context);
    SpBrNuiScrollView(SpBrNuiScrollView* objectToCopy);
	virtual ~SpBrNuiScrollView();
public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);

    void SetContentWidth(SpBrString *newValue, bool performLayout = false);
    void SetContentHeight(SpBrString *newValue, bool performLayout = false);
    virtual void SetPageWidth(SpBrString* newValue) = 0;
    virtual void SetPageHeight(SpBrString* newValue) = 0;
    virtual void setPageAlignment(int value) = 0;

    virtual void ScrollToX(int x, bool animated = false) = 0;
    virtual void ScrollToY(int y, bool animated = false) = 0;
    virtual void SetNativeContentSize(SpUtSize newContentSize) = 0;
    bool isEnabledVerticalScrolling();
    bool isEnabledHorizontalScrolling();
private:
    void ReadItemHeight(SpDataSource* datasource, int &height, bool &isperc, int &percvalue);
protected:
    TScrollViewIndicatorStyle iScrollIndicatorStyle, scrollIndicatorStyle;

    int iDecelerationRate, decelerationRate;

    bool iEnableVerticalScrolling, enableVerticalScrolling;
    bool iEnableHorizontalScrolling, enableHorizontalScrolling;
    bool iShowVerticalScrollBar, showVerticalScrollBar;
    bool iShowHorizontalScrollBar, showHorizontalScrollBar;
    bool iEnableZoom, enableZoom;
	bool autoSize , iAutoSize;
public:
    bool enableVerticalPaging, enableHorizontalPaging;
    int iContentWidth, contentWidth;
    int iContentHeight, contentHeight;
    bool isContentWidthPerc,iIsContentWidthPerc;
    bool isContentHeightPerc,iIsContentHeightPerc;
    int contentHeightPerc,iContentHeightPerc;
    int contentWidthPerc,iContentWidthPerc;
    int scrollX, scrollY;
    int pageWidth, pageHeight;
    int pagingIndex;
    int pageAlignment;
// JS Stuff
public:

    bool GetEnableVerticalScrolling();
    void SetEnableVerticalScrolling(bool enable);
    bool GetEnableHorizontalScrolling();
    void SetEnableHorizontalScrolling(bool enable);
    bool GetShowVerticalScrollBar();
    void SetShowVerticalScrollBar(bool set);
    bool GetShowHorizontalScrollBar();
    void SetShowHorizontalScrollBar(bool set);
    bool GetEnableVerticalPaging();
    void SetEnableVerticalPaging(bool enable);
    bool GetEnableHorizontalPaging();
    void SetEnableHorizontalPaging(bool enable);
    TScrollViewIndicatorStyle GetScrollIndicatorStyle();
    void SetScrollIndicatorStyle(TScrollViewIndicatorStyle style);
    int GetDecelerationRate();
    void SetDecelerationRate(int rate);
    bool GetEnableZoom();
    void SetEnableZoom(bool enable);
};

#endif /* SPBRNUISCROLLVIEW_H_ */
