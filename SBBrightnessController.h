/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBBrightnessController : XXUnknownSuperclass {
	BOOL _debounce;
}
+(id)sharedBrightnessController;
-(float)_calcButtonRepeatDelay;
-(void)adjustBacklightLevel:(BOOL)level;
-(void)_setBrightnessLevel:(float)level showHUD:(BOOL)hud;
-(void)setBrightnessLevel:(float)level;
-(void)increaseBrightnessAndRepeat;
-(void)decreaseBrightnessAndRepeat;
-(void)handleBrightnessEvent:(GSEventRef)event;
-(void)cancelBrightnessEvent;
@end
