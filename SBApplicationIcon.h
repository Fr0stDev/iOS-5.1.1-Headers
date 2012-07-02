/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"

@class NSString;

@interface SBApplicationIcon : SBLeafIcon {
	NSString* _displayIdentifier;
	unsigned _appIsBeingCleaned : 1;
}
-(id)initWithApplication:(id)application;
-(void)dealloc;
-(id)application;
-(id)__loadIconImage:(id)image format:(int)format scale:(float)scale;
-(void)generateIconImageInBackground:(id)background;
-(void)generateIconImageInBackgroundForFormat:(int)format complete:(id)complete;
-(BOOL)canGenerateGhostlyImageInBackground;
-(id)generateIconImage:(int)image;
-(id)displayName;
-(id)leafIdentifier;
-(BOOL)canEllipsizeLabel;
-(id)tags;
-(id)automationID;
-(BOOL)launchEnabled;
-(void)_setAppIsBeingCleanedFlag;
-(void)_terminationAssertionDidChange;
-(void)launch;
-(void)launchFromViewSwitcher;
-(void)setBadge:(id)badge;
-(void)_setBadge:(id)badge;
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(id)applicationBundleID;
@end

