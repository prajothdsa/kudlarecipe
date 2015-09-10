//
//  AboutAppViewController.m
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 02/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import "AboutAppViewController.h"
#import "TMConstants.h"

@interface AboutAppViewController ()

@end

@implementation AboutAppViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [_navBar setBackgroundImage:[UIImage new] forBarMetrics:UIBarMetricsDefault];
    [_navBar setShadowImage:[UIImage new]];
    [_navBar setTranslucent:YES];
    if(kDeviceTypeIpad)
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBgiPad.png"]];
    else
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBg.png"]];
    [_aboutTextView setContentOffset: CGPointMake(0,-220) animated:NO];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (IBAction)backButtonPressed:(id)sender {
    [self dismissViewControllerAnimated:NO completion:nil];
}
@end
