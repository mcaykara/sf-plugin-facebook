//
//  SpBrVideoRespIOS.h
//  SpratIOS
//
//  Created by ugur on 8/23/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>

#import "Core/SpDefs.h"

class SpEventGroup;
class SpBrNuiVideoViewIOS;

@interface SpBrVideoRespIOS : UIViewController {
    MPMoviePlayerController *mp;
    MPMoviePlayerViewController *mpViewController;
    SpBrNuiVideoViewIOS *videoObj;
    bool loop;
    TVideoControlStyla vcStyla;
    TMovieScalingMode msMode;
    int initPTime;
}

@property SpEventGroup *events;
@property (assign) BOOL presentVideoLayer;

- (id) initWithEventGroup:(SpEventGroup*)eventGroup obj:(SpBrNuiVideoViewIOS *)_object;
- (void) startPlayingwithUrl:(NSURL *)videoUrl Looping: (BOOL)loops;
- (void) pause;
- (void) continuePlaying;
- (void) destroyPlayer;

- (void) SetInitialPlaybackTime:(int)iPTime;
- (void) SetControlStyla:(TVideoControlStyla)controlStyla;
- (void) SetMovieScaling:(TMovieScalingMode)movieScaling;

- (void) StartLogging;
- (void) StopLogging;

@end
