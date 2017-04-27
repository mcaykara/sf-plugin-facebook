#import <UIKit/UIKit.h>

class SpEventGroup;
class SpBrNuiContainer;

@interface SpBrUIViewIOS : UIView {

}

@property SpEventGroup *events;
@property SpBrNuiContainer *smfObject;
@property (assign) BOOL isPage;

- (id)initWithEventGroup:(SpEventGroup*)eventGroup;
- (id)initWithFrame:(CGRect)rect eventGroup:(SpEventGroup*)eventGroup;

@end
