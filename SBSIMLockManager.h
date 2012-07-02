/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "RadiosPreferencesDelegate.h"

@class NSString, RadiosPreferences, SBSIMLockAlertItem, SBSIMLockEntryAlert;

@interface SBSIMLockManager : XXUnknownSuperclass <RadiosPreferencesDelegate> {
	BOOL _isInitialUpdate;
	BOOL _isBrickedDevice;
	int _status;
	SBSIMLockAlertItem* _currentAlert;
	SBSIMLockEntryAlert* _lockEntryAlert;
	NSString* _languageCode;
	RadiosPreferences* _radiosPrefs;
	BOOL _hasHadSIMWhileNotBricked;
	BOOL _wasActivated;
	BOOL _neededUIM;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_hopelesslyPUKLocked;
-(int)_CTToSBSIMStatus:(CFStringRef)sbsimstatus;
-(int)_statusFromCT;
-(void)lockEntryAlertDismissed:(id)dismissed;
-(void)alertItemDismissed:(id)dismissed;
-(BOOL)_shouldSuppressAlert;
-(void)_displayLaunched:(id)launched;
-(void)repopAlert;
-(void)attemptUnlock;
-(void)_updateToStatus:(int)status;
-(void)_tryToUpdateStatus;
-(void)airplaneModeChanged;
-(void)_handlePromptForUnlock;
-(void)_tearDownAlertAndUpdateStatus;
-(void)_updateSIMStatus:(CFStringRef)status withOptions:(CFDictionaryRef)options;
-(int)pinLockAttemptsRemaining;
-(int)pukLockAttemptsRemaining;
-(void)_initialUpdate;
-(void)_activationDidChange;
-(void)_telephonyDidRestart;
-(void)_postponementDidChange;
-(void)registerForAlerts;
-(int)status;
-(id)languageCode;
@end

