//
//  SpBrRectangleIOS.h
//  SpratIOS
//
//  Created by ugur on 8/18/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>

class SpEventGroup;

@interface SpBrRectangleIOS : UIView {
    int activeGradientOrientation;
    bool activeFillGradient;
    int activeBorderWidth;
    int activeRoundedEdge;
    int activeRotation;
    UIColor* activeEndColor;
    UIColor* activeStartColor;
    UIColor* activeBorderColor;

}

@property (nonatomic, retain) UIColor *_fillColor;
@property (nonatomic, retain) UIColor *_borderColor;
@property (nonatomic, retain) UIColor *_startColor;
@property (nonatomic, retain) UIColor *_endColor;
@property bool _fill;
@property bool _fillGradient;
@property int _borderWidth;
@property int _roundedEdge;
@property int _rotation;
@property int _gradientOrientation;
@property SpEventGroup* events;

- (id) initWithEventGroup:(SpEventGroup*)eventGroup;

- (id)initWithFrame:(CGRect)frame Rotation:(int)rotation Width:(int) width gradientOrientation:(int) gradientOrientation borderColor:(UIColor*)bordercolor fillColor:(UIColor*)fillcolor fill:(bool)fill startColor:(UIColor*)startcolor endColor:(UIColor*)endcolor RoundedEdge:(int) roundedEdge;

@end
