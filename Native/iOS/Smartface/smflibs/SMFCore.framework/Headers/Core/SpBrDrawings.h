//
//  SpBrDrawings.h
//  CoolTable
//
//  Created by Ray Wenderlich on 9/29/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>

class SpBrNuiBase;

void drawLinearGradient(CGContextRef context, CGRect rect, CGColorRef startColor, CGColorRef  endColor);
CGRect rectFor1PxStroke(CGRect rect);
void draw1PxStroke(CGContextRef context, CGPoint startPoint, CGPoint endPoint, CGColorRef color);
void drawGlossAndGradient(CGContextRef context, CGRect rect, CGColorRef startColor, CGColorRef endColor);
static inline double radians (double degrees) { return degrees * M_PI/180; }
CGMutablePathRef createArcPathFromBottomOfRect(CGRect rect, CGFloat arcHeight);
CGMutablePathRef createRoundedRectForRect(CGRect rect, CGFloat radius);
void drawSpratUI(CGContextRef context, CGRect &rect, SpBrNuiBase *object);
void drawCustomUI(CGContextRef context, CGRect &rect, int borderWidth, int borderColor, int pixelEdge, int bgColor, bool bgTransparent);