//
//  FBSDKGraphRequest+SF.h
//  Smartface
//
//  Created by Dogan Ekici on 27/04/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol FBSDKGraphRequestExport <JSExport, NSObject>

@property (nonatomic, strong, readonly) NSMutableDictionary *parameters;

@property (nonatomic, copy, readonly) NSString *tokenString;

@property (nonatomic, copy, readonly) NSString *graphPath;

@property (nonatomic, copy, readonly) NSString *HTTPMethod;

@property (nonatomic, copy, readonly) NSString *version;

+ (void)requestWithGraphPath:(NSString *)path parameters:(NSDictionary *)parameters HTTPMethod:(NSString *)HTTPMethod handler:(JSValue*)handler;

@end

@interface FBSDKGraphRequest (SF)

+ (void)requestWithGraphPath:(NSString *)path parameters:(NSDictionary *)parameters HTTPMethod:(NSString *)HTTPMethod handler:(JSValue*)handler;

@end
