//
//  SpBrUIEditBoxIOS.h
//  SpratIOS
//
//  Created by ugur on 8/18/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "Core/SpDefs.h"
#import "Core/SpBrNuiEditBoxView.h"

class SpEventGroup;

@interface SpBrUIMultiLineEditBoxIOS : UITextView <UIKeyInput> {
    BOOL drawPlaceHolder;
    BOOL drawClearButton;
    BOOL isEditing;
    NSString *placeholder;
    UIButton *clearButton;
    UIColor *placeHolderTextColor;
    BOOL isRefreshNeedForPlaceHolderTextColor;
}

@property BOOL hasMask;
@property SpBrNuiEditBoxView *smfObject;
@property SpEventGroup* events;
@property float horizontalGap;

-(void)setPlaceHolder:(NSString *)string;
-(void)setPlaceHolderTextColor:(UIColor *)color;
-(void)clearText;
-(UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event;

@end

@interface SpBrUISingleLineEditBoxIPhone : UITextField <UIKeyInput> {
    TVerticalAlign verticalAlignment;
    int textHeight;
    UIColor *placeHolderTextColor;
}

@property (nonatomic) TVerticalAlign verticalAlignment;
@property SpBrNuiEditBoxView *smfObject;
@property SpEventGroup* events;
@property float horizontalGap;

-(id)initWithInt:(int)borderwidth;

- (void)setAdjustsFontSizeToFitWidthNumber:(NSNumber*)number;
- (void)setMinimumFontSizeNumber:(NSNumber*)number;
- (void)setPlaceHolderTextColor:(UIColor *)color;

@end
