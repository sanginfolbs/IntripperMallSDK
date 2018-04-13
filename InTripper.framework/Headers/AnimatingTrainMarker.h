/*!
  AnimatingTrainMarker.h
  Intripper

  Created by apple on 08/10/17.
  Copyright © 2017 InTripper. All rights reserved.
*/

#import <GoogleMaps/GoogleMaps.h>

/**
 Show train animation
 */
@interface AnimatingTrainMarker : GMSMarker


/**
 *  Gets/Sets the floor number.
 */
@property(nonatomic,retain) NSNumber *level;

/**
 Speed of train
 */
@property(nonatomic,retain) NSNumber *speed;//Meter/Second

/**
 icon of train
 */
@property(nonatomic,retain) NSString *trainIcon;//Meter/Second

/**
 Path of train
 */
@property (nonatomic,retain)NSArray *animationPath;

/**
 Start train running animation

 @param map mapview
 */
-(void)start:(GMSMapView *)map;
@end
