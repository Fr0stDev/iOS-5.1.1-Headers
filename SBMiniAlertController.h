/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIWindow, UIView, SBApplication;

@interface SBMiniAlertController : XXUnknownSuperclass {
	SBApplication* _displayShowingAnAlert;
	UIWindow* _dimmingWindow;
	unsigned _sbMiniAlertVisible : 1;
	unsigned _showDimmingWindowAfterAlertsDismissed : 1;
	UIView* _hiddenAlertWindow;
	CGAffineTransform _dimmingWindowTranslation;
	int _dimmingWindowOrientation;
	UIView* _overrideDimmingParent;
	UIView* _dimmingContentView;
	CGAffineTransform _dimmingViewTranslation;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)dimImageForKeyboard:(BOOL)keyboard;
-(void)showDimmingWindow;
-(void)finishedAnimatingDimWindowOut:(id)anOut didFinish:(id)finish;
-(void)cancelHideDimmingWindow;
-(void)hideDimmingWindowAfterDelay;
-(void)hideDimmingWindow;
-(void)replaceDimmingWindowWithParent:(id)parent;
-(void)restoreDimmingViewToDimmingWindow;
-(void)applyTranslationToDimmingWindow:(CGAffineTransform)dimmingWindow;
-(void)applyTranslationToDimmingView:(CGAffineTransform)dimmingView;
-(void)rotateDimmingWindowToOrientation:(int)orientation;
-(void)deactivateAlertItemsForDisplay:(id)display;
-(void)_setDisplayShowingAnAlert:(id)alert;
-(void)displayWillShowMiniAlert:(id)display fenceId:(unsigned)anId;
-(id)displayShowingAnAlert;
-(void)displayWillDismissMiniAlert:(id)display andShowAnother:(BOOL)another fenceId:(unsigned)anId;
-(void)displayDidDismissMiniAlert:(id)display;
-(void)showApplicationMiniAlertsIfNeeded;
-(void)hideApplicationMiniAlerts;
-(void)noteMiniAlertStateChanged;
-(void)hideAlertWindowForFullscreenAlertActivation:(id)fullscreenAlertActivation;
-(void)noteFullscreenAlertsDismissed;
-(BOOL)isHidingAlertWindow;
-(BOOL)miniAlertVisible;
-(BOOL)canShowAlerts;
@end

