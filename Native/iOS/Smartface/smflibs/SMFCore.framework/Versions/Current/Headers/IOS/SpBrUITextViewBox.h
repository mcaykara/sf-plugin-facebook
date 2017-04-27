//
//  SpBrUITextView.h
//  SpratIOS
//
//  Created by Antti Panula on 21.11.2011 -- 4.
//  Copyright (c) 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Core/SpDefs.h"

@class SPBrUILabeIOS;
class SpEventGroup;
class SpBrNuiTextView;

@interface SpBrUITextViewBox : UIScrollView {
    SpBrNuiTextView *smfObject;
    SpEventGroup *events;
    SPBrUILabeIOS *textView;
}
@property float horizontalpadding;

-(void) getTextToPtr:(NSMutableString *)res;
-(void) setSmfObject:(void*)smfObject;
-(void) setHorizontalGap:(float)horizontalpad;
-(void) setEvents:(SpEventGroup*)eventGroup;
-(void) setText:(NSString*)text;
-(SPBrUILabeIOS *) textview;

@end
