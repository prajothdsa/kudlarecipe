//
//  DishesListViewController.m
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 01/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import "DishesListViewController.h"
#import "RecipeViewController.h"
#import "TMConstants.h"

@interface DishesListViewController ()

@end

@implementation DishesListViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [_navBar setBackgroundImage:[UIImage new] forBarMetrics:UIBarMetricsDefault];
    [_navBar setShadowImage:[UIImage new]];
    [_navBar setTranslucent:YES];
    if(kDeviceTypeIpad)
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBgiPad.png"]];
    else
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBg.png"]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table View Delegate/Datasources

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    tableView.backgroundColor = [UIColor clearColor];
    if ([[_dictOfDishesInCategory allKeys]count] < 1)
    {
        [_navBar.topItem setTitle:@"Dishes Coming Soon!"];
        tableView.hidden = YES;
    }
    return [[_dictOfDishesInCategory allKeys]count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"categoriesCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                      reuseIdentifier:CellIdentifier];
    }
    NSArray *sortedArray = [[_dictOfDishesInCategory allKeys] sortedArrayUsingSelector:@selector(localizedCaseInsensitiveCompare:)];
    cell.textLabel.text = sortedArray [indexPath.row];
    [cell.textLabel setFont:[UIFont fontWithName:@"Helvetica-Nueue" size:16.0f]];
    cell.textLabel.textColor = [UIColor whiteColor];
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    cell.contentView.backgroundColor = [UIColor clearColor];
    cell.backgroundColor = [UIColor clearColor];
//    tableView.backgroundColor = [UIColor clearColor];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    UIStoryboard *mystoryboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    RecipeViewController *recipeController = [mystoryboard instantiateViewControllerWithIdentifier:@"recipeView"];
    NSString *dishName = [[[tableView cellForRowAtIndexPath:indexPath]textLabel]text];
    recipeController.recipeText = [_dictOfDishesInCategory valueForKey:dishName];
    recipeController.dishName = dishName;
    [self presentViewController:recipeController animated:NO completion:nil];
}

- (IBAction)backButtonPressed:(id)sender {
    [self dismissViewControllerAnimated:NO completion:nil];
}

@end
