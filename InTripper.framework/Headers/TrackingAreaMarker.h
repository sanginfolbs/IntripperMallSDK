/*
  TrackingAreaMarker.h
  Intripper

  Created by apple on 05/12/17.
  Copyright © 2017 InTripper. All rights reserved.
*/

#import <GoogleMaps/GoogleMaps.h>

/**
 Display POI Area on map
 */
@interface TrackingAreaMarker : GMSPolygon{
}

/**
 *  Gets/Sets the floor number.
 */

@property(nonatomic,retain) NSNumber *level;

/**
 Draws an area on the map

 @param areaCorners An array of coordinates
 */
-(void) addAreaPoints:(NSArray *)areaCorners;
@end
