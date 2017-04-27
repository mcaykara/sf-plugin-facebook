/*
 * SpNuiRepeatBox.h
 *
 *  Created on: Aug 22, 2011
 *      Author: ugurkilic
 */

#ifndef SPNUIREPEATBOX_H_
#define SPNUIREPEATBOX_H_

#include <iostream>
#include <map>

#include "SpBrNuiBase.h"
#include "SpBrNuiContainer.h"
#include "SpBrString.h"
#include "SpBrNuiRepeatBoxSwipeItem.h"

#include "SpBrNuiFactory.h"

#include "SpJsEngine/Core/SpJsEngine.h"


class RepeatBoxItemProperties {
    public:
        RepeatBoxItemProperties(SpNuiRepeatBox* p){
            backgroundImgPath = NULL;
            jsObjectRef = SpJsNullObject;
            parent = p;
            usedHeightInPerformLayout = 0;

            allowDelete = false;
            drawMode = drawPosition = 0;
            borderColor = iBorderColor = 0;
            backgroundColor = iBackgroundColor = 0;
            percValue = isPerc = height = 0;
            item_type = 0;
        }

        RepeatBoxItemProperties(RepeatBoxItemProperties* p):
            item_type(p->item_type),
            backgroundImgPath(p->backgroundImgPath ? new SpBrString(p->backgroundImgPath) : NULL),
            drawMode(p->drawMode),
            drawPosition(p->drawPosition),
            backgroundColor(p->backgroundColor),
            iBackgroundColor(p->iBackgroundColor),
            height(p->height),
            isPerc(p->isPerc),
            percValue(p->percValue),
            borderColor(p->borderColor),
            iBorderColor(p->iBorderColor),
            allowDelete(p->allowDelete),
            parent(p->parent)
            {
                jsObjectRef = SpJsNullObject;
                usedHeightInPerformLayout = 0;

                for (int i = 0; i < p->controls.size(); ++i)
                {
                    SpBrNuiBase *controlToClone = (SpBrNuiBase *)(p->controls[i]);
                    controls.push_back(SpBrNuiFactory::GetClone(&controlToClone, false));
                }
            }

        ~RepeatBoxItemProperties(){
            if(backgroundImgPath) delete backgroundImgPath;
            backgroundImgPath = NULL;
            controls.clear();
        }
        int item_type;
        int height;
        bool isPerc;
        int percValue;
        int backgroundColor;
        int iBackgroundColor;
        int borderColor;
        int iBorderColor;
        int drawPosition;
        int drawMode;
        bool allowDelete;
        int usedHeightInPerformLayout;
        SpJsObject jsObjectRef;
        SpNuiRepeatBox* parent;
        SpBrString* backgroundImgPath;
        std::vector<SpBrParcelable *> controls;
};

struct RepeatBoxIndexPath {
    RepeatBoxIndexPath(int g, int r) {
        group = g;
        row = r;
    }
    int group;
    int row;
};

class SpNuiRepeatBox: public SpBrNuiContainer {
    public:
        const static int ITEM_ACTIVE            = 0;
        const static int ITEM_INACTIVE          = 1;
        const static int ITEM_HEADER            = 2;
        const static int ITEM_GROUPINGHEADER    = 3;
        const static int ITEM_PULL_DOWN         = 4;
        const static int ITEM_PULL_UP           = 5;

        RepeatBoxItemProperties** items;

        SpDataBridge *groupingDataBridge;
        SpBrString *refreshText;

        int groupingStyle;
        bool deleteEnabled, reorderEnabled, groupingExists;
        bool pullDownRefresh, iPullDownRefresh;
        bool pullUpRefresh, iPullUpRefresh;

        bool inEditingMode;
        bool firstShown;
        bool showFirstState;
        int selectedIndex, selectedGroup;
        int renderingIndex, renderingGroup;
        int maximumCalculatedHeight;
        int repeatboxRowCount;
        bool isUsingExternalSource;
        SpJsObject externalSourceRef;
        SpJsObject externalGroupingSourceRef;

        KRepeatBoxRowAnimation insertAnimationType, deleteAnimationType;
        TRepeatBoxHeader headerType;
        bool showHeader;
        bool scrollHeader;
        bool iScrollEnabled,scrollEnabled;
        bool showScroll, iShowScroll;
        bool dontUpdate;
        bool iIsCircular, isCircular;
        bool iUseActiveItem, useActiveItem;
        int lastDeletedRowIndex;
        std::map<int,RepeatBoxItemProperties*> exceptionProperties;
        std::map<int,RepeatBoxItemProperties*> activeItemProperties;

    private:
        int savedScrollIndex;
        int savedScrollPosition;

    public:
        static SpNuiRepeatBox* Create(SpBrBase* base, SpContext* context);
        static SpNuiRepeatBox* Create(SpNuiRepeatBox* objectToCopy);

        SpNuiRepeatBox(SpBrBase* base, SpContext* context);
        SpNuiRepeatBox(SpNuiRepeatBox* objectToCopy);
        virtual ~SpNuiRepeatBox();

    public:
        RepeatBoxItemProperties* InactiveItem() { return items[ITEM_INACTIVE]; };
        RepeatBoxItemProperties* ActiveItem() { return items[ITEM_ACTIVE]; };
        RepeatBoxItemProperties* HeaderItem() { return items[ITEM_HEADER]; };
        RepeatBoxItemProperties* GroupingHeaderItem() { return items[ITEM_GROUPINGHEADER]; };
        RepeatBoxItemProperties* PullDownItem() { return items[ITEM_PULL_DOWN]; };
        RepeatBoxItemProperties* PullUpItem() { return items[ITEM_PULL_UP]; };

        void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
        void Reset(bool invalidate = true);
        void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
        SpBrString* getObjectValue(SpBrString* targetAttribute);
        void AssignDefaultValue(const char *attribute, const char *value);
        void AssignDefaultValueForItem(int index, const char *attribute, const char *value);
        void AssignInitialValue(char **attribute, SpJsValue valueRef);
        void NotifyChildrenObject(SpBrNuiBase **currentViewPtr, int currentRowIndex, bool inActive);
        void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
        void NotifyBindVariable(SpDataBridge* source,SpBrString* value);

        void CreateJSObject(bool protect = true);
        void Unprotect();
        void Unload();

        SpDataSet* GroupingDataSet();
        SpBrString* GroupingDataColumn();
        virtual void SetConnectedDataset(SpDataSet *dataset);
        virtual void SetConnectedExternalSource(SpJsObject dataSource);

        void FireRepeatBoxEvent(TEventID eventID);
        void ResetChildrenLocks();

        virtual bool UpdateItemHeights();
        void ConstructCustomRowsFromFunction();
        void CalculateRowCount();
        int TotalGroupingHeaderItem();
        bool isHeaderInVector(std::vector<char *> headerVector, char *key);

        void InsertRowsAt(int start, int count);
        virtual void AddItem(int index, SpBrNuiBase *object);
        virtual void DeleteRowAt(int group, int row);
        void RemoveItemFromControls(SpBrNuiBase *item);

    private:
        void ReadItemHeight(SpDataSource* datasource, int &height, bool &isperc, int &percvalue);

    public:
        int GetLayoutType();
        void SetLayoutType(int type);
        void SetScrollIndex(int s);
        void SetScrollPosition(int s);
        int GetScrollIndex();
        int GetScrollPosition();
        int GetItemHeight(int item,int rowIndex);
        void SetItemHeight(int type, SpBrString *h);
        int GetItemBackgroundColor(int item,int rowIndex);
        int GetItemBorderColor(int item,int rowIndex);
        int GetItemDrawPosition(int item,int rowIndex);
        int GetItemDrawMode(int item,int rowIndex);
        const SpBrString* GetItemBackgroundImg(int item,int rowIndex);
        bool GetItemAllowDelete(int item,int rowIndex);

#ifdef TARGET_PLATFORM_ANDROID
        virtual void SendExceptionPropertiesToAndroid(std::map<int,RepeatBoxItemProperties*> exceptionProp) = 0;
        virtual void UpdatePullEnabled() = 0;
#endif

    public:
        virtual void Reload() {};
        virtual void SetEnableScroll(bool result) = 0;
        virtual void RefreshNative( int size , int *arr );
        virtual void EnterEditMode() = 0;
        virtual void ExitEditMode() = 0;
        virtual void DestroyObjects() {};
        virtual void ChangeCopyObjectsProperty(SpBrString **targetAttribute, SpBrString **value, int smfId) {};
        virtual int GetGroupIndex(int rowIndex) = 0;
        virtual int GetGroupRowIndex(int rowIndex) = 0;
        virtual void InsertNativeRowsTo(int start, int count) = 0;
        virtual RepeatBoxIndexPath* VisibleRowAtTop() = 0;
        virtual void ScrollTo(RepeatBoxIndexPath* target, int percentageTopRow) = 0;
        virtual void ScrollToY(int offset) = 0;
        virtual void DeletingAllowationUpdated() {};
        virtual void FreeImages(bool allRows) {};
        virtual void SetGroupingExists(bool grouping);

        virtual void UpdateItemBackgroundColor(int item) = 0;
        virtual void UpdateItemBorderColor(int item) = 0;
        virtual void UpdateItemImageFillType(int item) = 0;
        virtual void UpdateItemImageDrawPosition(int item) = 0;
        virtual void UpdateItemBackgroundImage(int item) = 0;
        virtual void UpdateItemHeight(int item) = 0;
        virtual void ClosePullItems() = 0;
        virtual void UpdatePullUpLocation() {};
        virtual void SetActiveRow(int index){};
};

#endif /* SPNUIREPEATBOX_H_ */
