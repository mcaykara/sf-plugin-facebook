//
//  SpBrUITextView.h
//  SpratIOS
//
//  Created by Antti Panula on 21.11.2011 -- 4.
//  Copyright (c) 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Core/SpDefs.h"

class SpBrNuiTextView;
class SpEventGroup;

@interface SpBrUITextView : UITextView {
}

@property SpBrNuiTextView *smfObject;
@property SpEventGroup *events;
@property float horizontalGap;

-(void)setEditableNumber:(NSNumber*)number;
-(void) getTextToPtr:(NSMutableString *)res;

@end
