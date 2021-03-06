/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAwayBulletinCell.h"


@interface SBAwayBulletinFloatingCell : SBAwayBulletinCell {
	BOOL _hideIcon;
}
+(float)_contentWidthForRowWidth:(float)rowWidth leaveRoomForIcon:(BOOL)icon;
+(float)_rowHeightForContentHeight:(float)contentHeight;
+(float)rowHeightForSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines rowWidth:(float)width;
+(float)rowHeightForSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines attachmentText:(id)text imageSize:(CGSize)size rowWidth:(float)width;
+(float)_cellIconLeftPadding;
+(float)_cellContentLeftPadding;
+(float)_cellContentRightPadding;
+(float)_cellContentTopPadding;
+(float)_cellContentExtraPadding;
-(void)_createContentView;
-(BOOL)_hasBackgroundColor;
-(void)setAttachmentImage:(id)image;
-(void)setUnlockActionContext:(id)context;
-(id)_lockBar;
-(BOOL)_drawsSeparator;
-(CGRect)_contentRect;
-(CGRect)_cellContentViewFrame;
-(void)layoutSubviews;
@end

