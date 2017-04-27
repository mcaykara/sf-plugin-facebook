#import <UIKit/UIKit.h>

class SpEventGroup;
class SpBrNuiContainer;

@interface SpBrUIImageViewIOS : UIImageView {

}

@property SpEventGroup *events;
@property SpBrNuiContainer *smfObject;

- (id)initWithEventGroup:(SpEventGroup*)eventGroup;

@end
