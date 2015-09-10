//
//  TMConstants.h
//  TeleMedicine
//
//  Created by Prajoth Antonio D on 4/9/15.
//  Copyright (c) 2015 com.techendeavour.telemedicine. All rights reserved.
//
#import "AppDelegate.h"
#import "PopUpUtility.h"

#define APP_DELEGATE  (AppDelegate *)[[UIApplication sharedApplication] delegate]


//--------------------------Device Type Constants-------------------------------
#define kDeviceTypeIphone               [[UIDevice currentDevice]userInterfaceIdiom]==UIUserInterfaceIdiomPhone
#define kDeviceTypeIpad                 [[UIDevice currentDevice]userInterfaceIdiom]==UIUserInterfaceIdiomPad
#define IS_IPHONE                           (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPHONE_5                         (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0)
#define IS_IPHONE_6                         (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0)
#define IS_IPHONE_6_PLUS                    (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0)
#define IS_IOS_8_OR_LATER                   ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define IS_STANDARD_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0  && IS_IOS_8_OR_LATER && [UIScreen mainScreen].nativeScale == [UIScreen mainScreen].scale)
#define IS_ZOOMED_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0 && IS_IOS_8_OR_LATER && [UIScreen mainScreen].nativeScale > [UIScreen mainScreen].scale)
#define IS_STANDARD_IPHONE_6_PLUS (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0)
#define IS_ZOOMED_IPHONE_6_PLUS (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0 && IS_IOS_8_OR_LATER && [UIScreen mainScreen].nativeScale < [UIScreen mainScreen].scale)


#define kApexDeviceOrientationIsPortrait    [TMUtilities deviceOrientationIsPortrait:([[UIApplication sharedApplication] statusBarOrientation])]
#define kApexDeviceOrientationIsLandscape   [TMUtilities deviceOrientationIsLandscape:([[UIApplication sharedApplication] statusBarOrientation])]


#define kLoading                        @"Loading..."
#define EMAIL_NOT_CONFIGURED_ERROR                  @"EmailNotConfiguredMessage"
#define EMAIL_SUBJECT                               @"EmailSubject"
#define ERROR_ALERT_TITLE                           @"ErrorTitle"






