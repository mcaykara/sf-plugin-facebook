//
//  SpBrComboBoxRespIOS.h
//  SpratIOS
//
//  Created by ugur on 8/23/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <vector>

#import "SpBrPopoverPickerControllerIPad.h"

class SpEventGroup;
class SpDataSet;
class SpBrString;
class SpBrBase;
class SpUtPoint;

@interface SpBrComboBoxRespIOS : NSObject <UIPickerViewDataSource, UIPickerViewDelegate, PopoverPickerDelegate, UIPopoverControllerDelegate> {
    UIPickerView *picker;
    UIView *whiteBackground;
    UIView *backgroundView;
    UIToolbar *pickerTool;
    UIView *pageView;
    CGRect pickerInitRect, pickerEndRect, pickerToolInitRect, pickerToolEndRect, backgroundViewInit;
    float rotate;
    CGAffineTransform angle;

    NSMutableArray* comboList;
    SpBrBase *base;
    std::vector<SpBrString *> rowValues;

    SpBrPopoverPickerControllerIPad *pickerController;
    UIPopoverController *pickerPopover;
}

@property SpEventGroup *events;
@property SpDataSet *dataset;
@property SpBrString *column;
@property NSMutableArray* comboList;
@property CGPoint popoverPoint;
@property (assign, getter = isOpen) BOOL opened;
@property (assign) int defaultIndex;

- (id) initWithEventGroup: (SpEventGroup*)eventGroup Object:(SpBrBase *)smfBase DataSet:(SpDataSet *)dSet column:(SpBrString *)colName;
- (id) initWithEventGroup: (SpEventGroup*)eventGroup Object:(SpBrBase *)smfBase Data:(SpBrString**)comboData size:(int)length;
- (void) ShowComboBox: (id)sender;
- (void) CloseComboBox;
- (void) ObjectRemove;
- (void) OnPressDown: (id)sender;
- (void) OnDragOutside;
- (void) RotatePickerBackground;
- (void) setComboList:(SpBrString**)list size:(int) length;
- (BOOL) getOpened;
- (int) getResponderViewTag;

@end
