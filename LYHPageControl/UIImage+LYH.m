//
//  UIImage+LYH.m
//  WeiBo
//
//  Created by 厉煜寰 on 15/10/23.
//  Copyright © 2015年 SXT. All rights reserved.
//

#import "UIImage+LYH.h"

@implementation UIImage (LYH)

+ (UIImage *)resizeImageWithName:(NSString *)name
{
    return [UIImage resizeImageWithName:name left:0.5 top:0.5];
}
+ (UIImage *)resizeImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top
{
    /** 将图片拉伸 */
    UIImage *image = [UIImage imageNamed:name];
    // 拉伸图片的方法
    UIImage *resizeImage = [image stretchableImageWithLeftCapWidth:image.size.width * left topCapHeight:image.size.height * top];
    return resizeImage;
}
@end
