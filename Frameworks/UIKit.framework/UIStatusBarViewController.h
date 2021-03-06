/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarViewController : UIViewController {
    BOOL  _iPhoneWS;
    BOOL  _keyboardVisible;
    UIView * _statusBar;
    UIClassicStatusBarView * _statusBarBackgroundView;
    UIWindow * _window;
}

+ (double)statusBarOrientationAnimationDurationFrom:(int)arg1 to:(int)arg2;

- (void).cxx_destruct;
- (void)_changeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_changeStatusBarOrientationFrom:(int)arg1 toOrientation:(int)arg2;
- (void)_finishStatusBarOrientationChange;
- (void)_prepareForZoom:(BOOL)arg1;
- (void)_statusBarHideAnimationFinished:(id)arg1 finished:(BOOL)arg2 hidden:(id)arg3;
- (struct CGSize { float x1; float x2; })_statusBarSizeForOrientation:(int)arg1;
- (void)_statusBarViewControllerKeyboardDidHide:(id)arg1;
- (void)_statusBarViewControllerKeyboardWillShow:(id)arg1;
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 style:(int)arg3 hidden:(BOOL)arg4 slideUp:(BOOL)arg5;
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 hidden:(BOOL)arg3 slideUp:(BOOL)arg4;
- (id)_window;
- (void)_zoom:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isClassicControlWindow:(id)arg1;
- (void)loadView;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2;

@end
