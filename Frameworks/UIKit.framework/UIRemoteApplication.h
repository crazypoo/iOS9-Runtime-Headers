/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteApplication : NSObject {
    NSString * _machServiceName;
    unsigned int  _port;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didRegisterUserNotificationSettings:(id)arg1;
- (void)didTakeScreenshot;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (void)localNotificationDidSnooze:(id)arg1;
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)arg1;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1;
- (void)statusBarWillChangeOrientation:(int)arg1 duration:(float)arg2;
- (void)updatePort;
- (void)wakeTimerFired;

@end