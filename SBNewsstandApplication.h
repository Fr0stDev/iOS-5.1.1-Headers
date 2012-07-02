/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBApplication.h"


@interface SBNewsstandApplication : SBApplication {
	BOOL _isMagazineApp;
	BOOL _iconIsBoundOnRight;
	unsigned char _newsstandWakes;
	unsigned _lastPostedState;
}
@property(readonly, assign, nonatomic) BOOL isMagazineApp;
@property(readonly, assign, nonatomic) BOOL iconIsBoundOnRight;
-(id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
-(BOOL)isNewsstandApplication;
-(Class)iconClass;
-(void)activate;
-(void)_sendApplicationStateChangedNotification:(unsigned)notification;
-(void)process:(id)process didAddAssertion:(id)assertion;
-(void)resumeForContentAvailable;
-(BOOL)isFakeApp;
-(BOOL)hasReachedWakeQuota;
@end

