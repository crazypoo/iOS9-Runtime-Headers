/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextUndoOperationReplace : NSUndoTextOperation {
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _replacementRange;
}

- (void).cxx_destruct;
- (id)initWithAffectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inputController:(id)arg2 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)undoRedo;

@end