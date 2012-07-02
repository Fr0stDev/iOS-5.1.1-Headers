/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAssistantMicButtonProtocol.h"
#import "UISearchBarDelegate.h"

@class UIControl, SBDeviceLockView, UIScrollView, UISearchBar, UITableView, UIButton, UIView, UIImageView, UIStatusBar, SBAssistantUnavailableView, UILabel, SBAssistantMicButtonView;
@protocol SBAssistantViewDelegate;

@interface SBAssistantView : XXUnknownSuperclass <UISearchBarDelegate, UIScrollViewDelegate, SBAssistantMicButtonProtocol> {
	id<SBAssistantViewDelegate> _delegate;
	UIScrollView* _statusScrollView;
	UISearchBar* _searchBar;
	UIView* _statusBar;
	UILabel* _statusLabel;
	UITableView* _tableView;
	UIButton* _tryAgainButton;
	UIView* _contentView;
	UIImageView* _backgroundImageView;
	UIImageView* _magicPocketView;
	SBAssistantMicButtonView* _micButtonView;
	SBAssistantUnavailableView* _unavailableView;
	SBDeviceLockView* _deviceLockView;
	UIStatusBar* _fakeStatusBar;
	UIImageView* _statusShadowView;
	int _state;
	BOOL _animating;
	BOOL _initialQuery;
	BOOL _showingGuide;
	BOOL _ignoringTableInteraction;
	BOOL _scrolling;
	int _scrollCellIndex;
}
@property(assign, nonatomic) id<SBAssistantViewDelegate> delegate;
@property(readonly, assign, nonatomic) UIButton* tryAgainButton;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(assign, nonatomic, getter=isShowingGuide) BOOL showingGuide;
@property(readonly, assign, nonatomic) SBDeviceLockView* deviceLockView;
@property(readonly, assign, nonatomic) BOOL scrolling;
@property(assign, nonatomic, getter=isModal) BOOL modal;
@property(assign, nonatomic) int assistantState;
@property(readonly, assign, nonatomic) UIControl* micButton;
+(float)bottomBarHeight;
+(float)gridHeight;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)reloadConversation;
-(void)_setSpeechEnabled:(BOOL)enabled;
-(void)showButton:(BOOL)button;
-(void)reset;
-(BOOL)isBeingQuiet;
-(void)endInput;
-(void)setSearchText:(id)text;
-(int)_lastCellToAffectMagicPocket;
-(void)_updateMagicPocketAlpha;
-(void)_updateAlphaForSnippets;
-(CGRect)statusBarFrame;
-(void)noteScrollViewDidScroll;
-(void)noteScrollAnimationDidEnd;
-(void)setTransactionComplete:(BOOL)complete;
-(UIEdgeInsets)_standardInsets;
-(CGRect)_defaultTableFrame;
-(void)_setupForInitialQuery:(BOOL)initialQuery animated:(BOOL)animated;
-(BOOL)_showAssistantStatusBar;
-(void)scheduleScrollToCell:(int)cell;
-(void)cancelScrollToCell;
-(void)_scrollToPendingCell;
-(void)forceScrollToCell;
-(void)setMagicPocketDisabled:(BOOL)disabled;
-(BOOL)magicPocketDisabled;
-(void)setConnectionAvailable:(BOOL)available;
-(void)appendContentInsetsToStandardInsets:(UIEdgeInsets)standardInsets;
-(void)showFakeStatusBar:(BOOL)bar;
-(void)ignoreTableInteraction;
-(void)restoreTableInteractionIfNecessary;
-(BOOL)isTableInteractionIgnored;
-(float)_tossAngleForCell:(id)cell;
-(void)_tossSnippetFromAboveMagicPocket:(id)aboveMagicPocket distanceToBottom:(float)bottom;
-(void)_tossSnippetFromBelowMagicPocket:(id)belowMagicPocket distanceToBottom:(float)bottom;
-(void)tossSnippet:(id)snippet;
-(void)setShowDeviceLockKeypad:(BOOL)keypad;
-(BOOL)isDeviceLockKeypadShowing;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(float)assistantMicButtonGimmeAudioLevel:(id)level;
@end

