//
//  SpBrUISearchBarIOS.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 08/01/15.
//  Copyright (c) 2015 Smartface. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "Core/SpDefs.h"
#import "Core/SpBrNuiSearchBar.h"

@interface SpBrUISearchBarIOS : UISearchBar <UISearchBarDelegate>

@property SpBrNuiSearchBar *smfObject;
@property SpEventGroup* events;

@end
