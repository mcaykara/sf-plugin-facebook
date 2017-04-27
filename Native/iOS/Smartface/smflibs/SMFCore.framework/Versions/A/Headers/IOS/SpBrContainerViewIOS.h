#import <UIKit/UIKit.h>

class SpEventGroup;
class SpBrNuiContainer;

@interface SpBrContainerViewIOS : UIView {

}

@property SpEventGroup *events;
@property SpBrNuiContainer *smfObject;

- (id)initWithEventGroup:(SpEventGroup*)eventGroup;
- (id)initWithFrame:(CGRect)rect eventGroup:(SpEventGroup*)eventGroup;

@end
