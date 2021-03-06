/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSArrayChanges : NSMutableArray <NSCopying>

@property (readonly) unsigned int changeCount;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_isToManyChangeInformation;
- (int)_toManyPropertyType;
- (void)addChange:(id)arg1;
- (unsigned int)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateChanges:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;

// NSArrayChanges (NSArrayChangeActions)

- (void)applyChangesToArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)moveObjectAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)updateObject:(id)arg1 atIndex:(unsigned int)arg2;

// NSArrayChanges (NSArrayChangeBatch)

- (void)addChanges:(id)arg1;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;

// NSArrayChanges (NSMutableArrayOverrides)

- (void)addObject:(id)arg1;
- (void)removeLastObject;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2;
- (void)sortUsingSelector:(SEL)arg1;

@end
