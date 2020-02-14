/*!
  TrackingMarker.h
  Intripper

  Created by InTripper on 08/02/19.
  Copyright © 2020 InTripper. All rights reserved.
*/

#import <GoogleMaps/GoogleMaps.h>
/**
 *  The TrackingMarker is an icon placed on the map's surface to identify Custom POI.
 */
@interface TrackingMarker : GMSMarker{

}
/**
 *  Gets/Sets the floor number.
 */
@property(nonatomic,retain) NSNumber *level;

/// Use GPS Coordinate System Default: true
@property(nonatomic,readwrite) BOOL useGPSCoorinateSystem;

@end
