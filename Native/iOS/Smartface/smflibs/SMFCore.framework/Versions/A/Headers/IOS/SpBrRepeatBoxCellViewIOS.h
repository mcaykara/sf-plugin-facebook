#import <UIKit/UIKit.h>
#import <vector>
#import "Core/SpBrNuiBase.h"
#import "SpBrNuiRepeatBoxIOS.h"

@class SpBrRepeatBoxCellViewIOS;

@protocol SpBrRepeatBoxCellViewIOSDelegate <NSObject>

- (void)didShowSwipeItemsWithCellView:(SpBrRepeatBoxCellViewIOS *)cellView;
- (void)didCloseSwipeItemsWithCellView:(SpBrRepeatBoxCellViewIOS *)cellView;

@end

@interface SpBrRepeatBoxCellViewIOS : UIView <UIGestureRecognizerDelegate> {
@public
    std::vector<SpBrNuiBase *> subSpViews;
}

@property (nonatomic, assign) id<SpBrRepeatBoxCellViewIOSDelegate> delegate;

@property (nonatomic, retain) NSIndexPath *indexPath;

@property (nonatomic, retain) UITapGestureRecognizer *swipeItemsTapGestureRecognizer;
@property (nonatomic, retain) UISwipeGestureRecognizer *swipeItemsSwipeGestureRecognizer;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;

@property NSInteger inactiveBackgroundIndex;
@property NSInteger inactiveSelectedBackgroundIndex;
@property NSInteger activeBackgroundIndex;
@property NSInteger activeBackgroundColorIndex;
@property NSInteger inactiveBackgroundColorIndex;
@property SpEventGroup* events;

@property bool isWaitingToRender;

-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame withEventGroup:(SpEventGroup*)eventGroup;
-(id)initWithFrame:(CGRect)frame withEventGroup:(SpEventGroup*)eventGroup smfObject:(SpBrNuiRepeatBoxIOS *)smfObject;
-(void)destroy;

- (void)addSwipeItemButtons;
- (void)closeSwipeItem;
- (void)setPanActivated:(BOOL)activated;
- (void)setTapCloseActivated:(BOOL)activated;
- (void)setSwipeTapCloseActivated:(BOOL)activated;

@end
