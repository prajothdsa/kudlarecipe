/*
 TMLoadingScreen.h
 EMCApplication
 
 Created by Ashwin Kumar on 07/23/13.
 Copyright (c) 2013 Endeavour Software Technologies. All rights reserved.
 
 Modification Date		Modified By		Comments
 =================		===========		=================================================
 */
#import <UIKit/UIKit.h>

@interface TMSpinBackgroundView : UIView

@end

@interface TMLoadingScreen : UIView
{
	UIActivityIndicatorView		*mSpinner;
	TMSpinBackgroundView		*mSpinBackground;
	UILabel						*mLoadingLabel;
	id   requestTarget;
}

- (id)initWithFrame:(CGRect)frame withMessage:(NSString*)aMessage;
-(void)dischargeLoadingScreen;
@end