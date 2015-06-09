/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMEvent : DOMObject

@property (readonly) BOOL bubbles;
@property BOOL cancelBubble;
@property (readonly) BOOL cancelable;
@property (readonly) <DOMEventTarget> *currentTarget;
@property (readonly) unsigned short eventPhase;
@property BOOL returnValue;
@property (readonly) <DOMEventTarget> *srcElement;
@property (readonly) <DOMEventTarget> *target;
@property (readonly) unsigned long long timeStamp;
@property (readonly, copy) NSString *type;

- (BOOL)bubbles;
- (BOOL)cancelBubble;
- (BOOL)cancelable;
- (id)currentTarget;
- (void)dealloc;
- (BOOL)defaultPrevented;
- (unsigned short)eventPhase;
- (void)finalize;
- (void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)preventDefault;
- (BOOL)returnValue;
- (void)setCancelBubble:(BOOL)arg1;
- (void)setReturnValue:(BOOL)arg1;
- (id)srcElement;
- (void)stopImmediatePropagation;
- (void)stopPropagation;
- (id)target;
- (unsigned long long)timeStamp;
- (id)type;

@end