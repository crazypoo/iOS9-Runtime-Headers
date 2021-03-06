/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebCache : NSObject

// WebCache (null)

+ (bool)addImageToCache:(struct CGImage { }*)arg1 forURL:(id)arg2;
+ (bool)addImageToCache:(struct CGImage { }*)arg1 forURL:(id)arg2 forFrame:(id)arg3;
+ (void)clearCachedCredentials;
+ (void)empty;
+ (void)emptyInMemoryResources;
+ (struct CGImage { }*)imageForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)isDisabled;
+ (void)removeImageFromCacheForURL:(id)arg1;
+ (void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2;
+ (void)setDisabled:(BOOL)arg1;
+ (void)sizeOfDeadResources:(int*)arg1;
+ (id)statistics;

@end
