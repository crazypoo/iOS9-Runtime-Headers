/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableData : NSData

@property unsigned int length;
@property (readonly) void*mutableBytes;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

// NSMutableData (NSMutableData)

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithCapacity:(unsigned int)arg1;
+ (id)dataWithLength:(unsigned int)arg1;

- (BOOL)_isCompact;
- (void)appendBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)appendData:(id)arg1;
- (Class)classForCoder;
- (void)increaseLengthBy:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBytes:(const void*)arg2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBytes:(const void*)arg2 length:(unsigned int)arg3;
- (void)resetBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setData:(id)arg1;
- (void)setLength:(unsigned int)arg1;

@end
