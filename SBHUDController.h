/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBHUDView, UIWindow;

@interface SBHUDController : XXUnknownSuperclass {
	UIWindow* _hudWindow;
	UIView* _hudContentView;
	SBHUDView* _hudView;
	int _orientation;
}
+(id)sharedHUDController;
-(void)dealloc;
-(void)_recenterHUDView;
-(void)reorientHUDIfNeeded:(BOOL)needed;
-(void)_createUI;
-(void)_tearDown;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_orderWindowOut:(id)anOut;
-(void)presentHUDView:(id)view;
-(void)presentHUDView:(id)view autoDismissWithDelay:(double)delay;
-(id)visibleHUDView;
-(void)hideHUDView;
@end

