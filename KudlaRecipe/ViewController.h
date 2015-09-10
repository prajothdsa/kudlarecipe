//
//  ViewController.h
//  KudlaRecipe
//
//  Created by Prajoth Antonio D on 01/09/15.
//  Copyright (c) 2015 PADStudios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "TMSharedLoadingActivity.h"
#import "PopUpUtility.h"
#import "TMConstants.h"

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblCategories;
@property (nonatomic, retain) NSMutableDictionary *dictOfPlistValues;
@property (weak, nonatomic) IBOutlet UIButton *requestRecipeClicked;
- (IBAction)btnRequestRecipeClicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *btnAboutAppClicked;
- (IBAction)btnAboutTheAppClicked:(id)sender;

@end

