//
//  SpBrScrollViewRespIOS.h
//  SpratIOS
//
//  Created by ugur on 17 Feb 2012
//  Copyright 2012 Smartface. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

class SpEventGroup;
class SpBrNuiScrollView;

@interface SpBrScrollViewRespIOS : NSObject <UIScrollViewDelegate> {
    SpBrNuiScrollView *smfObject;
    SpEventGroup *events;
    NSInteger currentPage;
    NSInteger previousPage;
    int prevVPage;
    int prevHPage;
    BOOL dragging;
    BOOL atLastPage, atFirstPage;
    int lastPageIndex;
}

-(id)initWithEventGroup:(SpEventGroup*)eventGroup andObject:(SpBrNuiScrollView *)object;

@end
