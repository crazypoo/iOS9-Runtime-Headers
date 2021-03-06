/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {
    UIView * _headerView;
    UITableViewIndex * _index;
    float  _indexMaximumHeight;
    UIKeyboardCandidateGridCollectionViewController * _parentViewController;
    float  _previousGroupBarStartingY;
}

@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, readonly) UITableViewIndex *index;
@property (nonatomic, retain) NSArray *indexTitles;
@property (nonatomic) UIKeyboardCandidateGridCollectionViewController *parentViewController;
@property (nonatomic) float previousGroupBarStartingY;

- (void)dealloc;
- (void)delayUpdateIndex;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)groupBarStartingY;
- (id)headerView;
- (id)index;
- (id)indexTitles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (BOOL)isCellVisible:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (id)parentViewController;
- (float)previousGroupBarStartingY;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToOffsetFromTop:(float)arg1 withAnimation:(BOOL)arg2;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned int)arg3;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIndexTitles:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPreviousGroupBarStartingY:(float)arg1;
- (BOOL)shouldShowIndex;
- (void)showIndex:(BOOL)arg1;
- (void)updateIndex;
- (void)updateIndex:(BOOL)arg1;

@end
