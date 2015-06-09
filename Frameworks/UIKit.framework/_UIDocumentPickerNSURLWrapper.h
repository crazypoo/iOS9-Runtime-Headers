/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {
    BOOL  _createSandbox;
    NSData * _promiseScope;
    NSData * _scope;
    NSURL * _url;
}

@property (nonatomic) BOOL createSandbox;
@property (nonatomic, copy) NSData *promiseScope;
@property (nonatomic, copy) NSData *scope;
@property (nonatomic, copy) NSURL *url;

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)wrapperForExportWithURL:(id)arg1 error:(id*)arg2;
+ (id)wrapperWithURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(BOOL)arg2;
+ (id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2;

- (void).cxx_destruct;
- (BOOL)createSandbox;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)promiseScope;
- (id)scope;
- (void)setCreateSandbox:(BOOL)arg1;
- (void)setPromiseScope:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end