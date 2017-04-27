//
//  SpBrKeyboardListen.h
//  SpratIOS
//
//  Created by mehmet akyol on 5/15/13.
//  Copyright (c) 2013 Bivium. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SpBrKeyboardListen : NSObject
{
    BOOL _isVisible;
}
+ (SpBrKeyboardListen *)sharedInstance;
@property (nonatomic, readonly, getter=isVisible) BOOL visible;

@end
