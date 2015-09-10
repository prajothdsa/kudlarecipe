//
//  AboutAppViewController.h
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 02/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutAppViewController : UIViewController
@property (weak, nonatomic) IBOutlet UINavigationBar *navBar;
@property (weak, nonatomic) IBOutlet UITextView *aboutTextView;
- (IBAction)backButtonPressed:(id)sender;

@end
