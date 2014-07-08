/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class NSString, NSMutableDictionary, PSSpecifier, NSArray, NSMutableArray, ACAccount;

@interface ACUIDataclassConfigurationViewController : ACUIViewController  {
    bool_forceMailSetup;
    NSMutableArray *_dirtyDataclassCells;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    bool_isMergingSyncData;
    PSSpecifier *_deleteButtonSpecifier;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    bool_didShowDataclassActionPickerDuringRemoval;
    bool_firstTimeSetup;
    bool_shouldShowDeleteAccountButton;
    bool_shouldEnableDeleteAccountButton;
    bool_shouldEnableAccountSummaryCell;
    bool_isMailSetupForced;
    NSArray *_preEnabledDataclasses;
    ACAccount *_account;
    PSSpecifier *_dataclassGroupSpecifier;
}

@property(getter=isFirstTimeSetup) bool firstTimeSetup;
@property(copy) NSArray * preEnabledDataclasses;
@property(retain) ACAccount * account;
@property PSSpecifier * dataclassGroupSpecifier;
@property(readonly) PSSpecifier * deleteButtonSpecifier;
@property bool shouldShowDeleteAccountButton;
@property bool shouldEnableDeleteAccountButton;
@property bool shouldEnableAccountSummaryCell;
@property bool isMailSetupForced;

+ (bool)shouldPresentAsModalSheet;

- (void)setIsMailSetupForced:(bool)arg1;
- (id)deleteButtonSpecifier;
- (void)appendDeleteAccountButton;
- (void)setDataclass:(id)arg1 enabled:(bool)arg2;
- (void)reloadDynamicSpecifiersWithAnimation:(bool)arg1;
- (bool)isMailSetupForced;
- (long long)deleteButtonIndex;
- (id)messageForAccountDeletionProgressUI;
- (bool)_promptUserToConfirmAccountDeletion;
- (bool)_isShowingDeleteAccountButton;
- (void)_notifyRootControllerOfAccountSetupCompletion;
- (bool)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (bool)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (void)_showDelayedActivityInProgressUIWithMessage:(id)arg1;
- (id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(bool)arg2;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (void)resetDirtyDataclassSwitchCells;
- (bool)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (void)_setDataclass:(id)arg1 enabled:(bool)arg2;
- (void)_markDataclassSwitchCellAsDirty:(id)arg1;
- (id)preEnabledDataclasses;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)specifierForDataclass:(id)arg1;
- (bool)shouldShowSpecifierForDataclass:(id)arg1;
- (id)dataclassGroupSpecifier;
- (void)setDataclassGroupSpecifier:(id)arg1;
- (id)_orderDataclassList:(id)arg1;
- (bool)shouldEnableAccountSummaryCell;
- (id)valueForAccountSummaryCell;
- (Class)accountInfoControllerClass;
- (bool)shouldEnableDeleteAccountButton;
- (void)deleteButtonTapped:(id)arg1;
- (id)titleForDeleteButton;
- (bool)shouldShowDeleteAccountButton;
- (id)otherSpecifiers;
- (bool)shouldShowOtherSpecifiersDuringFirstSetup;
- (id)_specifiersForDataclasses:(id)arg1;
- (id)displayedAccountTypeString;
- (id)specifierForAccountSummaryCell;
- (bool)shouldVerifyBeforeAccountSave;
- (id)displayedShortAccountTypeString;
- (id)_navigationTitle;
- (bool)isFirstTimeSetup;
- (void)setShouldShowDeleteAccountButton:(bool)arg1;
- (void)setShouldEnableDeleteAccountButton:(bool)arg1;
- (void)setShouldEnableAccountSummaryCell:(bool)arg1;
- (void)setPreEnabledDataclasses:(id)arg1;
- (void)forceMailSetup;
- (void)setFirstTimeSetup:(bool)arg1;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (bool)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (id)specifiers;
- (id)_accountIdentifier;
- (void)doneButtonTapped:(id)arg1;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end