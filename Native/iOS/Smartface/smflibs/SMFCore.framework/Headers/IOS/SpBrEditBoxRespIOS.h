//
//  SpBrEditBoxRespIOS.h
//  SpratIOS
//
//  Created by ugur on 8/23/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#include <vector>

class SpEventGroup;
class SpBrNuiEditBoxViewIOS;

@interface SpBrEditBoxRespIOS : NSObject <UITextFieldDelegate, UITextViewDelegate> {
    SpBrNuiEditBoxViewIOS *mainSmfObject;
    int index;
    BOOL deleted;
    BOOL deletedLong;
    int addedTextLength;
    NSRange currentRange;
    NSRange currencyRange;
    int currencyMaskIndex;
    CGFloat animatedDistance;
    bool writtenToMiddleForCurrency;


}

@property SpEventGroup *events;
@property (nonatomic, retain) NSString *previousMaskedText;

- (id) initWithEventGroup:(SpEventGroup*)eventGroup:(SpBrNuiEditBoxViewIOS *)obj;

@end
