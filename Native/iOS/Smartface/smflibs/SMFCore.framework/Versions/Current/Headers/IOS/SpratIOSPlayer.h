//
//  SpratIOSPlayer.h
//  SpratIOS
//
//  Created by ugur on 10/10/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MessageUI/MessageUI.h>
#import <AVFoundation/AVFoundation.h>
#import <QuartzCore/QuartzCore.h>
#import <AudioToolbox/AudioToolbox.h>
#import <QuartzCore/CAAnimation.h>
#import <AddressBookUI/ABPeoplePickerNavigationController.h>
#import <AddressBookUI/ABNewPersonViewController.h>
#import <StoreKit/StoreKit.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <AssetsLibrary/AssetsLibrary.h>

#import "Core/SpApplication.h"
#import "SpBrCameraViewRespIOS.h"
#import "FHSTwitterEngine.h"
#import "SpratNavigationController.h"
#import "SpBrComboBoxRespIOS.h"
#import "Core/SpBrNuiMenu.h"
#import "SpBrUIPopupMenuIOS.h"
#import "PECropViewController.h"
#import "SpBrAudioStreamerIOSMx.h"
#import "SMFiOSPlayer.h"
#import "SESClient.h"

#define KEventGroupSaveImage        1
#define KEventGroupPickGromGallery  2
#define KEventGroupCropImage        3
#define KEventGroupShare            4
#define KEventGroupTwitter          5

@class SpratUIViewController;
@class SpBrUIPopupMenuIOS;
class SpEventGroup;
class SpBrNuiPage;


@interface SpratIOSPlayer : NSObject <MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, AVAudioPlayerDelegate, UINavigationControllerDelegate, AVAudioPlayerDelegate, FHSTwitterEngineAccessTokenDelegate, UIActionSheetDelegate, ABPeoplePickerNavigationControllerDelegate, SpBrUIPopupMenuIOSDelegate, ABNewPersonViewControllerDelegate, SKPaymentTransactionObserver,SMFiOSPlayerInterface,checkUpdateDelegate, PECropViewControllerDelegate
    , MFMailComposeViewControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, CAAnimationDelegate
#ifdef SMF_INAPPPURCHASE_ENABLED
,SKProductsRequestDelegate
#endif //SMF_INAPPPURCHASE_ENABLED
> {
    SpApplication *smartfaceApplication;
    UINavigationController *mainNavigationController;

    MPMoviePlayerController *moviePlayer;
    AVAudioPlayer *audioPlayer;
    SpBrAudioStreamerIOSMx *audioStreamer;
    NSTimer *progressUpdateTimer;
    MFMailComposeViewController *composer;
    SpBrCameraViewRespIOS *camera;
    NSString *twitterMessage;
    MFMessageComposeViewController *messageSender;
    SpBrComboBoxRespIOS *comboResponder;
    SpEventGroup *notifierEvents;
    SpEventGroup *emulatorNotifierEvent;
    int otherMusicIsPlaying, soundInterrupted;
    BOOL firstPageOpened;
    SpratUIViewController *activeViewController;
    std::vector<SpBrParcelable *> currentMenuItems;
    SpBrUIPopupMenuIOS *customPopover;
    UIPopoverController *popoverController;
    bool protectingBackgroundAdded;
    NSArray *_products;
    NSMutableArray *retrievingProducts;
#ifdef SMF_INAPPPURCHASE_ENABLED
    SKProductsRequest *_request;
#endif //SMF_INAPPPURCHASE_ENABLED
    NSURL *appCallUrl;
    BOOL cameFromBack;
    BOOL contactPickerDetails;
    NSDictionary* remoteTempDic;
    std::map<int, SpEventGroup *> generalEventGroupMap;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) UINavigationController *mainNavigationController;
@property (retain) MPMoviePlayerController *moviePlayer;
@property (retain) AVAudioPlayer *audioPlayer;
@property (retain) SpBrCameraViewRespIOS *camera;
@property (readwrite) SpEventGroup *notifierEvents;
@property (readwrite) SpEventGroup *sesCheckUpdateEvent;
@property (nonatomic, retain) SpratUIViewController *activeViewController;
@property UIDeviceOrientation previousOrient;
@property UIDeviceOrientation currentOrientation;
@property BOOL curledDialogIsOpen;
@property BOOL searchBarIsOpen;
@property SpBrString *navbarBackground;
@property int navbarColor;
@property (nonatomic, retain) NSMutableArray *closingDialogArray;
@property SpBrNuiPage *dialogInQueue;
@property BOOL queuedDialogFades;
@property (retain) NSArray *products;
#ifdef SMF_INAPPPURCHASE_ENABLED
@property (retain) SKProductsRequest *request;
#endif //SMF_INAPPPURCHASE_ENABLED
@property (retain, nonatomic)SpratUIViewController* splashViewController;
@property (nonatomic) SpBrNuiPage* splashScreen;
@property (retain) UIView* splashView;
@property (nonatomic) BOOL isSplashOpened;
@property (nonatomic, getter = isMinimized) BOOL minimized;
@property (nonatomic, assign) NSInteger animatedDistanceForEditbox;
@property (nonatomic, retain) NSURL *appCallUrl;
@property BOOL cameFromBack;
@property (nonatomic, retain) NSMutableArray *assetArray;
@property (retain) NSDictionary* remoteTempDic;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) id<CloudEmulatorDelegate> cloudDelegate;

+ (SpratIOSPlayer*) GetPlayer;
- (void) run;
- (void) clean;
- (void) appEnteredBackground;
- (void) appCameFromBackground;
- (void) appWillTerminate;
- (void) receiveNotification :(UILocalNotification*) notification;
- (void) receivePushNotification: (NSDictionary*) userInfo;
- (void) registeredNotification: (NSData*) deviceToken setNSError:(NSError*) error;
- (void) registerUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
+ (UIViewController*) GetActiveViewController;
+ (SpratNavigationController*) GetActiveNavigationController;
+ (CTTelephonyNetworkInfo *) networkInfo;
- (SpApplication *) GetApplication;
- (void) freeUnusedPages;
- (void) CheckStatusBarForiOS7;
- (void) removeStatusBarBackground;
- (void) HandleUrlAppCall :(NSURL*) url;
- (void) HandleRemoteNotification: (UIApplication*) app dict:(NSDictionary*) userInfo;
- (void) getOneContactInfo:(NSMutableDictionary*)contactDataDict :(ABRecordRef)person :(NSMutableSet *const*) fields;
- (CLLocationManager *) getLocationManager;
- (void) addEventGroupToGeneral:(SpEventGroup *)eventGroup onTag:(int)eventTag;
- (void) cropImage:(UIImage *)image withOptions:(CropImageOption)option;

typedef void (^ImageNotAsset)();
-(void)GetImageWithPath:(SpBrString *)imagePath ifAsset:(ALAssetsLibraryAssetForURLResultBlock)assetFoundBlock notAsset:(ImageNotAsset)notAssetBlock;

- (void) SMFRun;
- (void) SMFAppWillTerminate;
- (void) SMFAppEnteredBackground;
- (void) SMFAppCameFromBackground;
- (void) SMFReceiveNotification :(UILocalNotification*)notification;
- (void) SMFRegisteredNotification:(NSData *)token andError:(NSError *)error;
- (void) SMFRegisterUserNotificationSettings:(UIUserNotificationSettings *)settings;
- (void) SMFSetRemoteTempDict:(NSDictionary *)dictionary;
- (void) SMFHandleRemoteNotification:(UIApplication *)application andDict:(NSDictionary *)dict;
- (void) SMFHandleUrlAppCall:(NSURL *)url;
- (void) SMFSetAppCallUrl:(NSURL *)url;
- (BOOL) SMFIsCameFromBack;
- (void) SMFLoadCustomPluginIdentifier:(const char *)definitonString andDefinition:(const SpJsClassDefinition *)classDefinition withObject:(void **)privateObject;
- (void) SMFRunJavaScriptSmartface:(SpJsObject)object :(SpJsObject)thisObject :(size_t)argumentCount :(const SpJsValue[])args;
-(JSGlobalContextRef) SMFGetGlobalContextRef;
-(void) SMFSetCloudEmulatorDelegate:(id)delegate;

@end

__attribute__ ((visibility ("default"))) void InstallUncaughtExceptionHandler();
