//
//  Observer.h
//  Observer
//
//  Created by 张冬冬 on 2018/3/15.
//  Copyright © 2018年 张冬冬. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol Observer <NSObject>
- (void)updateTemperature:(CGFloat)temperature humidity:(CGFloat)humidity pressure:(CGFloat)pressure;
@end
