/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBCallFailureAlertItem : XXUnknownSuperclass {
	int _causeCode;
	NSString* _address;
	CTCallRef _call;
}
-(id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
-(void)dealloc;
-(void)_callback;
-(id)lockLabel;
-(id)shortLockLabel;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)performUnlockAction;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end
