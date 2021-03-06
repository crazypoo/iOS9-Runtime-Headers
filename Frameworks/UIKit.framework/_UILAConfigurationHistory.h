/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILAConfigurationHistory : NSObject <NSCopying, _UILAPropertySource> {
    int  _axis;
    BOOL  _hasEstablishedBaseValues;
    BOOL  _inLayoutArrangementUpdateSection;
    BOOL  _layoutFillsCanvas;
    BOOL  _layoutUsesCanvasMarginsWhenFilling;
    NSMutableSet * _newlyHiddenItems;
    NSMutableSet * _newlyUnhiddenItems;
}

@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) int axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEstablishedBaseValues;
@property (readonly) unsigned int hash;
@property (getter=isInLayoutArrangementUpdateSection, nonatomic) BOOL inLayoutArrangementUpdateSection;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newlyHiddenItems;
- (id)_newlyUnhiddenItems;
- (int)axis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)hasEstablishedBaseValues;
- (id)init;
- (BOOL)isInLayoutArrangementUpdateSection;
- (BOOL)layoutFillsCanvas;
- (BOOL)layoutUsesCanvasMarginsWhenFilling;
- (void)setAxis:(int)arg1;
- (void)setHasEstablishedBaseValues:(BOOL)arg1;
- (void)setInLayoutArrangementUpdateSection:(BOOL)arg1;
- (void)setLayoutFillsCanvas:(BOOL)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1;

@end
