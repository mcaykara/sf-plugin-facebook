//
//  SpratNavigationController.h
//  SpratIOS
//
//  Created by Antti Panula on 10.10.2011 -- 2.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Core/SpApplication.h"
#import "SMFNavigationController.h"

@interface SpratNavigationController : UINavigationController <SMFNavigationControllerInterface> {
    SpApplication* smartfaceApplication;
    UIDeviceOrientation currentOrientation;
}

- (id)initWithSpApplication:(SpApplication *)smartfaceApplication;
- (void)setStatusBarNotified:(BOOL)value;

@end
