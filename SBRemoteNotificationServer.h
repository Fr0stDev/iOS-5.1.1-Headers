/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "APSConnectionDelegate.h"

@class NSMutableDictionary, NSString;

@interface SBRemoteNotificationServer : XXUnknownSuperclass <APSConnectionDelegate> {
	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _environmentsToConnections;
	NSString* _lastNotificationReceivedBundleIdentifier;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)run;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)noteApplicationFinishedLaunching:(id)launching;
-(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
-(id)lastNotificationReceivedBundleIdentifier;
-(id)allAppEnabledTypeValues;
-(id)allSettingsEnabledTypeValues;
-(void)calculateTopics;
-(void)registerApplication:(id)application forEnvironment:(id)environment withTypes:(int)types;
-(void)unregisterApplication:(id)application;
-(int)getEffectiveEnabledTypesForApplication:(id)application;
-(BOOL)isSystemwideEnabled;
-(void)setSystemwideEnabled:(BOOL)enabled;
-(BOOL)hasRegisteredBundleIdentifiers;
-(void)notePermissionAlertAcceptedTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;
-(int)appEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
-(int)settingsEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
-(void)setSettingsTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;
-(void)postSettingsChangedNotificationForBundleIdentifier:(id)bundleIdentifier;
-(void)setMessageUserInfo:(id)info forBundleIdentifier:(id)bundleIdentifier;
-(id)getMessageUserInfoForBundleIdentifier:(id)bundleIdentifier;
-(id)_allPushRegisteredThirdPartyBundleIDs;
@end

