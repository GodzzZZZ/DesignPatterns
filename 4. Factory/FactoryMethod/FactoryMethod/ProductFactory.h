//
//  ProductFactory.h
//  FactoryMethod
//
//  Created by pipelining on 2018/3/17.
//  Copyright © 2018年 GodzzZZZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstructProduct.h"
@interface ProductFactory : NSObject
- (AbstructProduct *)createProduct;
@end