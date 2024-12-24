//
//  ClsIsInitial.h
//  GCDFetchFeed
//
//  Created by Ming Dai on 2024/12/24.
//  Copyright © 2024 Starming. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface ClsIsInitial : NSObject


// All Classes
+ (NSArray<NSString *> *)allClasses;

// Initialized Classes
+ (NSArray<NSString *> *)initializedClasses;

// Initialized Classes filter
+ (NSArray<NSString *> *)initializedClassesInArray:(NSArray<NSString *> *)classArray;

@end
NS_ASSUME_NONNULL_END
