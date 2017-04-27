//
//  SpratUIViewController.h
//  SpratIOS
//
//  Created by Ugur Kilic on 22.12.2011.
//  Copyright 2011 Smartface. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESpratViewController.h"

class SpBrNuiPageIOS;

@interface SpratUIViewController : UIViewController <ESpratViewControllerInterface> {

}

@property SpBrNuiPageIOS *smfPage;
@property BOOL pushAnimation;
@property BOOL popAnimation;
@property (getter = IsCurledDialog) BOOL curledDialog;

- (id)initWithSmfPage:(SpBrNuiPageIOS *)page;
- (UIView *)GetPageView;
- (bool)IsOrientationLocked;
- (void)willRotated;
- (void)rotated;
- (void)updateViewCenter;
- (void)pickerRotated;
- (void) callBanner;
- (void)updateViewCenter;

- (void)setStatusBarSetted:(BOOL)value;

@end
