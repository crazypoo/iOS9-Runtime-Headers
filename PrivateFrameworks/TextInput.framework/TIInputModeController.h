/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIInputModeController : NSObject {
    NSArray * _supportedInputModeIdentifiers;
    NSArray * _supportedInputModeLanguageAndRegions;
    NSString * currentLanguage;
    NSString * currentLocale;
    NSArray * defaultInputModes;
    NSArray * enabledInputModes;
}

@property (nonatomic, copy) NSString *currentLanguage;
@property (nonatomic, copy) NSString *currentLocale;
@property (nonatomic, copy) NSArray *defaultInputModes;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (nonatomic, copy) NSArray *enabledInputModes;
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (readonly) NSArray *supportedInputModeLanguageAndRegions;

+ (id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(id /* block */)arg3;
+ (id)sharedInputModeController;

- (id)currentLanguage;
- (id)currentLocale;
- (void)dealloc;
- (id)defaultEnabledInputModesForCurrentLocale;
- (id)defaultInputModes;
- (id)enabledInputModeIdentifiers;
- (id)enabledInputModes;
- (void)setCurrentLanguage:(id)arg1;
- (void)setCurrentLocale:(id)arg1;
- (void)setDefaultInputModes:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (id)supportedInputModeIdentifiers;
- (id)supportedInputModeLanguageAndRegions;

@end