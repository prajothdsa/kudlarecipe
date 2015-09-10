//
//  ViewController.m
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 01/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import "ViewController.h"
#import "DishesListViewController.h"
#import "AboutAppViewController.h"
#import "TMConstants.h"

@interface ViewController ()
{
    MFMailComposeViewController             *mc;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self retrievePlistData];
    if(kDeviceTypeIpad)
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBgiPad.png"]];
    else
        self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"DosaBg.png"]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (void)retrievePlistData
{
    NSString *filePath = [[NSBundle mainBundle] pathForResource:@"Recipes" ofType:@"plist"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath])
        _dictOfPlistValues = [[NSMutableDictionary alloc] initWithContentsOfFile:filePath];
}

#pragma mark - Table View Delegate/Datasources

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [[_dictOfPlistValues allKeys]count];
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
    NSArray *sortedArray = [[_dictOfPlistValues allKeys] sortedArrayUsingSelector:@selector(localizedCaseInsensitiveCompare:)];
    cell.textLabel.text = sortedArray [indexPath.row];
    [cell.textLabel setFont:[UIFont fontWithName:@"Helvetica-Nueue" size:16.0f]];
    cell.textLabel.textColor = [UIColor whiteColor];
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    cell.contentView.backgroundColor = [UIColor clearColor];
    cell.backgroundColor = [UIColor clearColor];
    tableView.backgroundColor = [UIColor clearColor];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    UIStoryboard *mystoryboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    DishesListViewController *dishController = [mystoryboard instantiateViewControllerWithIdentifier:@"dishesView"];
    dishController.dictOfDishesInCategory = [_dictOfPlistValues valueForKey:[[[tableView cellForRowAtIndexPath:indexPath]textLabel]text]];
    [self presentViewController:dishController animated:NO completion:nil];
}

- (IBAction)btnRequestRecipeClicked:(id)sender
{
    /*Form the email format based on the type of messages*/
    mc = [[MFMailComposeViewController alloc] init];
    mc.mailComposeDelegate = self;
    
    if ([MFMailComposeViewController canSendMail])
    {
        [mc setSubject:@"Recipe Request"];
        [mc setMessageBody:@"Dear Kudla Recipe,\n" isHTML:NO];
        [mc setToRecipients:[NSArray arrayWithObject:@"prajothdsa@gmail.com"]];
        [TMSharedLoadingActivity displayLoadingViewinTargertView:self.view withMessage:kLoading];
        [self presentViewController:mc animated:YES completion:^{
            [TMSharedLoadingActivity dismissLoadingViewinTargertView:self.view];
        }];
    }
    else
        [PopUpUtility showPopUpwithTitle:NSLocalizedString(ERROR_ALERT_TITLE, EMPTY_STR) message:NSLocalizedString(EMAIL_NOT_CONFIGURED_ERROR, EMPTY_STR)];
}

- (void) mailComposeController:(MFMailComposeViewController *)controller didFinishWithResult:(MFMailComposeResult)result error:(NSError *)error
{
    switch (result)
    {
        case MFMailComposeResultCancelled:
            NSLog(@"Mail cancelled");
            break;
        case MFMailComposeResultSaved:
            NSLog(@"Mail saved");
            break;
        case MFMailComposeResultSent: {
            NSLog(@"Mail sent");
            break;
        }
        case MFMailComposeResultFailed:
            NSLog(@"Mail sent failure: %@", [error localizedDescription]);
            break;
    }
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (IBAction)btnAboutTheAppClicked:(id)sender
{
    UIStoryboard *mystoryboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    AboutAppViewController *aboutController = [mystoryboard instantiateViewControllerWithIdentifier:@"aboutView"];
    [self presentViewController:aboutController animated:NO completion:nil];
}
@end
