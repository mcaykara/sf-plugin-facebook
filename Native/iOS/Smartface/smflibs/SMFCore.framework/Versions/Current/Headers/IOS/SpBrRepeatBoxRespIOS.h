//
//  SpBrRepeatBoxRespIOS.h
//  SpratIOS
//
//  Created by ugur on 8/23/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <vector>

#import "SpBrUITableView.h"
#import "Core/SpNuiRepeatBox.h"
#import "SpBrRepeatBoxCellViewIOS.h"

class SpEventGroup;
class SpBrParcelable;
class SpBrNuiRepeatBoxIOS;
class SpBrNuiBase;
class SpDataSet;
class SpBrString;

@interface SpBrRepeatBoxRespIOS : NSObject <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SpBrRepeatBoxCellViewIOSDelegate> {
    SpBrNuiRepeatBoxIOS *mainObject;
  
    BOOL dataSetRefreshed;
    int refreshedRows;
    int groupingColumnIndexInDataSet;
    int groupingSelectedSectionIndex;
    int groupingSelectedRowIndex;
    
    NSMutableDictionary *sectionsAndIndexes;
    NSMutableArray *indexes;
    NSMutableArray *groupingHeaderValues;
    NSMutableArray *headerIndexes;
    
    NSMutableArray *deletedSectionIndexes;
    NSMutableArray *deletedRowIndexes;
    
    NSInteger currentIndexesCount;
}

@property std::vector<SpBrParcelable *> activeObjects;
@property std::vector<SpBrParcelable *> inactiveObjects;

@property SpEventGroup *events;
@property bool infinite;
@property SpDataSet *dataset;
@property (retain) SpBrUITableView *mainTableView;

@property (nonatomic, retain) SpBrRepeatBoxCellViewIOS *swipedCellView;

@property (retain) UITableViewCell *cellDisplayingMenuOptions;
@property (retain) UIView *overlayView;

@property (retain) NSMutableDictionary *cells;
@property (retain) NSMutableDictionary *activeCells;
@property (retain) NSMutableDictionary *groupingHeaderCells;
@property (retain) NSMutableArray *activeCellBackgrounds;
@property (retain) NSMutableArray *inactiveCellBackgrounds;
@property (retain) NSMutableArray *inactiveSelectedCellBackgrounds;
@property (retain) NSMutableArray *activeCellBackgroundColors;
@property (retain) NSMutableArray *inactiveCellBackgroundColors;

@property (assign) BOOL usesHeader;
@property (assign) BOOL headerScrolling;
@property (assign) BOOL headerDeleted;

- (id) initWithObject:(SpBrNuiRepeatBoxIOS *)_object EventGroup:(SpEventGroup *)eventGroup ActiveObjects:(std::vector<SpBrParcelable *>)aobjects InactiveObjects:(std::vector<SpBrParcelable *>)iobjects DataSet:(SpDataSet *)dSet;
- (void) notifyWithTableView:(SpBrUITableView *)tableview;
- (void) destroy;
- (void) deletedRow:(NSIndexPath *)deletedRow;
- (void) updatedRow:(int)updatedRowId;
- (void) refreshedDataset;
- (void) seekedTo:(SpBrString*) sectionName setSelectedIndex: (int) selectedIndex;
- (int) getGroupingRowIndex;
- (int) getDataSetIndex:(int)group :(int)row;
- (void) nullRowImages: (bool) all;
- (void) dataSourceDidFinishLoadingNewData;
- (void) closeSwipeItems:(UIGestureRecognizer *)recognizer;
- (void)setSwipingActivated:(BOOL)activated exceptCellView:(SpBrRepeatBoxCellViewIOS *)cellView;
- (void)setSwipingActivatedForSwipeItems:(BOOL)activated;

@end
