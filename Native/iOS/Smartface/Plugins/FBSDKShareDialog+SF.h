//
//  FBSDKShare+SF.h
//  Smartface
//
//  Created by Dogan Ekici on 02/05/2017.
//  Copyright © 2017 Smartface. All rights reserved.
//

#import <FBSDKShareKit/FBSDKShareKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

//FBSDKShareDialog

@protocol FBSDKShareDialogExport <JSExport, NSObject>
-(instancetype)init;
+ (instancetype)showFromViewController:(UIViewController *)viewController
                           withContent:(id<FBSDKSharingContent>)content
                              delegate:(id<FBSDKSharingDelegate>)delegate;
@property (nonatomic, weak) UIViewController *fromViewController;
@property (nonatomic, assign) FBSDKShareDialogMode mode;
- (BOOL)canShow;
- (BOOL)show;
@property (nonatomic, weak) id<FBSDKSharingDelegate> delegate;
@property (nonatomic, copy) id<FBSDKSharingContent> shareContent;
@end

@interface FBSDKShareDialog (SF)

@end

//FBSDKShareDialogDelegate
@protocol FBSDKSharingDelegateExport <JSExport, NSObject>
-(instancetype)init;
@property (nonatomic, strong) JSValue *didCancel;
@property (nonatomic, strong) JSValue *didFail;
@property (nonatomic, strong) JSValue *didComplete;
@end

@interface FBSDKSharingDelegate : NSObject <FBSDKSharingDelegate>
@property (nonatomic, strong) JSValue *didCancel;
@property (nonatomic, strong) JSValue *didFail;
@property (nonatomic, strong) JSValue *didComplete;
@end
//FBSDKSharingContentExport
@protocol FBSDKSharingContentExport <JSExport, NSObject>
-(instancetype)init;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic, copy) FBSDKHashtag *hashtag;
@property (nonatomic, copy) NSArray *peopleIDs;
@property (nonatomic, copy) NSString *placeID;
@property (nonatomic, copy) NSString *ref;
@end

//FBSDKShareLinkContent
@protocol FBSDKShareLinkContentExport <JSExport, NSObject,FBSDKSharingContentExport>
@property (nonatomic, copy) NSString *contentDescription;
@property (nonatomic, copy) NSString *contentTitle;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *quote;
- (BOOL)isEqualToShareLinkContent:(FBSDKShareLinkContent *)content;
@end

@interface FBSDKShareLinkContent (SF)

@end

//FBSDKSharePhoto
@protocol FBSDKSharePhotoExport <JSExport, NSObject>
-(instancetype)init;
+ (instancetype)photoWithImage:(UIImage *)image userGenerated:(BOOL)userGenerated;
+ (instancetype)photoWithImageURL:(NSURL *)imageURL userGenerated:(BOOL)userGenerated;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, assign, getter=isUserGenerated) BOOL userGenerated;
- (BOOL)isEqualToSharePhoto:(FBSDKSharePhoto *)photo;
@property (nonatomic, copy) NSString *caption;
@end

@interface FBSDKSharePhoto (SF)

@end

//FBSDKShareLinkContent
@protocol FBSDKSharePhotoContentExport <JSExport, NSObject,FBSDKSharingContentExport>
@property (nonatomic, copy) NSArray *photos;
- (BOOL)isEqualToSharePhotoContent:(FBSDKSharePhotoContent *)content;
@end

@interface FBSDKSharePhotoContent (SF)

@end

//FBSDKHashtagExport
@protocol FBSDKHashtagExport <JSExport, NSObject>
+ (instancetype)hashtagWithString:(NSString *)hashtagString;
@property (nonatomic, readwrite, copy) NSString *stringRepresentation;
@property (nonatomic, readonly, assign, getter=isValid) BOOL valid;
- (BOOL)isEqualToHashtag:(FBSDKHashtag *)hashtag;
@end

@interface FBSDKHashtag (SF)

@end

//FBSDKShareVideoExport
@protocol FBSDKShareVideoExport <JSExport, NSObject>
-(instancetype)init;
+ (instancetype)videoWithVideoURL:(NSURL *)videoURL;
+ (instancetype)videoWithVideoURL:(NSURL *)videoURL previewPhoto:(FBSDKSharePhoto *)previewPhoto;
@property (nonatomic, copy) NSURL *videoURL;
@property (nonatomic, copy) FBSDKSharePhoto *previewPhoto;
- (BOOL)isEqualToShareVideo:(FBSDKShareVideo *)video;
@end

@interface FBSDKShareVideo (SF)

@end

//FBSDKShareVideoContentExport
@protocol FBSDKShareVideoContentExport <JSExport, NSObject,FBSDKSharingContentExport>
@property (nonatomic, copy) FBSDKSharePhoto *previewPhoto;
@property (nonatomic, copy) FBSDKShareVideo *video;
- (BOOL)isEqualToShareVideoContent:(FBSDKShareVideoContent *)content;
@end

@interface FBSDKShareVideoContent (SF)

@end

//FBSDKShareMediaContentExport
@protocol FBSDKShareMediaContentExport <JSExport, NSObject,FBSDKSharingContentExport>
@property (nonatomic, copy) NSArray *media;
- (BOOL)isEqualToShareMediaContent:(FBSDKShareMediaContent *)content;
@end

@interface FBSDKShareMediaContent (SF)

@end
