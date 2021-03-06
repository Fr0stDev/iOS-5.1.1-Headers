/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBShowcaseViewController.h"
#import "SBAppSwitcherBarViewDelegate.h"
#import "SBIconViewDelegate.h"

@class SBPrintStatusController, NSString, SBNowPlayingBar, SBAppSwitcherBarView, SBAppSwitcherModel;

@interface SBAppSwitcherController : SBShowcaseViewController <SBIconViewDelegate, SBAppSwitcherBarViewDelegate> {
	SBAppSwitcherModel* _model;
	SBNowPlayingBar* _nowPlayingBar;
	SBAppSwitcherBarView* _bottomBar;
	BOOL _editing;
	int _orientation;
	NSString* _topAppDisplayID;
	SBPrintStatusController* _printStatusController;
}
@property(readonly, assign, nonatomic) SBAppSwitcherModel* model;
@property(retain) NSString* topAppDisplayID;
+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
-(id)init;
-(void)dealloc;
-(void)applicationLaunched:(id)launched;
-(void)applicationDied:(id)died;
-(void)applicationSuspended:(id)suspended;
-(void)_appsDidChange:(id)_apps;
-(void)_newsstandFolderWasOpened:(id)opened;
-(id)view;
-(id)_view;
-(float)bottomBarHeight;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)viewWillRotateToInterfaceOrientation:(int)view;
-(void)viewDidRotateFromInterfaceOrientation:(int)view;
-(void)downloadRemoved:(id)removed;
-(void)downloadChanged:(id)changed;
-(void)downloadItemUpdatingStatusChanged:(id)changed;
-(void)_reloadIconViewsAndShowFirstPage:(BOOL)page;
-(void)setupForApp:(id)app orientation:(int)orientation;
-(void)noteIconModelDidReload;
-(BOOL)handleMenuButtonTap;
-(BOOL)isScrolling;
-(BOOL)nowPlayingControlsVisible;
-(BOOL)airPlayControlsVisible;
-(id)_applicationIconsExceptTopApp;
-(BOOL)_inEditMode;
-(void)_beginEditing;
-(void)_stopEditing;
-(void)_removeApplicationFromRecents:(id)recents;
-(id)_currentDownloads;
-(id)_currentIcons;
-(id)_iconForApplication:(id)application;
-(id)_iconForDownload:(id)download;
-(id)_iconForPrinting;
-(void)setNeedsPrintStatusIcon:(BOOL)icon;
-(void)removePrintStatusIconBadge;
-(void)dismissPrintView;
-(id)printIcon;
-(BOOL)printViewIsShowing;
-(void)iconTapped:(id)tapped;
-(BOOL)iconShouldAllowTap:(id)icon;
-(void)iconHandleLongPress:(id)press;
-(void)iconTouchBegan:(id)began;
-(int)closeBoxTypeForIcon:(id)icon;
-(void)iconCloseBoxTapped:(id)tapped;
-(BOOL)iconViewDisplaysBadges:(id)badges;
-(void)appSwitcherBarRemovedFromSuperview:(id)superview;
-(BOOL)appSwitcherBar:(id)bar scrollShouldCancelInContentForView:(id)scroll;
-(void)appSwitcherBar:(id)bar pageAtIndexDidAppear:(int)pageAtIndex;
-(void)appSwitcherBar:(id)bar pageAtIndexDidDisappear:(int)pageAtIndex;
-(void)saveScrollPositionBeforeSuspendGesture;
-(void)restoreScrollPositionAfterSuspendGesture;
@end

