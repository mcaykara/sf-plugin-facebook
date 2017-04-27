#ifndef SPBRUISCROLLVIEWIOS_H_
#define SPBRUISCROLLVIEWIOS_H_

#import <UIKit/UIKit.h>

class SpEventGroup;
class SpBrNuiScrollView;

@interface SpBrUIScrollViewIOS : UIScrollView {

}

@property SpEventGroup *events;
@property SpBrNuiScrollView *smfObject;

- (id) initWithFrame:(CGRect)rect eventGroup:(SpEventGroup*)eventGroup object:(SpBrNuiScrollView *)object;

@end

#endif