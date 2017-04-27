//
//  SMFApplication.h
//  Smartface
//
//  Created by Tolga Haliloğlu on 02/03/2017.
//
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol SMFApplicationExport <NSObject, JSExport>

+(NSDictionary *)dataCounters;
+(void)call:(NSString *)uri withData:(NSDictionary *)data;
+(void)exit;
+(void)restart;

@end

@interface SMFApplication : NSObject <SMFApplicationExport>

+(NSDictionary *)dataCounters;
+(void)call:(NSString *)uri withData:(NSDictionary *)data;
+(void)exit;
+(void)restart;

@end
