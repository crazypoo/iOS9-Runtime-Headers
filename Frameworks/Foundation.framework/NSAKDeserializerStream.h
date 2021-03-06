/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
    const char * current;
    BOOL  freeWhenDone;
    unsigned int  left;
    unsigned int  max;
    const void * memory;
}

- (void)dealloc;
- (void)finalize;
- (id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initFromPath:(id)arg1;
- (unsigned int)readAlignedDataSize;
- (void)readData:(void*)arg1 length:(unsigned int)arg2;
- (int)readInt;

@end
