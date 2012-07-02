/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUserInstalledApplicationIcon.h"

@class SBNewsstandApplication;

@interface SBNewsstandApplicationIcon : SBUserInstalledApplicationIcon {
	SBNewsstandApplication* _fakeApp;
}
+(id)iconOverlayImageForIcon:(id)icon inLocation:(int)location;
-(id)initWithApplication:(id)application;
-(void)dealloc;
-(BOOL)shouldWarmUp;
-(id)application;
-(BOOL)launchEnabled;
-(void)launch;
-(int)iconFormatForLocation:(int)location;
-(BOOL)iconAppearsInNewsstand;
-(id)getGenericIconImage:(int)image;
-(id)iconOverlayImageForLocation:(int)location;
-(BOOL)shouldCacheImageForFormat:(int)format;
-(id)badgeNumberOrString;
@end
