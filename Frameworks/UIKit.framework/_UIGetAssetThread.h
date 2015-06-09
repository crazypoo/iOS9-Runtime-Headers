/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGetAssetThread : NSThread {
    ALAsset * _asset;
    NSCondition * _condition;
    ALAssetsLibrary * _library;
    NSURL * _url;
}

@property (retain) ALAsset *asset;
@property (retain) NSCondition *condition;

- (void).cxx_destruct;
- (id)asset;
- (id)condition;
- (id)initWithURL:(id)arg1 assetsLibrary:(id)arg2;
- (void)main;
- (void)setAsset:(id)arg1;
- (void)setCondition:(id)arg1;

@end