//
//  IQEngUIIDCardScanViewController.h
//  自定义相机
//  相机例子
//  Created by 力王 on 16/11/28.
//  Copyright © 2016年 Herson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IQEngUIPhotoSessionView.h"

@interface IQEngUIIDCardScanViewController : UIViewController
@property(nonatomic, strong) IQEngUIPhotoSessionView *sessionView;
//截取的尺寸
@property(nonatomic, readonly) CGRect effectiveRect;
//是否写入本地
@property (nonatomic, assign) BOOL shouldWriteToSavedPhotos;

@property(nonatomic, strong) void (^whenFinsh)(UIImage *);
@end
