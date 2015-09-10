//
//  RecipeViewController.h
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 01/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UINavigationBar *navBar;
- (IBAction)backButtonPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UITextView *recipeTextView;
@property (strong, nonatomic) NSString *recipeText;
@property (strong, nonatomic) NSString *dishName;
@end
