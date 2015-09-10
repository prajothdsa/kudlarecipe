//
//  PopUpUtility.m
//  Appointments
//
//  Created by Dinesh A. Kumar on 4/2/15.
//  Copyright (c) 2015 com.techendeavour.telemedicine. All rights reserved.
//

#import "PopUpUtility.h"
#import <UIKit/UIKit.h>

@implementation PopUpUtility

+ (void)showPopUpwithTitle:(NSString*)title message:(NSString*)message
{
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:title message:message delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK", nil];
    [alertView show];
}

@end
