/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {
    TIHandwritingStrokes * _strokes;
}

@property (nonatomic, retain) TIHandwritingStrokes *strokes;

- (void)addPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;
- (void)clear;
- (void)dealloc;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)setStrokes:(id)arg1;
- (id)strokes;

@end
