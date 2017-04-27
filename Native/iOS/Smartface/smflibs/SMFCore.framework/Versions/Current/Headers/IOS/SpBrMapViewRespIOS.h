//
//  SpBrMapViewRespIOS.h
//  SpratIOS
//
//  Created by Antti Panula on 24.11.2011 -- 4.
//  Copyright (c) 2011 Bivium. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "Core/SpEventGroup.h"
#include <vector>

class SpBrNuiMapViewIOS;
class SpUtLocation;
@class SpBrMkAnnotation;

@interface SpBrMapViewRespIOS : NSObject <MKMapViewDelegate> {
    SpBrNuiMapViewIOS *smfObject;
    SpEventGroup *events;
    MKMapRect routeRect;
    bool changingManually;
    SpBrMkAnnotation *selectedAnnotation;
}

-(id)initWitMapView:(MKMapView *)mapView andSmfObject:(SpBrNuiMapViewIOS *)object;
-(void)showRoute:(NSArray *)pointStrings SmfArray:(std::vector<SpUtLocation *> *)locPoints;
-(void)removeLine;

@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic, retain) MKPolyline *routeLine;
@property (nonatomic, retain) MKPolylineView *routeLineView;
@property (nonatomic, assign) MKMapView *map;
@property (nonatomic, assign) MKCoordinateRegion currentRegion;

@end
