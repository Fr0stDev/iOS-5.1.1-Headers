/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"

@class NSDate, PCPersistentTimer, SBUIController, SBAwayBulletinListController, SBApplication, NSTimeZone, SBAlertItem, _UIDynamicValueAnimation, UIView, PLCameraPageController, UIImageView, NSTimer, NSMutableDictionary, SBAwayView, NSDictionary, SBShowcaseController, NSString, NSMutableArray;
@protocol SBDeviceLockViewOwner;

@interface SBAwayController : SBAlert {
	SBUIController* _uiController;
	SBShowcaseController* _showcaseController;
	SBAwayView* _awayView;
	NSTimer* _dimTimer;
	unsigned _isLocked : 1;
	unsigned _isUnlocking : 1;
	unsigned _isActivatingBacklightForUnlock : 1;
	unsigned _isDeviceLocked : 1;
	unsigned _isDeviceLockedInitialized : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _isPermanentlyBlocked : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _showOverheatUI : 1;
	unsigned _performingAutoUnlock : 1;
	unsigned _springBoardIdleTimerScheduled : 1;
	unsigned _validPhotoCountCheck : 1;
	unsigned _showcaseAnimating : 1;
	unsigned _hasBeenLockedOnce : 1;
	int _unlockSource;
	NSDictionary* _nowPlayingInfo;
	SBApplication* _nowPlayingApp;
	id<SBDeviceLockViewOwner> _deviceUnlockDisplay;
	double _deviceLockBlockTime;
	double _lastLockWallTime;
	NSTimeZone* _lastLockTimeZone;
	double _lastLockSecondsSinceBoot;
	PCPersistentTimer* _deviceLockTimer;
	BOOL _devicePasscodeLoaded;
	NSString* _devicePasscode;
	BOOL _chargingViewHasFadedOut;
	NSMutableArray* _pendingAlertItems;
	SBAlertItem* _currentAlertItem;
	SBAwayBulletinListController* _savedBulletinController;
	NSMutableDictionary* _awayViewPluginControllers;
	NSString* _alwaysFullscreenAwayPluginName;
	NSMutableArray* _lockScreenBundlesToDisableAfterUnlock;
	BOOL _cameraModeActive;
	BOOL _cameraVisible;
	BOOL _animatingCameraIn;
	_UIDynamicValueAnimation* _dynamicCameraAnimation;
	BOOL _cancelCameraAnimation;
	PLCameraPageController* _cameraViewController;
	UIImageView* _cameraDefaultImageView;
	UIView* _cameraBackgroundView;
	UIView* _cameraContainerView;
	UIView* _cameraSlidingSnapshotView;
	UIView* _cameraSlidingContainerView;
	BOOL _dimTimerDisabledForCamera;
	BOOL _exitingCameraToPasscodeUI;
	NSDate* _lastCameraSessionID;
	BOOL _exitedCameraForAlert;
	BOOL _restartCameraAfterCall;
	BOOL _disableGracePeriodForCamera;
	dispatch_queue_s* _prewarmQueue;
	int _gracePeriodWhenLocked;
	NSString* _currentTestName;
}
@property(assign, nonatomic) BOOL chargingViewHasFadedOut;
@property(retain, nonatomic) SBShowcaseController* showcaseController;
@property(retain, nonatomic) NSString* currentTestName;
@property(readonly, assign) BOOL hasEverBeenLocked;
@property(readonly, assign) NSDate* lastLockDate;
+(id)sharedAwayController;
+(id)sharedAwayControllerIfExists;
+(void)registerForAlerts;
-(id)initWithUIController:(id)uicontroller;
-(CGRect)alertWindowRect;
-(BOOL)showsSpringBoardStatusBar;
-(float)finalAlpha;
-(BOOL)undimsDisplay;
-(id)awayView;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)alertDisplayWillBecomeVisible;
-(void)_prewarmCamera;
-(void)_cancelCameraPrewarm;
-(void)_setupCameraSlideUpAnimation;
-(void)_cleanupFromCameraPanGesture;
-(void)_cleanupFromCanceledCameraDismissGesture;
-(void)_setupCameraSlideDownAnimation;
-(void)_translateSlidingViewByY:(float)y;
-(id)_dynamicAnimationForCameraStart:(BOOL)cameraStart targetValue:(double)value withInitialVelocity:(double)initialVelocity;
-(void)_handleCameraPanGestureEndedWithVelocity:(float)velocity;
-(void)handleCameraPanGesture:(id)gesture;
-(void)handleCameraTapGesture:(id)gesture;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)_createCameraViewControllerWithNewSessionID:(BOOL)newSessionID;
-(void)_createCameraViewControllerWithNewSessionID;
-(void)_createCameraViewControllerWithOldSessionID;
-(void)activateCameraWithNewSessionID:(BOOL)newSessionID afterCall:(BOOL)call duringPan:(BOOL)pan;
-(void)activateCamera;
-(void)_activateCameraAfterCall;
-(void)_tearDownCameraPreview;
-(BOOL)allowDismissCameraSystemGesture;
-(void)handleDismissCameraSystemGesture:(id)gesture;
-(void)dismissCameraAnimated:(BOOL)animated;
-(void)_setCameraAsWindowDelegate;
-(void)_restoreWindowOrientationAndDelegate;
-(void)tearDownCameraUIImmediately;
-(BOOL)cameraIsActive;
-(BOOL)cameraIsVisible;
-(BOOL)cameraIsInPreviewMode;
-(void)takePicture;
-(id)cameraBackgroundViewIfOnscreen;
-(void)activateAssistantWithOptions:(id)options withCompletion:(id)completion;
-(BOOL)_activateAssistantWithOptions:(id)options;
-(BOOL)expectsFaceContact;
-(void)_deactivateAssistantShowcaseClearingOwner:(BOOL)owner;
-(void)_deactivateAssistantShowcase;
-(void)_dismissAssistantImmediately;
-(void)_dismissAssistant;
-(void)deactivateAssistant;
-(void)simulateDeactivateAssistant;
-(void)_blockingViewHit:(id)hit;
-(void)_releaseAwayView;
-(void)reactivatePendingAlertItemsWithBulletinController:(id)bulletinController;
-(void)reactivatePendingAlertItems;
-(void)playLockSound;
-(void)_sendLockStateChangedNotification;
-(BOOL)showOverheatUI;
-(void)setShowOverheatUI:(BOOL)ui;
-(void)_pendAlertItem:(id)item;
-(void)lock;
-(id)pendingAlertItems;
-(void)showTestBulletin;
-(BOOL)performingAutoUnlock;
-(void)_unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock unlockSource:(int)source;
-(void)_unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
-(void)screensaverDidFadeToBlack:(id)screensaver finished:(id)finished context:(void*)context;
-(void)unlockWithSound:(BOOL)sound lockOwner:(id)owner isAutoUnlock:(BOOL)unlock unlockSource:(int)source;
-(void)unlockWithSound:(BOOL)sound lockViewOwner:(id)owner;
-(void)unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock unlockSource:(int)source;
-(void)unlockFromSource:(int)source playSound:(BOOL)sound lockViewOwner:(id)owner;
-(void)unlockFromSource:(int)source playSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
-(void)unlockFromSource:(int)source playSound:(BOOL)sound;
-(void)unlockWithSound:(BOOL)sound;
-(BOOL)isPasswordProtected;
-(void)activationChanged:(id)changed;
-(BOOL)isDeviceLocked;
-(BOOL)isDeviceLockedOrBlocked;
-(void)setDeviceLocked:(BOOL)locked;
-(int)_getGracePeriod;
-(void)_markLockTime;
-(BOOL)_shouldLockDeviceWithCurrentGracePeriod:(int)currentGracePeriod;
-(void)_updateDeviceLockedState;
-(void)clearDeviceLockedTimer;
-(void)applicationRequestedDeviceUnlock;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)_syncingBegan:(id)began;
-(void)clearBlockedStateAndUpdateUI:(BOOL)ui;
-(BOOL)isBlocked;
-(BOOL)isPermanentlyBlocked:(double*)blocked;
-(double)idleDimDuration;
-(void)noteSpringBoardIdleTimerScheduled:(BOOL)scheduled;
-(void)noteResetRestoreStateChanged;
-(BOOL)isLocked;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)shouldShowLockStatusBarIcon;
-(void)_photoLibraryChanged;
-(BOOL)deviceHasPhotos;
-(BOOL)hasPhotosDevicesAttached;
-(BOOL)shouldShowSlideshowButton;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)frontLockedAnimationFinished;
-(BOOL)shouldAnimateOtherDisplaysSuspension;
-(BOOL)shouldAnimateOtherDisplaysResumption;
-(void)printLockLog;
-(void)frontLocked:(BOOL)locked withAnimation:(int)animation automatically:(BOOL)automatically disableLockSound:(BOOL)sound;
-(void)_lockFeaturesForRemoteLock:(BOOL)remoteLock;
-(void)remoteLock:(BOOL)lock;
-(void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
-(void)attemptUnlockFromSource:(int)source;
-(void)attemptUnlock;
-(BOOL)_isAccessoryActive;
-(BOOL)isLockedAndUndimmed;
-(BOOL)isLockedAndInactive;
-(BOOL)isActivatingBacklightForUnlock;
-(void)_finishedUnlockAttemptWithStatus:(BOOL)status;
-(void)noteStartingPhoneCallWhileLocked;
-(void)cancelReturnToCameraAfterCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)prepareToReturnFromCall;
-(void)cleanupFromPhoneCallIfNeeded;
-(id)activeOrPendingBulletinController;
-(BOOL)awayBulletinControllerIsActive;
-(id)restoreFromSavedBulletinController;
-(double)_undimInterval;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password lockViewOwner:(id)owner;
-(void)cancelDimTimer;
-(void)restartDimTimer;
-(void)restartDimTimer:(float)timer;
-(id)dimTimer;
-(BOOL)isDimmed;
-(void)finishedDimmingScreen;
-(void)notePasscodeGracePeriodMayHaveChanged;
-(void)dimTimerFired;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
-(void)allowIdleSleep;
-(void)preventIdleSleep;
-(void)preventIdleSleepForNumberOfSeconds:(float)seconds;
-(void)dimScreen:(BOOL)screen;
-(int)interfaceOrientationForActivation;
-(void)undimScreen;
-(void)updateOrientationForUndim;
-(void)userEventOccurred;
-(BOOL)handleKeyEvent:(GSEventRef)event;
-(void)activate;
-(void)deactivate;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(int)effectiveStatusBarStyle;
-(int)statusBarStyle;
-(int)statusBarStyleOverridesToCancel;
-(void)orderOut;
-(void)didFinishAnimatingOut;
-(void)updateNowPlayingInfo:(id)info app:(id)app;
-(void)updateAwayViewNowPlayingInfo;
-(void)_nowPlayingAppChanged:(id)changed;
-(void)_nowPlayingStateChanged:(id)changed;
-(void)_iapExtendedModeChanged:(id)changed;
-(void)handleRequestedAlbumArt:(id)art;
-(void)updateClockFormat;
-(void)makeEmergencyCall;
-(void)emergencyCallWasDisplayed;
-(void)emergencyCallWasRemoved;
-(BOOL)isMakingEmergencyCall;
-(void)didAnimateLockKeypadIn;
-(void)didAnimateLockKeypadOut;
-(id)currentAlertItem;
-(void)pendOrDeactivateCurrentAlertItem;
-(BOOL)activateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(void)deactivateAlertItem:(id)item;
-(void)updateInCallUI;
-(BOOL)shouldShowInCallUI;
-(void)_batteryStatusChanged;
-(BOOL)isShowingMediaControls;
-(void)hideMediaControls;
-(BOOL)toggleMediaControls;
-(BOOL)toggleCameraButton;
-(void)toggleShowsIMEIandICCID:(id)iccid;
-(BOOL)isAwayPluginViewVisible;
-(id)highestPriorityAwayPluginController;
-(id)activeAwayPluginController;
-(id)interfaceControllingAwayPluginController;
-(id)nameOfPluginController:(id)pluginController;
-(void)enableLockScreenBundleWithName:(id)name;
-(void)disableLockScreenBundleWithName:(id)name;
-(void)pluginVisiblityStateChanged:(id)changed;
-(void)_disablePluginControllersForLock;
-(void)_disablePluginControllersForUnlock;
-(void)_awayViewFinishedAnimatingOut:(id)anOut;
-(void)_assistantVisibilityChanged:(id)changed;
-(void)disablePluginContainerNotification:(id)notification;
-(void)pluginFullscreenNotification:(id)notification;
-(BOOL)awayPluginControllerShouldAnimateOthersResumption;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(void)hardwareKeyboardAvailabilityChanged;
-(BOOL)handleSlideshowHardwareButton;
-(void)setAlwaysFullscreenAwayPluginName:(id)name;
-(BOOL)isAlwaysFullscreenAwayPluginEnabled;
-(void)enableAlwaysFullscreenAwayPlugin;
-(void)unlockAlwaysFullscreenAwayView;
-(void)updateInterfaceIfNecessary;
-(void)startLockSliderAnimations;
-(void)stopLockSliderAnimations;
-(void)updateLockSlider;
-(void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)deviceLockOwnerSetShowingDeviceLock;
-(void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)deviceLockOwnerSetShowingDeviceLock animated:(BOOL)animated;
-(void)_sendToDeviceLockOwnerDeviceUnlockSucceeded;
-(void)_sendToDeviceLockOwnerDeviceUnlockFailed;
-(BOOL)_sendToDeviceLockOwnerIsDisplayingErrorStatus;
-(BOOL)_sendToDeviceLockOwnerShouldUseTransparentStatusBar;
-(void)_sendToDeviceLockOwnerAnimateToEmergencyCall;
-(void)assistantWantsToBeFullyRevealed:(id)beFullyRevealed withBlock:(id)block;
-(void)_defferedFullyRevealed:(id)revealed;
-(void)assistantWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;
-(double)assistantFullRevealDuration:(id)duration;
-(void)_irisOpened;
-(void)runUnlockTest:(id)test options:(id)options;
@end
