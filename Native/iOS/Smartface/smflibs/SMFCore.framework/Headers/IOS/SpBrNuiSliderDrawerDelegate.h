    //
//  SpBrNuiSliderDrawerDelegate.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 19/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "SpBrNuiSliderDrawerIOS.h"

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define SLIDERVIEW_TAG 314
#define SLIDE_TIMING .7
#define SLIDE_DELAY 0
#define SLIDE_SPRING_DAMPING 0.85
#define SLIDE_SPRING_VELOCITY .4
#define SLIDE_MARGIN 1
#define ACTIVEPAGE_SHADOW_OFFSET 1.5
#define ANIMATION_INTERACTION_OPTION UIViewAnimationOptionAllowUserInteraction|UIViewAnimationOptionAllowAnimatedContent

@interface SpBrNuiSliderDrawerDelegate : NSObject <UIGestureRecognizerDelegate>

@property (assign) SpBrNuiSliderDrawer* currentLeftSliderDrawer;
@property (assign) SpBrNuiSliderDrawer* currentRightSliderDrawer;
@property (nonatomic, assign) BOOL showPanel;
@property (nonatomic, assign) BOOL showingLeftPanel;
@property (nonatomic, assign) BOOL showingRightPanel;

@property (nonatomic, assign) UIView *activeNavigationControllerView;
@property (nonatomic, assign) UIView *rightSliderView;
@property (nonatomic, assign) UIView *leftSliderView;

+ (id)getInstance;

- (void)movePanel:(id)sender;
- (void)movePanelRightWithAnimationOption:(UIViewAnimationOptions)option;
- (void)movePanelLeftWithAnimationOption:(UIViewAnimationOptions)option;
- (void)movePanelToOriginalPositionWithAnimationOption:(UIViewAnimationOptions)option;
- (void)resetMainView;

- (void)getLeftView;
- (void)getRightView;
- (void)getViewToBack:(UIView *)activeNavigationControllerView withCurrentSliderView:(UIView *)currentSliderView;

+ (void)showCenterViewWithShadow:(BOOL)value withOffset:(double)offset withView:(UIView*)view;

- (void)triggerShowEvent:(SpBrNuiSliderDrawer *)currentSliderDrawer;
- (void)triggerHideEvent;
@end
