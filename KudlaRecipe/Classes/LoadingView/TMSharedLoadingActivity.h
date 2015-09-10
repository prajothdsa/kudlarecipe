//
//  TMSharedLoadingActivityy.h
//  DFCMobileWallet
//
//  Created by Ashwin Kuamr on 2/26/15.
//  Copyright (c) 2015 DFC Global Corp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TMSharedLoadingActivity : NSObject
+ (void)displayLoadingViewinTargertView:(id)inView withMessage:(NSString*)inString;
+ (void)dismissLoadingViewinTargertView:(id)inView;
+ (void)dismissLoadingViewinTargertViewForTargetClass:(id)inView;
@end
