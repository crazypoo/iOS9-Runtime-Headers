/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPlayer : NSObject {
    id  _impl;
}

@property (nonatomic, copy) NSArray *channelAssignments;
@property double currentTime;
@property (readonly) NSData *data;
@property <AVAudioPlayerDelegate> *delegate;
@property (readonly) double deviceCurrentTime;
@property (readonly) double duration;
@property BOOL enableRate;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) unsigned int numberOfChannels;
@property int numberOfLoops;
@property float pan;
@property (getter=isPlaying, readonly) BOOL playing;
@property float rate;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;
@property float volume;

// AVAudioPlayer (null)

- (float)averagePowerForChannel:(unsigned int)arg1;
- (void)beginInterruption;
- (id)channelAssignments;
- (double)currentTime;
- (id)data;
- (void)dealloc;
- (void)decodeError:(id)arg1;
- (id)delegate;
- (double)deviceCurrentTime;
- (double)duration;
- (BOOL)enableRate;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(id)arg1;
- (void)finalize;
- (void)finishedPlaying:(id)arg1;
- (id)impl;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (BOOL)isMeteringEnabled;
- (BOOL)isPlaying;
- (BOOL)mixToUplink;
- (unsigned int)numberOfChannels;
- (int)numberOfLoops;
- (float)pan;
- (void)pause;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (BOOL)play;
- (BOOL)playAtTime:(double)arg1;
- (BOOL)prepareToPlay;
- (float)rate;
- (void)setChannelAssignments:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableRate:(BOOL)arg1;
- (void)setMeteringEnabled:(BOOL)arg1;
- (void)setMixToUplink:(BOOL)arg1;
- (void)setNumberOfLoops:(int)arg1;
- (void)setPan:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;
- (float)volume;

@end