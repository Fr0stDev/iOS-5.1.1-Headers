/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIWindow;

@interface SBScreenFlash : XXUnknownSuperclass {
	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;
}
+(id)sharedInstance;
-(void)dealloc;
-(void)_createUIWithColor:(id)color;
-(void)_tearDown;
-(void)_orderWindowOut:(id)anOut;
-(void)_orderWindowFront:(id)front withColor:(id)color;
-(void)stopFlash;
-(void)flash;
-(void)flashColor:(id)color;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
@end

