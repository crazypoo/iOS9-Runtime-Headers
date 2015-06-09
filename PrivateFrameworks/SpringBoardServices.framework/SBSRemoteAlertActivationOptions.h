/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertActivationOptions : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding> {
    BSMutableSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *reason;
@property (readonly) Class superclass;

// SBSRemoteAlertActivationOptions (null)

- (id)_initWithSettings:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned int)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(int)arg2 object:(id)arg3 ofSetting:(unsigned int)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end