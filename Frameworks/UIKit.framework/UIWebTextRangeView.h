/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebTextRangeView : UIView {
    UIWebDragDotView * _endDot;
    BOOL  _magnifying;
    NSMutableArray * _rectViews;
    NSArray * _rects;
    UIWebDragDotView * _startDot;
    UIView<UITextInput> * m_container;
}

@property (nonatomic, readonly) UIView<UITextInput> *container;
@property (nonatomic, copy) NSArray *rects;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)container;
- (void)dealloc;
- (void)doneMagnifying;
- (struct CGPoint { float x1; float x2; })endCorner;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge;
- (BOOL)endIsHorizontal;
- (void)geometryChanged;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)prepareForMagnification;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectAtIndex:(int)arg1;
- (id)rectViewAtIndex:(int)arg1;
- (id)rects;
- (void)removeFromSuperview;
- (void)setRects:(id)arg1;
- (struct CGPoint { float x1; float x2; })startCorner;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge;
- (BOOL)startIsHorizontal;
- (void)updateDragDots;
- (void)updateRectViews;

@end