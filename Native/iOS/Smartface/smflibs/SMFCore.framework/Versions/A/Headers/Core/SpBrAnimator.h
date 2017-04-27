//
//  SpBrAnimator.h
//  SpratIOS
//
//  Created by ugur on 3/28/12.
//  Copyright 2011 Smartface. All rights reserved.
//

#import <Foundation/Foundation.h>

class SpBrNuiBase;
class SpEventGroup;

typedef enum {
    EPTCBackgroundColor = 0,
    EPTCBorderColor,
} EPropertyToChange;

typedef enum {
    BTLeft,
    BTTop,
    BTWidth,
    BTHeight
} TBounceType;

@interface SpBrAnimator : NSObject {
    SpBrNuiBase *smartfaceObject;

    /**
     * Different instance variables are use
     * for simultaneous background and border color transitions
     */
    UIColor *targetColor_bg;
    float red_bg, green_bg, blue_bg, endRed_bg, endGreen_bg, endBlue_bg;
    float biggestDiff_bg;

    UIColor *targetColor_bo;
    float red_bo, green_bo, blue_bo, endRed_bo, endGreen_bo, endBlue_bo;
    float biggestDiff_bo;

    float currentDiff;
    bool diffCalculated;
}

@property SpEventGroup *events;
@property TBounceType latestBounceType;
@property bool valueIncreasing;
@property int animDuration_bg;
@property int animDuration_bo;

-(id)initWithSmfObject:(SpBrNuiBase *)smfObj andEvents:(SpEventGroup *)eventGroup;
-(void)animationFinished;

-(void)changeColor:(EPropertyToChange)which From:(int)startColor To:(int)endColor Duration:(int)duration;

@end
