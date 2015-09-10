//
//  TMLoadingView.m
//  TeleMedicine
//
//  Created by Prajoth Antonio D on 05/03/15.
//  Copyright (c) 2015 com.techendeavour.telemedicine. All rights reserved.
//

#import "TMLoadingView.h"

@interface TMLoadingView()
{
    UIActivityIndicatorView *activityIndicator;
}
@end

@implementation TMLoadingView
-(void)showLoadingScreen
{
//    ShowNetworkActivityIndicator();
    [self setBackgroundColor:[UIColor blackColor]];
    [self setAlpha:0.6];
    activityIndicator = [[UIActivityIndicatorView alloc]initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhite];
    activityIndicator.frame = CGRectMake(0.0, 0.0, 40.0, 40.0);
    activityIndicator.autoresizingMask = UIViewAutoresizingFlexibleTopMargin|UIViewAutoresizingFlexibleBottomMargin|UIViewAutoresizingFlexibleLeftMargin|UIViewAutoresizingFlexibleRightMargin;
    self.autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
    activityIndicator.center = self.center;
    
    [self addSubview: activityIndicator];
    [activityIndicator startAnimating];
}

-(void)hideLoadingScreen
{
//    HideNetworkActivityIndicator();
    [activityIndicator stopAnimating];
    [activityIndicator removeFromSuperview];
    activityIndicator = nil;
    [self removeFromSuperview];
    
}
@end
