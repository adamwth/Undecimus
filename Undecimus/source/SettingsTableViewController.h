//
//  SettingsTableViewController.h
//  Undecimus
//
//  Created by Pwn20wnd on 9/14/18.
//  Copyright © 2018 - 2019 Pwn20wnd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "common.h"
#import "utils.h"

@interface SettingsTableViewController : UITableViewController <UITextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
@property (weak, nonatomic) IBOutlet UISwitch *tweakInjectionSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *loadDaemonsSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *dumpAPTicketSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *refreshIconCacheSwitch;
@property (weak, nonatomic) IBOutlet UITextField *bootNonceTextField;
@property (weak, nonatomic) IBOutlet UITextField *kernelExploitTextField;
@property (nonatomic) UIPickerView *kernelExploitPickerView;
@property (nonatomic) NSMutableArray *exploitPickerArray;
@property (nonatomic) NSMutableDictionary *availableExploits;
@property (nonatomic) UIToolbar *exploitPickerToolbar;
@property (nonatomic) BOOL isExploitPicking;
@property (weak, nonatomic) IBOutlet UILabel *restartLabel;
@property (weak, nonatomic) IBOutlet UISwitch *disableAutoUpdatesSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *disableAppRevokesSwitch;
@property (nonatomic) UITapGestureRecognizer *tap;
@property (weak, nonatomic) IBOutlet UILabel *shareDiagnosticsDataLabel;
@property (weak, nonatomic) IBOutlet UILabel *openCydiaLabel;
@property (weak, nonatomic) IBOutlet UITextField *expiryLabel;
@property (weak, nonatomic) IBOutlet UISwitch *overwriteBootNonceSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *exportKernelTaskPortSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *restoreRootFSSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *installCydiaSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *installSSHSwitch;
@property (weak, nonatomic) IBOutlet UITextField *uptimeLabel;
@property (weak, nonatomic) IBOutlet UISwitch *increaseMemoryLimitSwitch;
@property (weak, nonatomic) IBOutlet UITextField *ecidLabel;
@property (weak, nonatomic) IBOutlet UISwitch *reloadSystemDaemonsSwitch;
@property (weak, nonatomic) IBOutlet UILabel *restartSpringBoardLabel;
@property (weak, nonatomic) IBOutlet UISwitch *hideLogWindowSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *resetCydiaCacheSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *sshOnlySwitch;
@property (weak, nonatomic) IBOutlet UISwitch *enableGetTaskAllowSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *setCSDebuggedSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *autoRespringSwitch;
@property (weak, nonatomic) IBOutlet UILabel *openGithubLabel;
@property (weak, nonatomic) IBOutlet UILabel *autoSelectExploitLabel;
@property (weak, nonatomic) IBOutlet UILabel *cleanDiagsLabel;
@property (weak, nonatomic) IBOutlet UILabel *resetAppPrefsLabel;
@property (weak, nonatomic) IBOutlet UILabel *checkForUpdateLabel;
@property (weak, nonatomic) IBOutlet UILabel *specialThanksLabel;
@property (weak, nonatomic) IBOutlet UILabel *tweakInjectionLabel;
@property (weak, nonatomic) IBOutlet UILabel *loadDaemonsLabel;
@property (weak, nonatomic) IBOutlet UILabel *dumpAPTicketLabel;
@property (weak, nonatomic) IBOutlet UILabel *refreshIconCacheLabel;
@property (weak, nonatomic) IBOutlet UILabel *disableAutoUpdatesLabel;
@property (weak, nonatomic) IBOutlet UILabel *disableAppRevokesLabel;
@property (weak, nonatomic) IBOutlet UILabel *overwriteBootNonceLabel;
@property (weak, nonatomic) IBOutlet UILabel *exportKernelTaskPortLabel;
@property (weak, nonatomic) IBOutlet UILabel *restoreRootFSLabel;
@property (weak, nonatomic) IBOutlet UILabel *installCydiaLabel;
@property (weak, nonatomic) IBOutlet UILabel *installSSHLabel;
@property (weak, nonatomic) IBOutlet UILabel *increaseMemoryLimitLabel;
@property (weak, nonatomic) IBOutlet UILabel *reloadSystemDaemonsLabel;
@property (weak, nonatomic) IBOutlet UILabel *hideLogWindowLabel;
@property (weak, nonatomic) IBOutlet UILabel *resetCydiaCacheLabel;
@property (weak, nonatomic) IBOutlet UILabel *sshOnlyLabel;
@property (weak, nonatomic) IBOutlet UILabel *enableGetTaskAllowLabel;
@property (weak, nonatomic) IBOutlet UILabel *setCSDebuggedLabel;
@property (weak, nonatomic) IBOutlet UILabel *autoRespringLabel;
@property (weak, nonatomic) IBOutlet UILabel *kernelExploitLabel;
@property (weak, nonatomic) IBOutlet UIButton *bootNonceButton;
@property (weak, nonatomic) IBOutlet UIButton *ecidDarkModeButton;
@property (weak, nonatomic) IBOutlet UILabel *expiryDarkModeLabel;
@property (weak, nonatomic) IBOutlet UILabel *upTimeLabel;

+ (NSDictionary *)provisioningProfileAtPath:(NSString *)path;

@end

