//
//  PEXSelectDataManager.h
//  AFJSONRPCClient-iOS10.0
//
//  Created by yulin chi on 2018/11/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PublicEnum.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ApexPanelBtnFunction) {
    ApexPanelBtnFunction_None, //无
    ApexPanelBtnFunction_Circle,//圈选
    ApexPanelBtnFunction_Charts, //对比图
    ApexPanelBtnFunction_Page //定义页面
};

#define PEXSelectDataManagerDidChangeFuncTypeNotification @"PEXSelectDataManagerDidChangeFuncTypeNotification"

@interface PEXSelectDataManager : NSObject
@property (nonatomic, assign) BOOL shouldInteruptAction; /**< 是否截断action而实施圈选 */
@property (nonatomic, assign) ApexPanelBtnFunction funcType; /**<  */
@property (nonatomic, copy, readonly) NSString *VisualizationDomain; /**<  */


+ (instancetype)shareDataSelector;

/**
 控制显示悬浮btn
 */
+ (void)showFuncBtn;


/**
 设置可视化sdk用的域名
 */
+ (void)setVisualizationDomain:(NSString *)VisualizationDomain;

//for cells
+ (void)didChooseCellDataToConfig:(UIView *)cell viewPath:(NSString *)viewPath originViewPath:(nonnull NSString *)originViewPath viewMd5:(NSString*)md5 pageName:(NSString *)pageName listID:(NSString *)listID dataID:(NSString *)dataID;

// for UIControl
+ (void)didChooseDataToConfig:(UIView *)widget dataType:(ApexMoniteDataType)dataType viewPath:(nonnull NSString *)viewPath originViewPath:(nonnull NSString *)originViewPath viewMd5:(NSString*)md5 pageName:(NSString*)PageName extraData:(NSString *)extraPath;

+ (void)toChartsCompare;

+ (void)doneConfigration;
@end

NS_ASSUME_NONNULL_END
