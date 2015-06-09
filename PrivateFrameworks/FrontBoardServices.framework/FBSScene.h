/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSScene : NSObject {
    NSArray * _layers;
}

@property (nonatomic, readonly, retain) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly, retain) NSArray *contexts;
@property (nonatomic) <FBSSceneDelegate> *delegate;
@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly, retain) FBSDisplay *fbsDisplay;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) NSArray *layers;
@property (nonatomic, readonly, retain) FBSSceneSettings *settings;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

// FBSScene (null)

- (id)_init;
- (BOOL)_performSnapshotRequestType:(unsigned int)arg1 withContext:(id)arg2;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)clientSettings;
- (id)contexts;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)display;
- (id)fbsDisplay;
- (id)identifier;
- (id)init;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)invalidate;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (id)layers;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// FBSScene (UIApp)

- (BOOL)uiCanReceiveDeviceOrientationEvents;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateUIClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateUIClientSettingsWithTransitionBlock:(id /* block */)arg1;

@end