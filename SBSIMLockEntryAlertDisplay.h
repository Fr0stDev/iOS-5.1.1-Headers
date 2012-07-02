/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"

@class NSString;

@interface SBSIMLockEntryAlertDisplay : SBSlidingAlertDisplay {
	NSString* _languageCode;
	NSString* _code;
}
-(id)initWithFrame:(CGRect)frame languageCode:(id)code;
-(void)dealloc;
-(id)localizedStringWithKey:(id)key;
-(id)_pinAttemptsRemainingLabel;
-(BOOL)alphanumericKeyboard;
-(void)setupUnlockAttemptState;
-(id)failureTitle;
-(id)failureLabel;
-(void)setupFailureState;
-(id)titleText;
-(id)label;
-(void)setupCurrentLockAttemptState;
-(int)requiredUnlockStyle;
-(BOOL)shouldShowEmergencyCallButton;
-(void)alertDisplayWillBecomeVisible;
-(void)setupSuccess;
-(void)_unlock;
-(void)unlock;
-(void)deviceLockViewPasscodeEntered:(id)entered;
-(void)deviceLockViewCancelButtonPressed:(id)pressed;
@end

