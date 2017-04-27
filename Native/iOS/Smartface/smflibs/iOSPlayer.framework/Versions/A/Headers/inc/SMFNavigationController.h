#import <UIKit/UIKit.h>

__attribute__ ((visibility ("default"))) @protocol SMFNavigationControllerInterface <NSObject>

-(void)setStatusBarNotified:(BOOL)value;

@end

__attribute__ ((visibility ("default"))) @interface SMFNavigationController : NSObject {

}

+(UINavigationController<SMFNavigationControllerInterface> *) SMFGetNavigationController;

@end
