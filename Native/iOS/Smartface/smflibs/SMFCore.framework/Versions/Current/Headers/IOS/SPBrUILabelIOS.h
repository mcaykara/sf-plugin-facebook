//
//  SPBrUILabelIOS.h
//  SpratIOS
//
//  Created by ugur on 8/16/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Core/SpDefs.h"

class SpEventGroup;
class SpBrNuiTextView;

@interface SPBrUILabeIOS : UILabel {
@private
    TVerticalAlign verticalAlignment;
}

@property SpEventGroup *events;
@property SpBrNuiTextView *smfObject;
@property (nonatomic) TVerticalAlign verticalAlignment;
@property float uiLabelHorizontalPadding;
@property (assign) BOOL parentButtonHighlighted;

@end
