//
//  LYHPageControlHorizontal.h
//  LYHPagecontrol
//
//  Created by 厉煜寰 on 15/11/10.
//  Copyright © 2015年 SXT. All rights reserved.
//  实现水平方向的视图

#import "LYHBasicPageControl.h"
#import "LYHPageControlConst.h"

@interface LYHPageControlHorizontal : LYHBasicPageControl
/**
 *  pageControl的类型，默认为Default
 */
@property (nonatomic, assign, readonly) LYHPageControlHorizontalTpye styel;
/**
 *  快速创建一个默认风格的pageControl
 */
+ (instancetype)pageControlHorizontal;
/**
 *  设置风格，只能设置一次
 */
- (instancetype)initWithStyel:(LYHPageControlHorizontalTpye)styel;
@end
