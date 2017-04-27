/*
 * SpBrRepeatBoxHeaderViewIOS.h
 *
 *  Created on: 15 Mar 2012
 *      Author: ugur
 */

#import <UIKit/UIKit.h>

#import "Core/SpBrNuiBase.h"

class SpBrNuiRepeatBoxIOS;

@interface SpBrRepeatBoxHeaderViewIOS : UIView {
    int backgroundColor;
    int borderWidth;
    int borderColor;
    int roundedEdge;
    bool bgTransparent;

    SpBrNuiRepeatBoxIOS *father;
}

- (id)initWithCustomProperties:(NSInteger)bow :(NSInteger)boc :(NSInteger)pix :(NSInteger)bac :(BOOL)bgt andFather:(SpBrNuiRepeatBoxIOS *)ft;

@end
