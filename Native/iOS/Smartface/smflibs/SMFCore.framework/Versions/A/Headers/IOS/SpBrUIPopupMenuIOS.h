/*
 * SpBrUIPopupMenuIOS.mm
 *
 *  Created on: Aug 6, 2012
 *      Author: ugur
 */

#import <UIKit/UIKit.h>
#import <vector>

class SpBrParcelable;

@protocol SpBrUIPopupMenuIOSDelegate <NSObject>

-(void)PopupItemSelected;

@end

@interface SpBrUIPopupMenuIOS : UIScrollView {
    std::vector<SpBrParcelable *> menuItems;
    id<SpBrUIPopupMenuIOSDelegate> delegate;
}

@property (assign) id<SpBrUIPopupMenuIOSDelegate> delegate;
@property (assign) int maxWidth;

-(id)initWithNuiItems:(std::vector<SpBrParcelable *>) items;
-(void)constructOnPoint:(CGPoint)point andObjectType:(int) objectType;

@end