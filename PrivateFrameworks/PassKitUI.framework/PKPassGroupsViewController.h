/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassGroupsViewController : UIViewController <PKCodeAcquisitionDelegate, PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, PKPassPersonalizationViewControllerDelegate, PKPaymentServiceDelegate, UIScrollViewDelegate> {
    NSTimer * _allowDimmingTimer;
    BOOL  _backgroundMode;
    NSMutableArray * _blocksQueuedForUpdateCompletion;
    PKPassGroupStackView * _groupStackView;
    PKGroupsController * _groupsController;
    BOOL  _handleFieldDetection;
    unsigned int  _modalCardIndex;
    NSTimer * _passViewedNotificationTimer;
    BOOL  _passesAreOutdated;
    PKPaymentService * _paymentService;
    int  _presentationState;
    BOOL  _reloadingPasses;
    UIImageView * _statusBarGradient;
    unsigned int  _suppressedContent;
    BOOL  _viewAppeared;
    BOOL  _viewAppearedBefore;
    BOOL  _welcomeStateEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) PKPassGroupStackView *groupStackView;
@property BOOL handleFieldDetection;
@property (readonly) unsigned int hash;
@property BOOL passesAreOutdated;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int suppressedContent;
@property (getter=isWelcomeStateEnabled, nonatomic) BOOL welcomeStateEnabled;

+ (void)beginSuppressingFooter;
+ (void)beginTrackingAction;
+ (void)endSuppressingFooter;
+ (void)endTrackingAction;
+ (BOOL)isPerformingAction;

- (void).cxx_destruct;
- (void)_applyPresentationState;
- (void)_clearPassViewedNotificationTimer;
- (void)_dismissPresentedVCsWithRequirements:(unsigned int)arg1 performAction:(id /* block */)arg2;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_handleNotifyToken:(int)arg1;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)_passPendingActivationToPresent;
- (void)_passViewedNotificationTimerFired;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned int)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentWithUpdatedPasses:(id /* block */)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_startPassViewedNotificationTimer;
- (void)_updateFooterSupression;
- (void)_updateStatusBarGradientOpacity:(BOOL)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)allowIdleTimer;
- (void)cardsChanged:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAddPass:(id)arg2;
- (void)codeAcquisitionController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)codeAcquisitionController:(id)arg1 willAddPass:(id)arg2;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)groupAtIndex:(unsigned int)arg1;
- (id)groupStackView;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(int)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned int)arg2;
- (BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned int)arg2;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned int)arg2;
- (void)groupStackView:(id)arg1 transitioningToState:(int)arg2 animated:(BOOL)arg3;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (BOOL)groupStackViewShouldAllowReordering:(id)arg1;
- (BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (BOOL)handleFieldDetection;
- (unsigned int)indexOfGroup:(id)arg1;
- (unsigned int)indexOfSeparationGroup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupsController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isWelcomeStateEnabled;
- (void)loadView;
- (unsigned int)numberOfGroups;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (BOOL)passesAreOutdated;
- (BOOL)passesGrowWhenFlipped;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)presentGroupTable;
- (void)presentGroupTableAnimated:(BOOL)arg1;
- (void)presentInitialState;
- (void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentPaymentSetup;
- (void)presentPileOffscreen;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id /* block */)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)setHandleFieldDetection:(BOOL)arg1;
- (void)setPassesAreOutdated:(BOOL)arg1;
- (void)setSuppressedContent:(unsigned int)arg1;
- (void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setWelcomeStateEnabled:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (void)startPaymentPreflight:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (unsigned int)suppressedContent;
- (void)terminateFieldDetect;
- (void)updateLockscreenIdleTimer;
- (void)updatePassesIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)updateRegionSupportIfNecessary;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
