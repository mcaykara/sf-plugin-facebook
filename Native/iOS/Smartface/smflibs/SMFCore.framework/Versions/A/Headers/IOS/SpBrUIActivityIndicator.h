/*
 * SpBrUIActivityIndicator.h
 *
 *  Created on: Jan 28, 2012
 *      Author: ugur
 */

#import <UIKit/UIKit.h>

class SpEventGroup;

@interface SpBrUIActivityIndicator : UIActivityIndicatorView {

}

@property SpEventGroup* events;

- (id)initWithEventGroup:(SpEventGroup *)eventGroup;

@end
