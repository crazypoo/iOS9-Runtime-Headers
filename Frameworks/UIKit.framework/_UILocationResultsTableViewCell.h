/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILocationResultsTableViewCell : UITableViewCell {
    float  _additionalLeftSidePadding;
    NSLayoutConstraint * _bottomMarginConstraint;
    UIView * _cellHeightStrut;
    UIImage * _customLocationImage;
    NSLayoutConstraint * _interLabelSpaceConstraint;
    int  _locationImageType;
    UILabel * _searchDetailTextLabel;
    UIImageView * _searchImageView;
    UILabel * _searchTextLabel;
    NSLayoutConstraint * _topMarginConstraint;
}

@property (nonatomic) float additionalLeftSidePadding;
@property (nonatomic, retain) NSLayoutConstraint *bottomMarginConstraint;
@property (nonatomic, retain) UIView *cellHeightStrut;
@property (nonatomic, copy) UIImage *customLocationImage;
@property (nonatomic, retain) NSLayoutConstraint *interLabelSpaceConstraint;
@property (nonatomic) int locationImageType;
@property (nonatomic, retain) UILabel *searchDetailTextLabel;
@property (nonatomic, retain) UIImageView *searchImageView;
@property (nonatomic, retain) UILabel *searchTextLabel;
@property (nonatomic, retain) NSLayoutConstraint *topMarginConstraint;

- (void)_applyLeftAndRightAlignmentConstraints:(id)arg1;
- (float)_defaultCellBottomMargin;
- (float)_defaultCellTopMargin;
- (id)_searchImageView;
- (float)_subtitleCellBottomMargin;
- (float)_subtitleCellInterLabelSpace;
- (float)_subtitleCellTopMargin;
- (void)_updateLabelFontsAndConstraints;
- (float)additionalLeftSidePadding;
- (id)bottomMarginConstraint;
- (id)cellHeightStrut;
- (id)contentView;
- (id)customLocationImage;
- (void)dealloc;
- (id)detailTextLabel;
- (id)imageView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)interLabelSpaceConstraint;
- (void)layoutSubviews;
- (int)locationImageType;
- (void)prepareForReuse;
- (id)searchDetailTextLabel;
- (id)searchImageView;
- (id)searchTextLabel;
- (void)setAdditionalLeftSidePadding:(float)arg1;
- (void)setBottomMarginConstraint:(id)arg1;
- (void)setCellHeightStrut:(id)arg1;
- (void)setCustomLocationImage:(id)arg1;
- (void)setInterLabelSpaceConstraint:(id)arg1;
- (void)setLocationImageType:(int)arg1;
- (void)setSearchDetailTextLabel:(id)arg1;
- (void)setSearchImageView:(id)arg1;
- (void)setSearchTextLabel:(id)arg1;
- (void)setTopMarginConstraint:(id)arg1;
- (id)textLabel;
- (id)topMarginConstraint;

@end
