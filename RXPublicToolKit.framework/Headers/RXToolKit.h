//
//  RXToolKit.h
//  RXPublicToolKit
//
//  Created by 陈汉 on 2022/9/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXToolKit : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 获取userAgent
 */
- (NSString *)getUserAgent;

/**
 * 跳转到app设置页面
 */
+ (void)jumpAppSetting;

@end

NS_ASSUME_NONNULL_END
