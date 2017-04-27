//
//  FBSDKLoginManager+SF.m
//  Smartface
//
//  Created by Dogan Ekici on 27/04/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import "FBSDKLoginManager+SF.h"

@implementation FBSDKLoginManager (SF)

- (void)logInWithReadPermissions:(NSArray *)permissions viewController:(UIViewController *)viewController handler:(JSValue*)handler{
    [self logInWithReadPermissions:permissions fromViewController:viewController handler:^(FBSDKLoginManagerLoginResult *result, NSError *error) {
        NSMutableDictionary *handlerDict = [[NSMutableDictionary alloc] init];
        if(result) [handlerDict setObject:result forKey:@"result"];
        if(error) [handlerDict setObject:error forKey:@"error"];
        [handler callWithArguments:@[handlerDict]];
    }];
}

@end

@implementation FBSDKLoginManagerLoginResult (SF)

- (NSArray *)grantedPermissionsArray {
    return self.grantedPermissions.allObjects;
}

- (void)setGrantedPermissionsArray:(NSArray *)grantedPermissionsArray {
    self.grantedPermissions = [[NSSet alloc] initWithArray:grantedPermissionsArray];
}

- (NSArray *)declinedPermissionsArray {
    return self.declinedPermissions.allObjects;
}

- (void)setDeclinedPermissionsArray:(NSArray *)declinedPermissionsArray {
    self.declinedPermissions = [[NSSet alloc] initWithArray:declinedPermissionsArray];
}

@end

@implementation FBSDKAccessToken (SF)

- (NSArray *)declinedPermissionsArray {
    return self.declinedPermissions.allObjects;
}

- (NSArray *)permissionsArray {
    return self.permissions.allObjects;
}


@end

