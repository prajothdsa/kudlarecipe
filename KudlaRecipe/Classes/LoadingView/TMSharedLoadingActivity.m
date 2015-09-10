//
//  TMSharedLoadingActivity.m
//  TeleMedicine
//
//  Created by Soujanya Patil on 2/26/15.
//  Copyright (c) 2015 com.techendeavour.telemedicine. All rights reserved.
//

#import "TMSharedLoadingActivity.h"
#import "TMLoadingScreen.h"
#import "AppDelegate.h"
@implementation TMSharedLoadingActivity
/*
 * Method Name	: dismissLoadingViewinTargertView:
 * Description	: This method removes the progress indicator
 * Parameters	: inView
 * Return value	: void
 */
+ (void)dismissLoadingViewinTargertViewForTargetClass:(id)inView
{
    TMLoadingScreen *loadingScreen = (TMLoadingScreen*)[inView viewWithTag:121213];
    //    [loadingScreen enalbeControls];
    [loadingScreen removeFromSuperview];
}


/*
 * Method Name	: displayLoadingViewinTargertView:
 * Description	: This method creates the loadig screen
 * Parameters	: inView,message
 * Return value	: void
 */
+ (void)displayLoadingViewinTargertView:(UIView*)inView withMessage:(NSString*)inString
{
    //[self dismissLoadingViewinTargertView:inView];
    UIView *processingView = [inView viewWithTag:121212];
    
    if (processingView) {
        return;
    }
    
    
    TMLoadingScreen *loadingScreen= [[TMLoadingScreen alloc] initWithFrame:CGRectMake(0, 0, inView.frame.size.width, inView.frame.size.height+40) withMessage:inString];
    
    loadingScreen.tag = 121212;
    loadingScreen.autoresizingMask=UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
    [inView addSubview:loadingScreen];
    
}
/*
  * Method Name	: dismissLoadingViewinTargertView:
  * Description	: This method removes the progress indicator
  * Parameters	: inView
  * Return value	: void
  */
+ (void)dismissLoadingViewinTargertView:(UIView*)inView
{
    TMLoadingScreen *loadingScreen = (TMLoadingScreen*)[inView viewWithTag:121212];
    if(loadingScreen){
        
        [loadingScreen removeFromSuperview];
    }
    
}

@end
