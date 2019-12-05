//
//  PublicEnum.h
//  ApexDataCollectVisualSDK
//
//  Created by yulin chi on 2018/12/25.
//  Copyright © 2018 yulin chi. All rights reserved.
//

#ifndef PublicEnum_h
#define PublicEnum_h

#define baseUrl @"http://devtest.chinapex.com.cn/mobile-sdk" //公司测试

typedef NS_ENUM(NSUInteger, ApexMoniteDataType) {
    ApexMoniteDataType_UIControl,//按钮/手势
    ApexMoniteDataType_ListCell,//cell/item
    ApexMoniteDataType_ViewPage //视图页面
};
#endif /* PublicEnum_h */
