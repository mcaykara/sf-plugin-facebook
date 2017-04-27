//
//  SpBrUIImageIOS.h
//  SpratIOS
//
//  Created by Antti on 11/29/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Core/SpBrNuiImageView.h"

#define KMainImageTag   2

class SpEventGroup;

@interface SpBrUIImageIOS : UIScrollView <UIScrollViewDelegate>  {
    UIImageView* myImageView;
    SpBrNuiImageView* smfObject;
    pthread_mutex_t imageViewLock;
    bool eventInProcess;
}

@property (nonatomic, retain) UIImageView* myImageView;
@property SpEventGroup* events;


- (id) initWithFrame:(CGRect)rect eventGroup:(SpEventGroup*)eventGroup smfobj:(SpBrNuiImageView*) object;

//- (IBAction)handlePinch:(UIPinchGestureRecognizer *)recognizer;
//- (void) addScrollTo:(UIView *)target;
//- (void) addZoomTo:(UIView *)target;
- (void) addDoubleTap;
- (void) setMyImageViewTotal:(CGRect)rect;
- (void) setLevelsTotal:(CGFloat)max :(CGFloat)min;
- (void) setImageZoom;
- (void) switchViews;
- (BOOL) mainImageViewReady;
- (void) setImageOnBackground:(NSString *)imageName;

+ (CGSize) aspectScaledImageSizeForImageView:(UIImageView *)iv image:(UIImage *)im;

@end
