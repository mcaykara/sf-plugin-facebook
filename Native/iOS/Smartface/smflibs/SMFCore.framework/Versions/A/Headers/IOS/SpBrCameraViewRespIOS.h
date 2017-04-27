//
//  SpBrCameraViewRespIOS.h
//  SpratIOS
//
//  Created by ugur on 8/28/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

class SpEventGroup;
class SpDataBridge;

@interface SpBrCameraViewRespIOS : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

}

@property (nonatomic, retain) UIImagePickerController *imagePickerController;
@property (nonatomic, retain) UIToolbar *cameraToolbar;
@property int resolution;

@property SpEventGroup *events;
@property SpDataBridge *dataBridge;

- (id) initWithEventGroup:(SpEventGroup*)eventGroup;
- (void) starting;
- (void) close;

@end
