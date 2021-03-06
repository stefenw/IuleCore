//
//  UIButton+LYPosition.h
//  LYProject
//
//  Created by mac on 2019/9/16.
//  Copyright © 2019 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LYButtonEdgeInsetsStyle) {
    LYButtonEdgeInsetsStyleTop, // image在上，label在下
    LYButtonEdgeInsetsStyleLeft, // image在左，label在右
    LYButtonEdgeInsetsStyleBottom, // image在下，label在上
    LYButtonEdgeInsetsStyleRight // image在右，label在左
};

@interface UIButton (LYPosition)

+ (UIButton *)ly_buttonWithTitle:(NSString *)title titleColor:(NSString *)titleColor font:(UIFont *)font;
+ (UIButton *)ly_buttonWithImage:(NSString *)image;

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)ly_layoutButtonWithEdgeInsetsStyle:(LYButtonEdgeInsetsStyle)style
                           imageTitleSpace:(CGFloat)space;

@end

NS_ASSUME_NONNULL_END
