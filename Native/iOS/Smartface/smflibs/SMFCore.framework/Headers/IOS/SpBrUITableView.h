//
//  SpBrUITableView.h
//  SpratIOS
//
//  Created by ugur on 1 Dec 2011.
//  Copyright 2011 Smartface. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <vector>

#import "EGORefreshTableHeaderView.h"

class SpEventGroup;
class SpNuiRepeatBox;
class SpBrNuiBase;

@interface SpBrUITableView : UITableView {
    std::vector<SpBrNuiBase *> retainedObjects;

	BOOL _reloading;
    BOOL noRetainedObject;
}

@property SpEventGroup *events;
@property(assign,getter=isReloading) BOOL reloading;
@property(assign) BOOL noRetainedObject;
@property(assign) BOOL isOpenedCell;

-(id)initWithEventGroup:(SpEventGroup*)eventGroup Object:(SpNuiRepeatBox *)object :(BOOL)grouped;
-(void)AddToRetainedObjects:(SpBrNuiBase *)object;
-(void)DestroyRetainedObjects;
-(BOOL)hiddenOrSuperviewHidden;
-(void)handleSwipeFrom:(UISwipeGestureRecognizer *)recognizer;
-(void)handleTapFrom:(UITapGestureRecognizer *)recognizer;
-(void)handlePinchSmf:(UIPinchGestureRecognizer *)recognizer;
@end
