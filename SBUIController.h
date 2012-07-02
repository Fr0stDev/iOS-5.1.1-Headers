/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIWindowDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBWallpaperView, SBAppToAppTransitionController, SBDismissOnlyAlertItem, SBApplication, UIWindow, UIView, SBWallpaper, SBZoomView, UIStatusBar, UIStatusBarCorners, NSMutableDictionary, NSArray, MPAudioDeviceController, SBAnimationStepper, SBSwitchAppGestureView, SBShowcaseController, SBUIRootView, NSMutableArray;

@interface SBUIController : XXUnknownSuperclass <UIWindowDelegate> {
	UIWindow* _window;
	UIView* _iconsView;
	SBUIRootView* _rootView;
	UIView* _contentView;
	SBWallpaper* _wallpaper;
	SBWallpaperView* _wallpaperView;
	SBZoomView* _zoomLayer;
	UIStatusBar* _fakeSpringBoardStatusBar;
	UIStatusBarCorners* _fakeRedTopCorners;
	UIView* _fakeZoomBanner;
	SBShowcaseController* _showcaseController;
	SBApplication* _showcaseHostedApp;
	SBApplication* _toggleSwitcherAfterLaunchApp;
	SBAppToAppTransitionController* _appToAppTransitionController;
	unsigned _rootViewHidden : 1;
	unsigned _stealingEvents : 1;
	unsigned _ignoringEvents : 1;
	unsigned _restoringIconList : 1;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isOnAC : 1;
	unsigned _connectedToUnusableFirewire : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
	unsigned _allowAlertWindowRotation : 1;
	unsigned _showingZoomLayerForCrossfade : 1;
	unsigned _showcaseAnimating : 1;
	id _volumeHandler;
	float _batteryCapacity;
	float _curvedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem* _fwChargingAlert;
	NSMutableDictionary* _installedSystemGestureViews;
	SBAnimationStepper* _suspendAnimationStepper;
	SBAnimationStepper* _statusBarAnimationStepper;
	id _suspendGestureCompleteForwardToEndHandler;
	id _suspendGestureCompleteBackwardToStartHandler;
	BOOL _switcherVisibleWhenSuspendGestureStarted;
	BOOL _switcherAnimationRevealing;
	BOOL _switcherAnimationInProgress;
	BOOL _switcherGestureRevealedOrDismissedSwitcher;
	SBSwitchAppGestureView* _switchAppGestureView;
	float _switchAppGesturePreviousPercentage;
	float _switchAppGestureEffectivePercentage;
	unsigned _switchAppGestureChangedFrames;
	UIView* _systemGestureBackdrop;
	UIView* _pendingGestureLaunchView;
	SBApplication* _pendingAppActivatedByGesture;
	NSMutableArray* _switchAppFullyOrderedList;
	NSArray* _switchAppFilteredList;
	unsigned _switchAppGestureStatusBarMaintenanceBits;
	BOOL _switchAppGestureStatusBarMaintained;
	BOOL _switcherVisibleWhenSwitchAppGestureStarted;
	BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
	BOOL _keyboardNeedsShowcaseTranslation;
	BOOL _unprocessedKeyboardOrientationChangeForShowcase;
	BOOL _showNotificationsGestureIsShowingTab;
	MPAudioDeviceController* _tempAudioDeviceController;
}
@property(retain, nonatomic) SBShowcaseController* showcaseController;
+(int)displayedLevelForLockScreenBatteryLevel:(int)lockScreenBatteryLevel;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)_indicateConnectedToPower;
-(void)dealloc;
-(id)init;
-(void)animateAppleDown:(BOOL)down;
-(void)finishLaunching;
-(void)systemControllerRouteChanged:(id)changed;
-(void)_retryLockFromSource:(id)source;
-(void)lockFromSource:(int)source;
-(void)cleanUpAfterZoomAnimation;
-(void)cleanUpAfterSlideAnimation;
-(void)cleanUpOnFrontLocked;
-(void)clearZoomLayer;
-(void)createFakeSpringBoardStatusBar;
-(void)createFakeRedTopCorners;
-(void)clearFakeSpringBoardStatusBarAndCorners;
-(void)setFakeSpringBoardStatusBarVisible:(BOOL)visible;
-(void)setFakeRedTopCornersVisible:(BOOL)visible;
-(void)_clearZoomBanner;
-(id)rootView;
-(id)contentView;
-(id)window;
-(void)setShouldRasterizeAndFreezeContentView:(BOOL)rasterizeAndFreezeContentView;
-(void)_updateWallpaperImageAndShow:(BOOL)show;
-(id)wallpaperView;
-(BOOL)isDisplayingWallpaper;
-(void)launchIcon:(id)icon;
-(void)activateApplicationAnimated:(id)animated;
-(void)activateApplicationFromSwitcher:(id)switcher;
-(void)activateURLFromBulletinList:(id)bulletinList;
-(void)_lockOrientationForTransition;
-(void)_lockOrientationForSystemGesture;
-(void)releaseSwitcherOrientationLockUnlessPrintViewIsShowing;
-(void)_releaseSystemGestureOrientationLock;
-(void)_releaseTransitionOrientationLock;
-(void)_clearTempAudioDeviceController;
-(void)_airPlayPasswordAlertWillAppear:(id)_airPlayPasswordAlert;
-(void)_airPlayPasswordAlertWillDisappear:(id)_airPlayPasswordAlert;
-(void)_deviceLockStateChanged:(id)changed;
-(void)applicationOrientationChanged:(double)changed fencePort:(unsigned)port;
-(void)applicationHasDied:(id)died;
-(void)_setRoundedCornersOnZoomLayerIfNecessary:(id)necessary forApp:(id)app withCornersFrame:(CGRect)cornersFrame;
-(CGRect)snapshotRectForOrientation:(int)orientation statusBarStyle:(int)style hidden:(BOOL)hidden;
-(CGAffineTransform)_transformAndFrame:(CGRect*)frame forStatusBarWithOrientation:(int)orientation height:(float)height;
-(void)_showZoomLayerWithImage:(id)image;
-(void)showZoomLayerWithDefaultImageOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
-(id)_zoomViewForAppDosado:(id)appDosado includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
-(id)_zoomViewForApplication:(id)application includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner snapshotFrame:(CGRect*)frame canUseIOSurface:(BOOL)surface decodeImage:(BOOL)image;
-(id)_zoomViewWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
-(void)showZoomLayerWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
-(void)showZoomLayerForCrossfadeFromApp:(id)app;
-(void)scatterIconListAndBar:(BOOL)bar;
-(void)scatterIconListAndBar:(BOOL)bar fade:(BOOL)fade animateWallpaper:(BOOL)wallpaper;
-(void)fadeIconsForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time;
-(void)setRootViewHiddenForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time;
-(void)setRootViewHiddenForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time completion:(id)completion;
-(void)_hideKeyboard;
-(BOOL)isRootViewHidden;
-(void)_closeOpenFolderIfNecessary;
-(void)restoreIconListAnimated:(BOOL)animated;
-(void)restoreIconListAnimatedIfNeeded:(BOOL)needed animateWallpaper:(BOOL)wallpaper;
-(void)restoreIconListAnimated:(BOOL)animated animateWallpaper:(BOOL)wallpaper;
-(void)restoreIconListAnimated:(BOOL)animated animateWallpaper:(BOOL)wallpaper keepSwitcher:(BOOL)switcher;
-(void)restoreIconListForSuspendGesture;
-(void)animateApplicationActivation:(id)activation animateDefaultImage:(BOOL)image scatterIcons:(BOOL)icons;
-(void)animateApplicationActivationDidStop:(id)animateApplicationActivation finished:(id)finished context:(void*)context;
-(void)tearDownIconListAndBar;
-(void)animateApplicationSuspend:(id)suspend;
-(void)applicationSuspendSwitcherFadeDidStop:(id)applicationSuspendSwitcherFade;
-(void)applicationSuspendAnimationWillStart:(id)applicationSuspendAnimation context:(void*)context;
-(void)applicationSuspendAnimationDidStop:(id)applicationSuspendAnimation finished:(id)finished context:(void*)context;
-(void)zoomOutCurrentUIWithDuration:(id)duration startTime:(id)time scale:(id)scale postSnapshotBlock:(id)block;
-(id)_snapshotUIAndUnhostForSwitcher:(id)switcher;
-(void)_beginTransitionFromApp:(id)app toApp:(id)app2;
-(void)appTransitionViewAnimationDidStop:(id)appTransitionViewAnimation;
-(void)_clearAppToAppTransition;
-(void)animateApplicationSuspendFlip:(id)flip;
-(void)applicationSuspendFlipDidStop:(id)applicationSuspendFlip;
-(void)stopRestoringIconList;
-(void)zoomWallpaper:(BOOL)wallpaper startTime:(double)time duration:(double)duration;
-(void)finishedUnscattering;
-(int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
-(BOOL)_handleButtonEventToSuspendDisplays:(BOOL)suspendDisplays displayWasSuspendedOut:(BOOL*)anOut;
-(BOOL)clickedMenuButton;
-(void)_displayDidLaunch:(id)_display;
-(void)_setToggleSwitcherAfterLaunchApp:(id)app;
-(void)_toggleSwitcher;
-(BOOL)handleMenuDoubleTap;
-(float)_appSwitcherRevealAnimationDelay;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
-(BOOL)_canActivateShowcaseIgnoringTouches:(BOOL)touches;
-(BOOL)_activateSwitcherFrom:(id)from to:(id)to duration:(double)duration;
-(BOOL)_activateSwitcher:(double)switcher;
-(BOOL)activateSwitcher;
-(BOOL)activateAssistantWithOptions:(id)options;
-(void)showAssistantGuideSnippetWithHeight:(float)height;
-(void)textEffectsWindowRotated:(id)rotated;
-(void)_translateKeyboardWindowByOffset:(float)offset forShowcase:(id)showcase;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_prepareShowcaseAndHierarchy:(id)hierarchy withContext:(id)context ghostly:(BOOL)ghostly hostApp:(id)app;
-(BOOL)_revealShowcase:(id)showcase duration:(double)duration from:(id)from to:(id)to;
-(void)_dismissShowcase:(double)showcase unhost:(BOOL)unhost;
-(void)deactivateAssistant;
-(void)openNewsstand;
-(BOOL)showcaseExpectsFaceContact;
-(id)_showcaseContextForOffset:(float)offset;
-(void)_adjustAlertViewHierarchyForShowcaseContext:(id)showcaseContext;
-(void)_adjustViewHierarchyForShowcase:(id)showcase withContext:(id)context;
-(void)dismissSwitcherAnimated:(BOOL)animated;
-(void)dismissAssistantAnimated:(BOOL)animated;
-(void)dismissSwitcherWithoutUnhostingApp;
-(void)addPrintTransitionView:(id)view;
-(void)removePrintTransitionView:(id)view;
-(void)_dismissShowcase:(double)showcase;
-(void)_unhostSwitcherAppImmediatelyAndHideForSuspend:(BOOL)suspend;
-(BOOL)isSwitcherShowing;
-(BOOL)allowAlertWindowRotation;
-(void)_showcaseBlockingViewHit:(id)hit;
-(void)_ignoreEvents;
-(void)_resumeEventsIfNecessary;
-(BOOL)_ignoringEvents;
-(CGAffineTransform)_portraitViewTransformForSwitcherSize:(CGSize)switcherSize orientation:(int)orientation;
-(float)_contentRotationForOrientation:(int)orientation;
-(void)wakeUp:(id)up;
-(void)handleVolumeEvent:(GSEventRef)event;
-(void)cancelVolumeEvent;
-(void)updateBatteryState:(id)state;
-(float)batteryCapacity;
-(int)batteryCapacityAsPercentage;
-(float)curvedBatteryCapacity;
-(int)curvedBatteryCapacityAsPercentage;
-(int)displayBatteryCapacityAsPercentage;
-(BOOL)isBatteryCharging;
-(BOOL)isOnAC;
-(BOOL)isConnectedToChargeIncapablePowerSource;
-(void)ACPowerChanged;
-(void)setIsConnectedToUnusableFirewireCharger:(BOOL)unusableFirewireCharger;
-(BOOL)isConnectedToUnusableFirewireCharger;
-(void)noteStatusBarHeightChanged:(id)changed;
-(void)assistantWantsToBeFullyRevealed:(id)beFullyRevealed withBlock:(id)block;
-(void)_defferedFullyRevealed:(id)revealed;
-(void)assistantWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;
-(double)assistantFullRevealDuration:(id)duration;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)rotatingContentViewForWindow:(id)window;
-(id)rotatingFooterViewForWindow:(id)window;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)isHeadsetDocked;
-(BOOL)isHeadsetBatteryCharging;
-(unsigned char)headsetBatteryCapacity;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(id)_systemGestureViewKeyForApp:(id)app;
-(id)_installedSystemGestureViewForKey:(id)key;
-(void)_clearInstalledSystemGestureViewForKey:(id)key;
-(void)_clearAllInstalledSystemGestureViews;
-(void)_installSystemGestureView:(id)view forKey:(id)key forGesture:(int)gesture;
-(id)systemGestureSnapshotOfSwitcher;
-(id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)app forRequester:(id)requester includeStatusBar:(BOOL)bar;
-(id)systemGestureSnapshotForApp:(id)app forRequester:(id)requester includeStatusBar:(BOOL)bar decodeImage:(BOOL)image;
-(void)showSystemGestureBackdrop;
-(void)hideSystemGestureBackdrop;
-(void)handleFluidScaleSystemGesture:(id)gesture;
-(void)handleFluidHorizontalSystemGesture:(id)gesture;
-(void)handleFluidVerticalSystemGesture:(id)gesture;
-(void)handleShowNotificationsSystemGesture:(id)gesture;
-(void)handleHideNotificationsSystemGesture:(id)gesture;
-(void)handleDismissBannerSystemGesture:(id)gesture;
-(void)noteInterfaceOrientationChanged;
-(void)notifyAppResignActive:(id)active;
-(void)notifyAppResumeActive:(id)active;
-(BOOL)shouldSendTouchesToSystemGestures;
-(void)animationStepperFinishBackwardToStartCompleted:(id)startCompleted;
-(void)cleanupRunningGestureIfNeeded;
-(BOOL)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;
-(void)_switcherGestureBegan;
-(void)_switcherGestureChanged:(float)changed;
-(void)_switcherGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
-(void)_switcherGestureCancelled;
-(void)_suspendGestureBegan;
-(void)_suspendGestureChanged:(float)changed;
-(void)_suspendGestureEndedWithCompletionType:(int)completionType;
-(void)_suspendGestureCancelled;
-(void)_addFakeCornersForSuspendGestureIfNeededForApp:(id)app cornerAlignment:(int)alignment;
-(void)_animateStatusBarForSuspendGesture;
-(id)_calculateSwitchAppList;
-(void)_clearSwitchAppList;
-(void)removeAppFromSwitchAppList:(id)switchAppList;
-(id)_makeSwitchAppValidList:(id)list;
-(void)_getSwitchAppPrefetchApps:(id)apps initialApp:(id)app outLeftwardAppIdentifier:(id*)identifier outRightwardAppIdentifier:(id*)identifier4;
-(id)_makeSwitchAppFilteredList:(id)list initialApp:(id)app;
-(void)_clearGestureViewVendorCacheForAppWithDisplayIdenitifier:(id)displayIdenitifier;
-(void)_prefetchAdjacentAppsAndEvictRemotes:(id)remotes;
-(void)_switchAppGestureBegan:(float)began;
-(void)_switchAppGestureChanged:(float)changed;
-(void)_switchAppGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
-(void)_switchAppGestureCancelled;
-(void)programmaticSwitchAppGestureApplyWithPercentage:(float)percentage;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)cleanupSwitchAppGestureViews;
-(BOOL)hasPendingAppActivatedByGesture;
-(void)clearPendingAppActivatedByGesture;
-(void)scheduleApplicationForLaunchByGesture:(id)launchByGesture;
-(void)launchPendingAppActivatedByGestureIfExists;
-(void)launchApplicationByGesture:(id)gesture;
-(void)_installSwitchAppGesturePlaceholderViewForEndingApp:(id)endingApp;
-(void)_switchAppGestureViewAnimationComplete;
-(void)_showNotificationsGestureBeganWithLocation:(CGPoint)location;
-(void)_showNotificationsGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
-(void)_showNotificationsGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
-(void)_showNotificationsGestureFailed;
-(void)_showNotificationsGestureCancelled;
-(void)updateShouldShowNotificationCenterTabControlOnFirstSwipe;
-(BOOL)shouldShowNotificationCenterTabControlOnFirstSwipe;
-(BOOL)isShowingNotificationCenterTabControl;
-(float)showNotificationsTabControlSwipableWidth;
-(void)_hideNotificationCenterTabControl;
-(void)_hideNotificationsGestureBegan:(float)began;
-(void)_hideNotificationsGestureChanged:(float)changed;
-(void)_hideNotificationsGestureEndedWithCompletionType:(int)completionType velocity:(CGPoint)velocity;
-(void)_hideNotificationsGestureCancelled;
-(void)_dismissBannerGestureEndedWithCompletionType:(int)completionType;
-(void)_makeSwitchAppGestureFakeStatusBarVisible;
-(void)prepareSwitchAppGestureStatusBar;
-(void)updateSwitchAppGestureStatusBar;
-(void)cleanupSwitchAppGestureStatusBar;
@end

