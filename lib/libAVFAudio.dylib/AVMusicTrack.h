/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVMusicTrack : NSObject {
    void * _impl;
}

@property (nonatomic, retain) AVAudioUnit *destinationAudioUnit;
@property (nonatomic) unsigned long destinationMIDIEndpoint;
@property (nonatomic) double lengthInBeats;
@property (nonatomic) double lengthInSeconds;
@property (nonatomic) struct _AVBeatRange { double x1; double x2; } loopRange;
@property (getter=isLoopingEnabled, nonatomic) BOOL loopingEnabled;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (nonatomic) int numberOfLoops;
@property (nonatomic) double offsetTime;
@property (getter=isSoloed, nonatomic) BOOL soloed;
@property (nonatomic, readonly) unsigned int timeResolution;

// AVMusicTrack (null)

- (void)dealloc;
- (id)destinationAudioUnit;
- (unsigned long)destinationMIDIEndpoint;
- (unsigned int)index;
- (id)initWithImpl:(struct MusicTrackImpl { struct OpaqueMusicTrack {} *x1; id x2; unsigned int x3; }*)arg1;
- (BOOL)isLoopingEnabled;
- (BOOL)isMuted;
- (BOOL)isSoloed;
- (double)lengthInBeats;
- (double)lengthInSeconds;
- (struct _AVBeatRange { double x1; double x2; })loopRange;
- (int)numberOfLoops;
- (double)offsetTime;
- (void)setDestinationAudioUnit:(id)arg1;
- (void)setDestinationMIDIEndpoint:(unsigned long)arg1;
- (void)setLengthInBeats:(double)arg1;
- (void)setLengthInSeconds:(double)arg1;
- (void)setLoopRange:(struct _AVBeatRange { double x1; double x2; })arg1;
- (void)setLoopingEnabled:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setNumberOfLoops:(int)arg1;
- (void)setOffsetTime:(double)arg1;
- (void)setSoloed:(BOOL)arg1;
- (void)setUsesAutomatedParameters:(BOOL)arg1;
- (unsigned int)timeResolution;
- (struct OpaqueMusicTrack { }*)track;
- (BOOL)usesAutomatedParameters;

@end