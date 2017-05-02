//
//  FBSDKShare+SF.m
//  Smartface
//
//  Created by Dogan Ekici on 02/05/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import "FBSDKShareDialog+SF.h"

//FBSDKShareDialog
@implementation FBSDKShareDialog (SF)

@end

//FBSDKShareDialogDelegate
@implementation FBSDKSharingDelegate

- (void)sharer:(id<FBSDKSharing>)sharer didCompleteWithResults:(NSDictionary *)results{
    NSMutableDictionary *handlerDict = [[NSMutableDictionary alloc] init];
    if(results) [handlerDict setObject:results forKey:@"results"];
    [_didComplete callWithArguments:@[handlerDict]];
}

- (void)sharer:(id<FBSDKSharing>)sharer didFailWithError:(NSError *)error{
    NSMutableDictionary *handlerDict = [[NSMutableDictionary alloc] init];
    if(error) [handlerDict setObject:error forKey:@"error"];
    [_didFail callWithArguments:@[handlerDict]];
}

- (void)sharerDidCancel:(id<FBSDKSharing>)sharer{
    [_didCancel callWithArguments:nil];
}

@end
