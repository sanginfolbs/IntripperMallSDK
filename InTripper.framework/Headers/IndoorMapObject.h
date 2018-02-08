//
//  gpsIndoorObject.h
//  Intripper
//
//  Created by Sanginfo on 20/01/16.
//  Copyright © 2017-18 InTripper. All rights reserved.
//

#ifndef IndoorMapObject_h
#define IndoorMapObject_h

#include <stdio.h>
#include <stdbool.h>
struct CGIndoorMapPoint {
    float lat;
    float lng;
    int floor;
};
typedef struct CGIndoorMapPoint CGIndoorMapPoint;

CGIndoorMapPoint CGMakeMapPoint(float xlat,float ylng, int f);
CGIndoorMapPoint CGMakeMapPointEmpty(void);
bool CGIndoorMapPointIsEmpty(CGIndoorMapPoint map);
bool CGIndoorMapPointIsEqual(CGIndoorMapPoint map1,CGIndoorMapPoint map2);

#endif /* IndoorMapObject_h */
