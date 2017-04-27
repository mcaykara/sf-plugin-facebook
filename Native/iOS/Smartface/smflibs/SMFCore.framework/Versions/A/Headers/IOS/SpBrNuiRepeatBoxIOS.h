/*
 * SpBrNuiRepeatBoxIOS.h
 *
 *  Created on: Aug 22, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUIREPEATBOXIOS_H_
#define SPBRNUIREPEATBOXIOS_H_

#include "Core/SpNuiRepeatBox.h"
#include "Core/SpBrNuiRepeatBoxSwipeItem.h"

class SpBrNuiRepeatBoxIOS: public SpNuiRepeatBox {
public:
	SpBrNuiRepeatBoxIOS(SpBrBase* base, SpContext* context);
    SpBrNuiRepeatBoxIOS(SpBrNuiRepeatBoxIOS *objectToCopy);
	virtual ~SpBrNuiRepeatBoxIOS();

    void CloneCompleted();
    void Load();
    void Unload();
    void Invalidate(bool skipMainProperty = false);
    void Reload();
    void AddItem(int index, SpBrNuiBase *object);
    void SetConnectedDataset(SpDataSet *dataset);
    void SetConnectedExternalSource(SpJsObject dataSource);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void EnterEditMode();
    void ExitEditMode();
    void DestroyObjects();
    void ChangeCopyObjectsProperty(SpBrString **targetAttribute, SpBrString **value, int smfId);
    void InsertNativeRowsTo(int start, int count);
    void DeleteRowAt(int group, int row);
    RepeatBoxIndexPath* VisibleRowAtTop();
    void ScrollToY(int offset);
    void ScrollTo(RepeatBoxIndexPath* target, int percentageTopRow);
    void DeletingAllowationUpdated();
    void ShowNativeObject(bool value);
    void FreeImages(bool allRows);
    bool IsRowVisible(void *ixPath);
    void SetGroupingExists(bool grouping);
    void ClosePullItems();
    void UpdatePullUpLocation();

    int GetGroupIndex(int rowIndex);
    int GetGroupRowIndex(int rowIndex);
    int GetDatasetRowIndex(int rowIndex);

    void HeaderTouched();
    void SetCreatedChildrenRects(SpUtRect rect, int smfId);
    bool tableViewClosed;

    void SetRect(SpUtRect rect, bool invalidate = true);


    void SetEnableScroll(bool result);
    void RefreshNative (int size, int *arr);
    void UpdateItemBackgroundColor(int item);
    void UpdateItemBorderColor(int item);
    void UpdateItemImageFillType(int item);
    void UpdateItemImageDrawPosition(int item);
    void UpdateItemBackgroundImage(int item);
    void UpdateItemHeight(int item);
    void *repeatboxReporter;
    void SetScrollsToTop(bool value);

    bool UpdateItemHeights();
    bool HasSwipeItem();
    int SwipeItemWidth();
    void CloseSwipeItems();

private:
    void *swipeLeftGestureRecognizer;
    void *swipeRightGestureRecognizer;
//    void *swipeUpGestureRecognizer;
//    void *swipeDownGestureRecognizer;

public:
    unsigned int refreshOption;
    void *headerView;
    void *tableView;
    void *pullDownView;
    void *pullUpView;
    SpUtPoint swipedPoint;
    std::vector<SpBrNuiRepeatBoxSwipeItem *> swipeItems;
};

#endif /* SPBRNUIREPEATBOXIOS_H_ */
