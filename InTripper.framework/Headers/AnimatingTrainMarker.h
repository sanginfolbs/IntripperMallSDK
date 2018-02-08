//
//  AnimatingTrainMarker.h
//  Intripper
//
//  Created by apple on 08/10/17.
//  Copyright © 2017 InTripper. All rights reserved.
//

#import <GoogleMaps/GoogleMaps.h>

@interface AnimatingTrainMarker : GMSMarker


/**
 *  Gets/Sets the floor number.
 */
@property(nonatomic,retain) NSNumber *level;
@property(nonatomic,retain) NSNumber *speed;//Meter/Second
@property(nonatomic,retain) NSString *trainIcon;//Meter/Second
@property (nonatomic,retain)NSArray *animationPath;

-(void)start:(GMSMapView *)map;
@end
