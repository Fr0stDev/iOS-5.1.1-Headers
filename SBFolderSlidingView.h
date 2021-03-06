/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBSlidingViewHighlight, SBWallpaperView, UIImageView, SBFolderNotchHighlightView, SBFolderNotchView, UIView, SBFolderView;

@interface SBFolderSlidingView : XXUnknownSuperclass {
	int _position;
	SBFolderView* _folderView;
	int _orientation;
	XXStruct_9ihRqB _notchInfo;
	CGRect _wallpaperRect;
	UIView* _rasterizationView;
	UIView* _wallpaperContainerView;
	SBWallpaperView* _wallpaperView;
	SBFolderNotchView* _linenNotchView;
	SBSlidingViewHighlight* _highlightView;
	SBFolderNotchHighlightView* _notchHighlightView;
	UIImageView* _dockView;
	UIImageView* _outgoingDockView;
}
-(id)initWithPosition:(int)position folderView:(id)view;
-(void)prepareToSetDockOrientation:(int)setDockOrientation;
-(void)cleanUpAfterDockOrientationChange;
-(void)setOrientation:(int)orientation wallpaperRect:(CGRect)rect notchInfo:(XXStruct_9ihRqB)info;
-(id)folderView;
-(void)dealloc;
-(CGRect)_rectByAddingOverlapToRect:(CGRect)rect;
-(void)_placeNotchAndHighlights;
-(id)_newDockViewForOrientation:(int)orientation;
-(void)setShowsHighlight:(BOOL)highlight;
-(void)setShouldRasterize:(BOOL)rasterize;
-(void)handleTapGestureInWallpaperContainer:(id)wallpaperContainer;
@end

