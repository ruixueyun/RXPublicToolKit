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

/**
 * 请求相册权限
 * @note 首次调用会拉起授权弹框
 * @note 使用该功能需要在 info.plist 中添加 Privacy - Photo Library Usage Description 相册权限说明
 */
- (void)isCanVisitPhotoLibrary:(void(^)(BOOL result))result;

/**
 * 保存图片到相册
 * @param img 类型支持 UIImage/NSdata（图片二进制）/NSString（图片url或本地路径）
 */
- (void)saveImage:(id)img
         complete:(void(^)(BOOL result))complete;

/**
 * 保存视频到相册
 * @param video 图片url或本地路径
 */
- (void)saveVideo:(NSString *)video
         complete:(void(^)(BOOL result))complete;

@end

NS_ASSUME_NONNULL_END
