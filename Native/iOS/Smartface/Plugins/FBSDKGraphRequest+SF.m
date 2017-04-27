//
//  FBSDKGraphRequest+SF.m
//  Smartface
//
//  Created by Dogan Ekici on 27/04/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import "FBSDKGraphRequest+SF.h"

@implementation FBSDKGraphRequest (SF)

+ (void)requestWithGraphPath:(NSString *)path parameters:(NSDictionary *)parameters HTTPMethod:(NSString *)HTTPMethod handler:(JSValue*)handler{
   [[[FBSDKGraphRequest alloc]
      initWithGraphPath:path
      parameters: parameters
      HTTPMethod:HTTPMethod]
     startWithCompletionHandler:^(FBSDKGraphRequestConnection *connection, id result, NSError *error) {
         NSMutableDictionary *handlerDict = [[NSMutableDictionary alloc] init];
         if(result) [handlerDict setObject:result forKey:@"result"];
         if(error) [handlerDict setObject:error forKey:@"error"];
         [handler callWithArguments:@[handlerDict]];
     }];
}

@end
