/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutputInternal : NSObject {
    NSObject<OS_dispatch_queue> * bufferQueue;
    AVWeakReferencingDelegateStorage * delegateStorage;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    void * remoteReceiverQueue;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
