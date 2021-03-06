/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    unsigned int  _arrowDirection;
    float  _arrowOffset;
    UIView * _arrowView;
    BOOL  _arrowVisible;
    int  _backgroundStyle;
    _UIBackdropView * _blurView;
    BOOL  _debugMode;
    float  _dimmingViewTopEdgeInset;
    NSArray * _dimmingViews;
    UIView * _leftCapView;
    UIColor * _popoverBackgroundColor;
    UIView * _rightCapView;
    BOOL  useShortMode;
}

@property (getter=isArrowVisible, nonatomic) BOOL arrowVisible;
@property (nonatomic) int backgroundStyle;
@property (getter=isDebugModeEnabled, nonatomic) BOOL debugModeEnabled;
@property (nonatomic) float dimmingViewTopEdgeInset;
@property (nonatomic, copy) UIColor *popoverBackgroundColor;
@property (nonatomic) BOOL useShortMode;

+ (float)arrowBase;
+ (float)arrowHeight;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsets;

- (void).cxx_destruct;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_loadNecessaryViews;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_shadowInsets;
- (struct CGSize { float x1; float x2; })_shadowOffset;
- (float)_shadowOpacity;
- (id)_shadowPath;
- (float)_shadowRadius;
- (unsigned int)arrowDirection;
- (float)arrowOffset;
- (int)backgroundStyle;
- (void)didMoveToWindow;
- (float)dimmingViewTopEdgeInset;
- (BOOL)hasComponentViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isArrowVisible;
- (BOOL)isDebugModeEnabled;
- (BOOL)isPinned;
- (BOOL)isRightArrowPinnedToBottom;
- (BOOL)isRightArrowPinnedToTop;
- (void)layoutSubviews;
- (float)maxNonPinnedOffset;
- (float)minNonPinnedOffset;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (id)popoverBackgroundColor;
- (void)setArrowDirection:(unsigned int)arg1;
- (void)setArrowOffset:(float)arg1;
- (void)setArrowVisible:(BOOL)arg1;
- (void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setDebugModeEnabled:(BOOL)arg1;
- (void)setDimmingViewTopEdgeInset:(float)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setUseShortMode:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)useShortMode;
- (BOOL)wouldPinForOffset:(float)arg1;

@end
