/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioNode : NSObject <AVAudioMixing> {
    void * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVAudioEngine *engine;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) AVAudioTime *lastRenderTime;
@property (nonatomic, readonly) unsigned int numberOfInputs;
@property (nonatomic, readonly) unsigned int numberOfOutputs;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

// AVAudioNode (null)

- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)clock;
- (void)dealloc;
- (id)destinationForMixer:(id)arg1 bus:(unsigned int)arg2;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (id)engine;
- (struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; void x5; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x6; BOOL x7; void*x8; out const void*x9; unsigned int x10/* : ? */; out out long x11; void*x12; void*x13; short x14; void*x15; double x16; SEL x17; SEL x18; void*x19; void*x20; void*x21; SEL x22; SEL x23; void*x24; long x25; long x26; out BOOL x27; void*x28; void*x29; out const void*x30; unsigned int x31/* : ? */; out out long x32; void*x33; void*x34; void*x35; void*x36; unsigned long *x37; unsigned int x38; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_39_1_1; } x39; }*)impl;
- (id)init;
- (id)initWithImpl:(struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; void x5; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x6; BOOL x7; void*x8; out const void*x9; unsigned int x10/* : ? */; out out long x11; void*x12; void*x13; short x14; void*x15; double x16; SEL x17; SEL x18; void*x19; void*x20; void*x21; SEL x22; SEL x23; void*x24; long x25; long x26; out BOOL x27; void*x28; void*x29; out const void*x30; unsigned int x31/* : ? */; out out long x32; void*x33; void*x34; void*x35; void*x36; unsigned long *x37; unsigned int x38; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_39_1_1; } x39; }*)arg1;
- (id)inputFormatForBus:(unsigned int)arg1;
- (void)installTapOnBus:(unsigned int)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(id /* block */)arg4;
- (id)lastRenderTime;
- (id)nameForInputBus:(unsigned int)arg1;
- (id)nameForOutputBus:(unsigned int)arg1;
- (unsigned int)numberOfInputs;
- (unsigned int)numberOfOutputs;
- (float)obstruction;
- (float)occlusion;
- (id)outputFormatForBus:(unsigned int)arg1;
- (float)pan;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;
- (float)rate;
- (void)removeTapOnBus:(unsigned int)arg1;
- (int)renderingAlgorithm;
- (void)reset;
- (float)reverbBlend;
- (BOOL)setInputFormat:(id)arg1 forBus:(unsigned int)arg2;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setObstruction:(float)arg1;
- (void)setOcclusion:(float)arg1;
- (BOOL)setOutputFormat:(id)arg1 forBus:(unsigned int)arg2;
- (void)setPan:(float)arg1;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)setRate:(float)arg1;
- (void)setRenderingAlgorithm:(int)arg1;
- (void)setReverbBlend:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end