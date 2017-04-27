#ifndef SPBRNUIREPEATBOXANDROID_H_
#define SPBRNUIREPEATBOXANDROID_H_

#include "Core/SpNuiRepeatBox.h"
#include "Core/SpRepeatBoxRow.h"
#include <vector>

#include <iostream>
#include <map>

class SpBrNuiRepeatBoxAndroid : public SpNuiRepeatBox {
private:
	int *groupingHeadersChildrenRows;
	int groupingHeadersChildrenRowsSize;
	std::vector<int*> col_ids;
	std::map<int,SpRepeatBoxRow *> rowsConstructed_;
public:
	SpBrNuiRepeatBoxAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiRepeatBoxAndroid(SpBrNuiRepeatBoxAndroid *objectToCopy);
	void Reset(bool invalidate = true);
	virtual ~SpBrNuiRepeatBoxAndroid();
    void Load();
    void Invalidate(bool skipMainProperty = false);
    void InvalidateStyle();
    void EnterEditMode();
    void ExitEditMode();
    void notifyData();
    void Unload();
    void DisplayFinishedTempFiles();
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    int getGroupingColumnIndex();
	// ext
    void constructRow(int index,int type,int unusedRowPosition, jintArray smfids,jlongArray owners,jobjectArray unusedObjects);
    void deleteRow(int index);
    void moveRow(int index,bool toUp);
    void FireOnRowRenderEvent(int index);
    void NotifySelectedIndex(int index,bool firstRow);
    bool isGroupingHeader(int index);
    void NotifyOnScroll(bool listViewScrolling, int firstItemTop,int firstItemPosition,int pushItemScrollY);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void FiringEventOnThis(int eventID, int eventCode = -1);
    void CellChanged(SpBrNuiBase* cell);
    void DestroyObjects();
    void UpdatePullEnabled();
    int GetGroupIndex(int rowIndex);
    int GetGroupRowIndex(int rowIndex);
    void ClosePullItems();

    void UpdateItemBackgroundColor(int item);
    void UpdateItemBorderColor(int item);
    void UpdateItemImageFillType(int item);
    void UpdateItemBackgroundImage(int item);
    void UpdateItemHeight(int item);
    void UpdateItemImageDrawPosition(int item);

    void InsertNativeRowsTo(int start, int count);
    RepeatBoxIndexPath* VisibleRowAtTop();
    void ScrollTo(RepeatBoxIndexPath* target, int percentageTopRow);
    void SetEnableScroll(bool result);
    void RefreshNative( int size , int *arr );
    void DoClearCopiedObjects();

    void SetActiveRow(int index);

    void DeletingAllowationUpdated();
    void ScrollToY(int y);
    void SendDeleteAnimationType();

    void DeleteRowAt(int group, int row);

    void SendExceptionPropertiesToAndroid(std::map<int,RepeatBoxItemProperties*> exceptionProp);
    bool exceptionPropHeights;

    void SetCircular(bool);
    void SetAlpha();
private:
    std::map<int, std::vector<SpBrNuiBase*> > copiedObjectsMap;
    void ClearCopiedObjects();
    void ClearCopiedObjectsMap();

};
#endif
