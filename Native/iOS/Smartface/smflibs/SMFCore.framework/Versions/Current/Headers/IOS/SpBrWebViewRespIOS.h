//
//  SpBrWebViewRespIOS.h
//  SpratIOS
//
//  Created by Antti Panula on 20.10.2011 -- 3.
//  Copyright (c) 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "Core/SpDefs.h"

class SpEventGroup;

@interface SpBrWebViewRespIOS : NSObject <UIWebViewDelegate>{
    UIWebView* webV;
}

@property SpEventGroup *events;
@property bool openLink;

- (id) initWithEventGroup:(SpEventGroup*)eventGroup :(bool) openLinkInside;
- (void) handleSwipeFrom:(UISwipeGestureRecognizer*) recognizer;
- (void) handleTapFrom:(UITapGestureRecognizer*) recognizer;
-(void) handlePinchSmf:(UIPinchGestureRecognizer *)recognizer;

@end

