//
//  DishesListViewController.h
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 01/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DishesListViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic, retain) NSMutableDictionary *dictOfDishesInCategory;
@property (weak, nonatomic) IBOutlet UITableView *tblDishes;
@property (weak, nonatomic) IBOutlet UINavigationBar *navBar;
- (IBAction)backButtonPressed:(id)sender;

@end
