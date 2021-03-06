/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
    AVCaptureVideoDataOutputInternal * _internal;
}

@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic, readonly) NSArray *availableVideoCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (nonatomic, copy) NSDictionary *videoSettings;

+ (void)initialize;
+ (id)supportedVideoSettingsKeys;

- (void)_setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (BOOL)alwaysDiscardsLateVideoFrames;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (BOOL)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (int)outputFormat;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })outputSizeForSourceFormat:(id)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (int)requiredOutputFormatForConnection:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setVideoSettings:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
- (BOOL)usesPreviewSizedBuffers;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)videoSettings;

@end
