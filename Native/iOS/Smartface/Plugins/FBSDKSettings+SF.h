//
//  UIView+SF.h
//  Smartface
//
//  Created by Dogan Ekici on 27/04/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol FBSDKSettingsExport <JSExport, NSObject>

+ (NSString *)appID;

+ (void)setAppID:(NSString *)appID;

+ (NSString *)appURLSchemeSuffix;

+ (void)setAppURLSchemeSuffix:(NSString *)appURLSchemeSuffix;

+ (NSString *)clientToken;

+ (void)setClientToken:(NSString *)clientToken;

+ (void)setGraphErrorRecoveryDisabled:(BOOL)disableGraphErrorRecovery;

+ (NSString *)displayName;

+ (void)setDisplayName:(NSString *)displayName;

+ (NSString *)facebookDomainPart;

+ (void)setFacebookDomainPart:(NSString *)facebookDomainPart;

+ (CGFloat)JPEGCompressionQuality;

+ (void)setJPEGCompressionQuality:(CGFloat)JPEGCompressionQuality;

+ (NSNumber *)autoLogAppEventsEnabled;

+ (void)setAutoLogAppEventsEnabled:(NSNumber *)AutoLogAppEventsEnabled;

+ (BOOL)limitEventAndDataUsage;

+ (void)setLimitEventAndDataUsage:(BOOL)limitEventAndDataUsage;

+ (NSString *)sdkVersion;

+ (NSSet *)loggingBehavior;

+ (void)setLoggingBehavior:(NSSet *)loggingBehavior;

+ (void)enableLoggingBehavior:(NSString *)loggingBehavior;

+ (void)disableLoggingBehavior:(NSString *)loggingBehavior;

+ (void)setLegacyUserDefaultTokenInformationKeyName:(NSString *)tokenInformationKeyName;

+ (NSString *)legacyUserDefaultTokenInformationKeyName;

+ (void)setGraphAPIVersion:(NSString *)version;

+ (NSString *)graphAPIVersion;

@end

@interface FBSDKSettings (SF)

@end
