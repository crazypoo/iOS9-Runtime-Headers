/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatistics : NSObject {
    NSString * _key;
    double  _sampleRate;
    double  _sampleValue;
}

@property (nonatomic) double sampleRate;

- (void).cxx_destruct;
- (void)_incrementValueBy:(long long)arg1;
- (void)_recordDistributionTime:(unsigned long long)arg1;
- (void)_recordDistributionValue:(double)arg1;
- (void)_resetDistribution;
- (void)_resetDistributionToValue:(double)arg1;
- (void)_resetValue;
- (void)_setValue:(long long)arg1;
- (BOOL)_shouldSample;
- (id)description;
- (id)initWithDomainPrefix:(id)arg1;
- (id)initWithDomainPrefix:(id)arg1 postfix:(id)arg2;
- (id)initWithDomainPrefix:(id)arg1 postfix:(id)arg2 identifier:(int)arg3;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;

@end
