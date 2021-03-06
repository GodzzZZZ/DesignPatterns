//
//  CompositeProtocol.h
//  Composite
//
//  Created by 张冬冬 on 2018/3/27.
//  Copyright © 2018年 张冬冬. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CompositeProtocol <NSObject>
- (void)add:(id<CompositeProtocol>)composite;
- (void)remove:(id<CompositeProtocol>)composite;
- (void)display;
@end
