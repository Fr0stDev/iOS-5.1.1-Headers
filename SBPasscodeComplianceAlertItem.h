/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBPasscodeComplianceAlertItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _message;
	NSString* _continueButtonTitle;
	NSString* _cancelButtonTitle;
}
-(id)initWithTitle:(id)title message:(id)message continueButtonTitle:(id)title3 cancelButtonTitle:(id)title4;
-(void)dealloc;
-(BOOL)shouldShowInLockScreen;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
@end

