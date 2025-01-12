//
//  SMCallTrace.h
//  HomePageTest
//
//  Created by DaiMing on 2017/7/8.
//  Copyright © 2017年 DiDi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMCallTraceCore.h"


@interface SMCallTrace : NSObject
+ (void)start; // Start record
+ (void)startWithMaxDepth:(int)depth;
+ (void)startWithMinCost:(double)ms;
+ (void)startWithMaxDepth:(int)depth minCost:(double)ms;
+ (void)stop; // Stop record
+ (void)save; // Save and print record, if not short time use saveAndClean.
+ (void)stopSaveAndClean; // Stop save, print停止保存打印并进行内存清理
//int smRebindSymbols(struct smRebinding rebindings[], size_t rebindings_nel);

@end
