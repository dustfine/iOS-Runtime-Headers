/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHActivityProgressViewController : UIViewController {
    float _progress;
    PUActivityProgressController *_pu_activityProgressController;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (void)_commonPHActivityProgressViewControllerInitialization;
- (id /* block */)cancellationHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (float)progress;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setProgress:(float)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end