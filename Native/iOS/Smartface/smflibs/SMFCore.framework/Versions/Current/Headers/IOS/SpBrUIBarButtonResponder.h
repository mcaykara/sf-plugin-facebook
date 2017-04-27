//
//  SpBrUIBarButtonResponder.h
//  Smartface
//
//  Created by ugur on 04/03/14.
//  Copyright 2014 Smartface. All rights reserved.
//

#import <Foundation/Foundation.h>

class SpBrNuiBarButtonItem;

@interface SpBrUIBarButtonResponder : NSObject

-(id)initWithBarButton:(SpBrNuiBarButtonItem *)barButton;
-(void)onBarButtonPressed;

@end
