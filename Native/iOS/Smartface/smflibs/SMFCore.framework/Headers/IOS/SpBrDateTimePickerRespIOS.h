/*
 * SpBrComboBoxRespIOS.h
 *
 *  Created on: 11 November 2011
 *      Author: ugur kilic
 */

#import <Foundation/Foundation.h>
#import "Core/SpJSCallbackGroup.h"
#include <vector>

class SpEventGroup;
class SpDataSet;
class SpBrString;
class SpBrNuiBase;
@class SpBrUIDateTimePicker;

typedef NS_ENUM(NSInteger, DTPType) {
    DTPDate = 0,
    DTPTime = 1
};

@interface SpBrDateTimePickerRespIOS : NSObject {
    UIDatePicker *picker;
    SpBrUIDateTimePicker *customPicker;
    UIView *backgroundView;
    UIToolbar *pickerTool;
    UIView *pageView;
    UIView *whitePickerBg;

    SpBrString *column;
    std::vector<SpBrString *> rowValues;
    DTPType dateType;
    bool time24Format;
    int onSlct;
    int onCncl;

    CGRect pickerInitRect;
    CGRect pickerEndRect;
    CGRect pickerToolInitRect;
    CGRect pickerToolEndRect;
    CGRect backgroundViewInit;

    BOOL iOS7;

    NSString *currentMaskString;
}

@property SpEventGroup *events;
@property SpDataSet *dataset;
@property SpBrString *currentDate;
@property SpBrString *formatStr;
@property SpJSCallbackGroup* callbckGroup;

@property (assign, getter = isOpen) BOOL opened;

- (id) initWithEventGroup: (SpEventGroup*)eventGroup Object:(SpBrNuiBase *)smfObject DataSet:(SpDataSet *)dSet column:(SpBrString *)colName type:(DTPType)dateOrTime;
- (void) OnPressDown: (id)sender;
- (void) PickerRotate;
- (void) updateCurrentDate:(SpBrString *)date;
- (void) set24Format: (bool) ret;

- (void) ShowDatePickerDynamicWithDate:(NSString *)currDateStr withMinimumDate:(NSString *)minDateStr withMaximumDate:(NSString *)maxDateStr usingMask:(NSString *)maskStr attachedCallbackGroup:(SpJSCallbackGroup *)callbackgroup hasSelectId:(int)onSelect hasCancelId:(int)onCancel fromPoint:(CGPoint)pnt;
- (void) ShowTimePickerDynamicWithDate:(int)currDate withMaximumDate:(int)maxDate withMinimumDate:(int)minDate usingHourFormat24:(bool)hourViewFormat24 andMinuteInterval:(int)minuteInterval attachedCallbackGroup:(SpJSCallbackGroup *)callbackgroup hasSelectId:(int)onSelect hasCancelId:(int)onCancel fromPoint:(CGPoint)point;

@end
