/*!
  TrackingMarker.h
  Intripper

  Created by Sanginfo on 08/02/16.
  Copyright © 2017-18 InTripper. All rights reserved.
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

@end
