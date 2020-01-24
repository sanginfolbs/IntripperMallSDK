//
//  blackInfoWindow.h
//  Intripper
//
//  Created by InTripper on 30/12/19.
//  Copyright © 2020 InTripper. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Marker info window
 */
@interface blackInfoWindow : UIViewController

/**
 image at left portion
 */
@property (strong, nonatomic) IBOutlet UIImageView *imgLeft;

/**
 image at right portion
 */
@property (strong, nonatomic) IBOutlet UIImageView *imgRight;

/**
 Data to display

 @param data data to string
 */
-(void)setText:(NSString *)data;
@end
