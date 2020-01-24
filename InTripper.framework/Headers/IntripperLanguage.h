//
//  IntripperLanguage.h
//  Intripper
//
//  Created by apple on 22/08/19.
//  Copyright © 2020 InTripper. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IntripperLanguage : NSObject

/**
 Language service
 
 @return return language service
 */
+ (IntripperLanguage *)instance;

/**
 set local for language service
 
 @param mapid mapref
 @param locallanguage lnaguage local
 */
-(void)setNewLocal:(int)mapid Local:(NSString *)locallanguage;

/**
 Translate word into langiage

 @param word word in english
 @return in local language
 */
-(NSString *)translate:(NSString *)word;

@end
