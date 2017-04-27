#import <UIKit/UIKit.h>
#import "Core/SpUtPoint.h"

class SpBrNuiCanvas;
class SpUtPoint;
class SpEventGroup;

@interface SpBrUICanvasIOS : UIView {
    CGContextRef canvasContext;
    UIImage* drawImage;
}

@property (nonatomic, retain) NSTimer* myTimer;
@property SpEventGroup *events;
@property SpBrNuiCanvas *smfObj;

- (id)initWithFrame:(CGRect)rect eventGroup:(SpEventGroup*)eventGroup obj:(SpBrNuiCanvas*) smf;
- (void)loopPeriodChanged;
- (void)refresh;
- (void)stop;

- (void) drawLineFrom:(CGPoint)from to:(CGPoint)to width:(CGFloat)width type:(int)type  strokeColor: (UIColor*) strkColor fillColor: (UIColor*) fillColor;
- (void) drawLineLinearFrom:(CGPoint)from to:(CGPoint)to startColor:(UIColor*)startColor endColor:(UIColor*)endColor lineWidth:(int) wdth;


- (void) drawCircleRadial:(CGPoint)startPoint r:(int)radius start:(int) strAngle end:(int)endAngle p1:(CGPoint)point1 p2:(CGPoint)point2 type:(int) type round1:(int)r1 round2:(int)r2 startColor:(UIColor*) first endColor:(UIColor*)second width:(int) wdth;
- (void) drawCirclePlain:(CGPoint) startPoint r:(int)round  stroke:(UIColor*)strkColor fillColor:(UIColor*)fillClr width:(int) wdth;
- (void) drawCircleLinear:(CGPoint) startPoint r:(int)round start:(int) strAngle end:(int)endAngle startColor:(UIColor*)startColor endColor:(UIColor*)endColor p1:(CGPoint)point1 p2:(CGPoint)point2 lineWidth:(int) wdth;



- (void) drawRectPlain:(CGRect)rect stroke:(UIColor*)strkColor fillColor:(UIColor*)fillClr lineWidth:(int) wdth;
- (void) drawRectLinearGradient:(CGRect)rect startColor:(UIColor*)startColor p1:(CGPoint)point1 p2:(CGPoint)point2 endColor:(UIColor*)endColor lineWidth:(int) wdth;
- (void) drawRectRadialFrom:(CGRect)rect p1:(CGPoint)point1 p2:(CGPoint)point2 type:(int) type round1:(int)r1 round2:(int)r2 startColor:(UIColor*) first endColor:(UIColor*)second width:(int) wdth;



- (void) drawRoundRectPlain:(CGRect)rect stroke:(UIColor*)strkColor fillColor:(UIColor*)fillClr roundX:(int) rX roundY:(int)rY lineWidth:(int) wdth;
- (void) drawRoundRectLinear:(CGRect)rect startColor:(UIColor*)startColor p1:(CGPoint)point1 p2:(CGPoint)point2  endColor:(UIColor*)endColor roundX:(int) rX roundY:(int)rY lineWidth:(int) wdth;
- (void) drawRoundRectRadial:(CGRect)rect p1:(CGPoint)point1 p2:(CGPoint)point2 roundX:(int) rX roundY:(int)rY round1:(int)r1 round2:(int)r2 startColor:(UIColor*) first endColor:(UIColor*)second width:(int) wdth;


- (void) drawArcPlain:(CGRect)rect stroke:(UIColor*)strkColor fillColor:(UIColor*)fillClr start:(int) strAngle end:(int)endAngle wdth:(int) width centerLines:(bool) useCenterLines;
- (void) drawArcLinear:(CGRect)rect start:(int) strAngle end:(int)endAngle startColor:(UIColor*)startColor endColor:(UIColor*)endColor p1:(CGPoint)point1 p2:(CGPoint)point2 lineWidth:(int) wdth centerLines:(bool) useCenterLines;
- (void) drawArcRadial:(CGRect)rect start:(int) strAngle end:(int)endAngle p1:(CGPoint)point1 p2:(CGPoint)point2 type:(int) type round1:(int)r1 round2:(int)r2 startColor:(UIColor*) first endColor:(UIColor*)second width:(int) wdth centerLines:(bool) useCenterLines;


- (void) drawTextPlain:(CGRect)rect txt:(NSString*)text fnt:(UIFont*)font strkClr:(UIColor*) strokeColor;


- (void) drawPolyPlain:(std::vector<SpUtPoint *>) polyPoints stroke:(UIColor*)strkColor fillColor:(UIColor*)fillClr lineWidth:(int) wdth;
- (void) drawPolyLinear:(std::vector<SpUtPoint *>) polyPoints startColor:(UIColor*)startColor endColor:(UIColor*)endColor p1:(CGPoint)point1 p2:(CGPoint)point2 lineWidth:(int) wdth;
- (void) drawPolyRadial:(std::vector<SpUtPoint *>) polyPoints p1:(CGPoint)point1 p2:(CGPoint)point2 type:(int) type round1:(int)r1 round2:(int)r2 startColor:(UIColor*) first endColor:(UIColor*)second width:(int) wdth;

- (void) drawImageIOS:(std::vector<SpUtPoint *>) srcPoints dest:(std::vector<SpUtPoint *>)destPoints img:(UIImage*)image;
- (UIImage*) getImage;
@end
