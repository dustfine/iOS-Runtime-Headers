/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdRecipientRecord, _UIRemoteViewController, UIViewController;

@interface ADLocalViewController : UIViewController  {
    ADAdRecipientRecord *_recipient;
    BOOL _reattemptPresentStoryboard;
    int _oldOrientation;
    int _supportedOrientations;
    _UIRemoteViewController *_remoteViewController;
    UIViewController *_modalViewController;
}

@property int supportedOrientations;
@property(retain) _UIRemoteViewController * remoteViewController;
@property(retain) UIViewController * modalViewController;


- (id)remoteViewController;
- (void)dealloc;
- (void)setRemoteViewController:(id)arg1;
- (int)supportedOrientations;
- (void)setSupportedOrientations:(int)arg1;
- (id)modalViewController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)setModalViewController:(id)arg1;
- (void)dismissModalAnimated:(BOOL)arg1;
- (void)requestAndPresentModalAnimated:(BOOL)arg1;
- (void)storyboardDismissedLocalViewController;
- (void)setStatusBarVisible:(BOOL)arg1;
- (void)presentStoryboard;
- (void)requestStoryboard;
- (void)dismissStoryboardAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)initWithRecipient:(id)arg1;

@end