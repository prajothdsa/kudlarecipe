//
//  RecipeViewController.m
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 01/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import "RecipeViewController.h"
#import "TMConstants.h"

@interface RecipeViewController ()

@end

@implementation RecipeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [_navBar setBackgroundImage:[UIImage new] forBarMetrics:UIBarMetricsDefault];
    [_navBar setShadowImage:[UIImage new]];
    [_navBar setTranslucent:YES];
    if(kDeviceTypeIpad)
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBgiPad.png"]];
    else
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBg.png"]];
    [_recipeTextView setText:_recipeText];
    [_recipeTextView setContentOffset: CGPointMake(0,-220) animated:NO];
    [_navBar.topItem setTitle:_dishName];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (IBAction)backButtonPressed:(id)sender {
    [self dismissViewControllerAnimated:NO completion:nil];
}

@end
