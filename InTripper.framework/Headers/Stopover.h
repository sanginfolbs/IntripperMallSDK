//
//  Stopover.h
//  Intripper
//
//  Created by apple on 06/01/20.
//  Copyright © 2020 Intripper. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IndoorMapObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface Stopover : NSObject

@property (nonatomic,retain) NSString *title;
@property (readwrite) CGIndoorMapPoint mapPoint;
@end

NS_ASSUME_NONNULL_END
