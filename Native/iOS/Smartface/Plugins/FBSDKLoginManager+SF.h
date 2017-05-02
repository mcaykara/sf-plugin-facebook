//
//  FBSDKLoginManager+SF.h
//  Smartface
//
//  Created by Dogan Ekici on 27/04/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>

@protocol FBSDKLoginManagerExport <JSExport, NSObject>
- (instancetype)init;
- (void)logInWithReadPermissions:(NSArray *)permissions viewController:(UIViewController *)viewController handler:(JSValue*)handler;
- (void)logInWithPublishPermissions:(NSArray *)permissions viewController:(UIViewController *)viewController handler:(JSValue*)handler;
@end


@interface FBSDKLoginManager (SF)

- (void)logInWithReadPermissions:(NSArray *)permissions viewController:(UIViewController *)viewController handler:(JSValue*)handler;
- (void)logInWithPublishPermissions:(NSArray *)permissions viewController:(UIViewController *)viewController handler:(JSValue*)handler;

@end

@protocol FBSDKLoginManagerLoginResultExport <JSExport, NSObject>

@property (copy, nonatomic) FBSDKAccessToken *token;

@property (readonly, nonatomic) BOOL isCancelled;

@property (copy, nonatomic) NSArray *grantedPermissionsArray;

@property (copy, nonatomic) NSArray *declinedPermissionsArray;

@end

@interface FBSDKLoginManagerLoginResult (SF)

@property (copy, nonatomic) NSArray *grantedPermissionsArray;

@property (copy, nonatomic) NSArray *declinedPermissionsArray;

@end


@protocol FBSDKAccessTokenExport <JSExport, NSObject>

@property (readonly, copy, nonatomic) NSString *appID;

@property (readonly,copy, nonatomic) NSArray *declinedPermissionsArray;

@property (readonly, copy, nonatomic) NSDate *expirationDate;

@property (readonly,copy, nonatomic) NSArray *permissionsArray;

@property (readonly, copy, nonatomic) NSDate *refreshDate;

@property (readonly, copy, nonatomic) NSString *tokenString;

@property (readonly, copy, nonatomic) NSString *userID;

- (BOOL)hasGranted:(NSString *)permission;

- (BOOL)isEqualToAccessToken:(FBSDKAccessToken *)token;

+ (FBSDKAccessToken *)currentAccessToken;

+ (void)setCurrentAccessToken:(FBSDKAccessToken *)token;

@end

@interface FBSDKAccessToken (SF)

@property (readonly,copy, nonatomic) NSArray *declinedPermissionsArray;

@property (readonly,copy, nonatomic) NSArray *permissionsArray;

@end
