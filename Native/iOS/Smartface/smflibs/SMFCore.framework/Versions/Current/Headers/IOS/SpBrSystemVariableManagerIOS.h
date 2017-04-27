//
//  SpBrSystemVariableManagerIOS.h
//  SpratIOS
//
//  Created by ugur on 23/11/2011.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "Core/SpDefs.h"
#import "Core/SpParserConstants.h"
#import "Reachability.h"

class SpBrBase;
class SpBrString;

@interface SpBrSysVariableManagerIOS : NSObject <UIAccelerometerDelegate, CLLocationManagerDelegate> {
    SpBrBase *base;
    CLLocationManager *locationManager;
    SpBrString *connectionString;

    Reachability *internetReach;
    NSString* wifiMacId;
    NSString* bluetoothMac;
    NSString* vendorId;
    NSString* advertisingId;
}

@property (readwrite, assign) int lastTouchX, lastTouchY;
@property (readwrite, assign) float gpsLatitude, gpsLongitude;
@property (readwrite, assign) float accelerometerX, accelerometerY, accelerometerZ;
@property (readwrite, assign) float bytesReceived, bytesSent;
@property (readwrite, assign) int batteryLevel, batteryState;
@property (readwrite, assign) int notificationId, notificationType;
@property (nonatomic, retain) NSString* wifiMacId;
@property (nonatomic, retain) NSString* bluetoothMac;
@property (nonatomic, retain) NSString* vendorId;
@property (nonatomic, retain) NSString* advertisingId;
@property (nonatomic, retain) NSString* proxyAddress;
@property (nonatomic, assign) bool gpsStatus;

-(id)initWithBaseData:(SpBrBase *)baseData;
-(void)LocationEnabled:(bool)isLocEnabled;
-(SpBrString*)RefreshBatteryVars;
-(SpBrString*)GetBatteryState;
-(int)GetBatteryLevel;
-(void)TouchedAtX:(int)x Y:(int)y;
-(void) setNotificationSettings: (int) notId setNotificationType: (int) notType;
-(NSString *)GetLanguage;
-(SpBrString *)GetConnectionType;
-(void)SetReachability;
-(void)updateIdentifiers;
-(void)updateProxyAddress;

@end
