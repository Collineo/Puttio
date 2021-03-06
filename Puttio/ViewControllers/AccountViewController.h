
//
//  AccountViewController.h
//  Puttio
//
//  Created by orta therox on 24/06/2012.
//  Copyright (c) 2012 ortatherox.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ORSimpleProgress, DCRoundSwitch;
@interface AccountViewController : UIViewController

@property (weak, nonatomic) IBOutlet ORSimpleProgress *accountSpaceLeftProgress;
@property (weak, nonatomic) IBOutlet UILabel *searchInfoLabel;
@property (weak, nonatomic) IBOutlet UILabel *welcomeAccountLabel;
@property (strong, nonatomic) IBOutlet UIView *loggedOutMessageView;
@property (weak, nonatomic) IBOutlet DCRoundSwitch *creativeCommonsSwitch;
@property (weak, nonatomic) IBOutlet UILabel *percentageLabel;

@property (weak, nonatomic) IBOutlet UILabel *accountSpaceLabel;

- (IBAction)logOutTapped:(id)sender;
- (IBAction)addToTwitter:(id)sender;
- (IBAction)githubTapped:(id)sender;
- (IBAction)ortaTapped:(id)sender;
- (IBAction)feedbackTapped:(id)sender;

@property (weak, nonatomic) IBOutlet UIView *ortaInfoBackground;
@property (weak, nonatomic) IBOutlet UILabel *ortaInfoTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *ortaInfoBodyLAbel;
- (IBAction)dbgrandiTapped:(id)sender;
- (IBAction)putIOTapped:(id)sender;

@end
