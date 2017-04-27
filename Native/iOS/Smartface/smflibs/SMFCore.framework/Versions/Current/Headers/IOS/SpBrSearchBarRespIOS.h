//
//  SpBrSearchBarRespIOS.h
//  SpratIOS
//
//  Created by Mehmet Akyol on 01/07/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpBrSearchBarRespIOS_h
#define SpratIOS_SpBrSearchBarRespIOS_h

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

class SpEventGroup;
class SpBrNuiSearchBar;

@interface SpBrSearchBarRespIOS : NSObject <UISearchBarDelegate, UISearchDisplayDelegate>{
    SpBrNuiSearchBar *smfObject;
    SpEventGroup *events;

    CGFloat animatedDistance;
}

-(id)initWithEventGroup:(SpEventGroup*)eventGroup andObject:(SpBrNuiSearchBar *)object;

@end

#endif
