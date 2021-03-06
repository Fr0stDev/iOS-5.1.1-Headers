/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class UITextView, NSString;

@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UITextView* _textView;
	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	float _alertHeight;
}
+(id)activeItem;
-(id)init;
-(void)dealloc;
-(void)didPresentAlertView:(id)view;
-(void)_updateTextView;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_simStatusChanged:(id)changed;
-(void)willActivate;
-(void)didDeactivateForReason:(int)reason;
-(BOOL)forcesModalAlertAppearance;
-(void)cleanPreviousConfiguration;
-(BOOL)allowInSetup;
@end

