//
//  MapProperties.h
//  gpsindoor
//
//  Created by Sang.Mac.04 on 28/03/15.
//  Copyright (c) 2015 indooratlas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <GoogleMaps/GoogleMaps.h>
#import "IndoorMapObject.h"

/**
 Internal map Information
 */
@interface IndoorMapProperties : NSObject

/**
 Internal map properties

 @return
 */
+ (IndoorMapProperties *)instance;

/**
 New Map instance

 @param details
 @return
 */
+(instancetype)createNewMap:(NSDictionary *)details;

/**
 Floor name for map

 @param ioFloor internal floor
 @return
 */
-(NSString *)FloorName:(int)ioFloor;

/**
 internal map

 @return
 */
-(NSString *)ioMapID;

/**
 Internal Floor plan id for Indoor atlas

 @param ioFloor internal floor plan
 @return
 */
-(NSString *)IAFloorPlanID:(int)ioFloor;

/**
 Indoor atlas APi Key

 @return key
 */
-(NSString *)IAAPIapikey;

/**
 Indoor atlas api key secret

 @return secret
 */
-(NSString *)IAAPIapiSecret;

/**
 Convert to virtual coordinate

 @param location gps coordinate
 @return
 */
-(CLLocationCoordinate2D)virtualCoordinate:(CGIndoorMapPoint)location;

/**
 Convert to gps to virtual coordinate

 @param location virtual coordinate
 @return 
 */
-(CLLocationCoordinate2D)geoCoordinateFromVirtual:(CGIndoorMapPoint)location;

/**
 Resizing facor

 @return
 */
-(int)getMapFactor;

/**
 To get the categories data for venue

 @return An array of categories
 */
-(NSArray *)venueCategories;

/**
 To set stores information

 @param stores An array of stores
 */
-(void)setStoreCount:(NSArray *)stores;

/**
 To get name of venue

 @return Returns venue name
 */
-(NSString *)mapname;

/**
 To get category image name

 @param storeid An ID of store
 @return Store category image name
 */
-(NSString *)storeCategoryIcon:(NSString *)storeid;

/**
 To get levels information

 @return An array of levels
 */
-(NSArray *)LevelInformation;

/**
 To get ID's of the floors

 @return An array of loor ID's
 */
-(NSArray *)FloorListIDs;

/**
 To get map center coordinates with level

 @return The center coordinates of map with level
 */
-(CGIndoorMapPoint)mapCenterPoint;

/**
 To get initial zoom loevel of map

 @return THe initial zoom level
 */
-(float) mapInitialZoom;

/**
 To get store labels data

 @return An array of store labels
 */
-(NSArray *)StoreLables;

/**
 To set store labels

 @param listLables An array of stores
 */
-(void)SetStoreLables:(NSArray *)listLables;

/**
 To get Mapbox floor id for floor

 @param ioFloor floor number
 @return Mapbox floor ID
 */
-(NSString *)MapboxFloorPlanID:(int)ioFloor;

/**
 To get Mapbox floor id for floor
 
 @param ioFloor floor number
 @param buildingid building number
 @return Mapbox floor ID
 */
-(NSString *)MapboxFloorPlanID:(int)ioFloor forBuilding:(NSString *) buildingid;


/**
 To fetch Mapbox token

 @return Mapbox token
 */
-(NSString *)MapboxMapToken;

/**
 To get area bounds for venue

 @return area bounds
 */
-(GMSCoordinateBounds *)getAreaBound;

/**
 To get area bounds for venue

 @return area path
 */
-(GMSPath *)getAreaRect;

/**
 To get maximum map zoom level

 @return zoom level
 */
-(float)maxMapZoom;

/**
 To get minimaum map zoom level

 @return zoom level
 */
-(float)minMapZoom;

/**
 TO get leash distance

 @return leash distance
 */
-(int)BackToLeashDistance;

/**
 The value of path diversion

 @return path diversion
 */
-(int)maxPathDiversion;

/**
 Extra setting

 @return Dictionary of settings
 */
-(NSDictionary *)extraSettings;

/**
 To get data of building according to user's location

 @param userLocation user coordinates with floor
 @return a dictionary of building
 */
-(NSDictionary *)getBuildingAtUserLocation:(CGIndoorMapPoint)userLocation;

/**
 To get external floor ID

 @param ioFloor Floor number
 @return an External floor ID
 */
-(int)IAExternalFloorID:(NSString *)ioFloor;

/**
 To get data of building

 @return An array of building
 */
-(NSArray *)buildingList;

/**
 To

 @return BOOL value
 */
-(BOOL) useMapBoxMap;


/**
 Should display google map bellow indoormap or not

 @return true/false
 */
-(BOOL)isLoadGoogleBasemap;

/**
 Display outline for floor

 @param levelCode Level currently display
 @param mapview map view on which area draw
 */
-(void)showOutlineForLevel:(int)levelCode onMap:(GMSMapView *)mapview;

/**
 Capture Default Floor which indoor map to display

 @return Level Nimber
 */
-(int)initializeWithDefaultFloor;

/**
 Intripper Logo location

 @return Position topleft, topright, bottomleft, bottomright
 */
-(NSString *)defaultLogoLocation;

/**
 Promotion Snooze Time

 @return time in minutes
 */
-(int)getPromotionSnoozeTime;//In minutes

/**
 Re-Route CoolDown Time

 @return Time in seconds
 */
-(int)getReRouteCoolDownTime;//In Seconds

-(int)getAutoCenteringTime;//In Seconds

/**
URL From map image to be fetch

 @return Tile URL
 */
-(NSString *)TileServerURL;//Tile server URL

/**
 Rotate map according true heading

 @return True/False
 */
-(BOOL)shouldRotateMapWithHeading;

/**
 Rotate map to true north for user location

 @return True/False
 */
-(BOOL)shouldRotateMapInitially;

/*
 Allow Hybrid map to render on screen
 
 @return True/False
 */
-(BOOL)allowHybridMap;

/*
 Re-route buffer count
 
 @return number of
 */
-(int)maxReroutePathDiversionCount;

/*
 Support Intripper Floor Change
 
 @return Yes/No
 */
-(BOOL)supportIntripperFloorChange;


/**
 Use Intripper logic for floor Detection

 @return Yes/No
 */
-(BOOL)applyIntripperFloorDetection;

/**
 Use Senser for Heading

 @return Yes/No
 */
-(BOOL)useInbuildMagneticsensorForHeading;
/**
 Show Destination event reached
 
 @return X meters
 */
-(int)getDestinationBuffer;

/**
 Color of text on map

 @return color value
 */
-(UIColor *)textColorFromServer;
@end
