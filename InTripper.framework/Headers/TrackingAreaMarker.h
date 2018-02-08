//
//  TrackingAreaMarker.h
//  Intripper
//
//  Created by apple on 05/12/17.
//  Copyright © 2017 InTripper. All rights reserved.
//

#import <GoogleMaps/GoogleMaps.h>

@interface TrackingAreaMarker : GMSPolygon{
}

/**
 *  Gets/Sets the floor number.
 */

@property(nonatomic,retain) NSNumber *level;
-(void) addAreaPoints:(NSArray *)areaCorners;
@end
