/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISwitchInternalView : UIView <_UISwitchInternalViewProtocol> {
    BOOL  _animating;
    CALayer * _backgroundLayer;
    UIImage * _colorMask;
    UIImageView * _colorView;
    UIImageView * _idleImageView;
    UIView * _interactiveView;
    UIImageView * _labelView;
    UIColor * _nonAlternateColor;
    UIImage * _offImage;
    BOOL  _on;
    UIImage * _onImage;
    UIColor * _onTintColor;
    float  _position;
    BOOL  _pressed;
    BOOL  _sendAction;
    UIImage * _shapeMask;
    UIImage * _shapeShadow;
    UIImage * _thumb;
    UIImage * _thumbPressed;
    UIColor * _thumbTintColor;
    UIImageView * _thumbView;
    UIColor * _tintColor;
    BOOL  _useAlternateColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *offImage;
@property (nonatomic) BOOL on;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIColor *onTintColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) BOOL useAlternateColor;

+ (id)_defaultOnTintColor;

- (void).cxx_destruct;
- (void)_buildControl;
- (void)_cleanUpAfterAnimating;
- (id)_colorImage;
- (id)_labelImage;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_prepareForInteraction;
- (void)_sendActions;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setOnTintColor:(id)arg1;
- (void)_setPressed:(BOOL)arg1;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)_setProgress:(float)arg1;
- (void)_setProgress:(float)arg1 animated:(BOOL)arg2 withDuration:(float)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
- (void)_setupBackgroundLayer;
- (void)_setupThumbImages;
- (id)_snapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)offImage;
- (BOOL)on;
- (id)onImage;
- (id)onTintColor;
- (BOOL)sendAction;
- (void)setOffImage:(id)arg1;
- (void)setOn:(BOOL)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setSendAction:(BOOL)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseAlternateColor:(BOOL)arg1;
- (id)thumbTintColor;
- (id)tintColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)useAlternateColor;

@end
