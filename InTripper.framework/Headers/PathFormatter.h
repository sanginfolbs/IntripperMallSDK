/*!
  PathFormatter.h
  Intripper

  Created by InTripper on 03/02/19.
  Copyright © 2019-18 InTripper. All rights reserved.
*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/**
 *  Describes the drawing style of path.
 */
@interface PathFormatter : NSObject{

}
/**
 *  Sets the color of the path.
 */
@property (nonatomic,retain) UIColor *pathColor;

/**
 *  Sets the color of the path which already covered.
 */
@property (nonatomic,retain) UIColor *pathPastColor;

/**
 *  Sets the thickness of the path.
 */
@property (nonatomic,retain) NSNumber *pathWidth;
/**
 *  Sets the border color for the path.
 */
@property (nonatomic,retain) UIColor *borderColor;
/**
 *  Sets the border thickness for the path.
 */
@property (nonatomic,retain) NSNumber *borderWidth;
/**
 *  Sets the color of the selected path.
 */
@property (nonatomic,retain) UIColor *selectedPathColor;

/**
 *  Sets the width of the selected path.
 */
@property (nonatomic,retain) NSNumber *selectedPathWidth;

@end
