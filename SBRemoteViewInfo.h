/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBProxyRemoteView, NSString, SBApplication;

@interface SBRemoteViewInfo : XXUnknownSuperclass {
	NSString* _remoteViewIdentifier;
	SBProxyRemoteView* _proxyRemoteView;
	unsigned _contextID;
	SBApplication* _application;
	CGSize _viewSize;
}
@property(retain, nonatomic) NSString* remoteViewIdentifier;
@property(assign, nonatomic) unsigned contextID;
@property(retain, nonatomic) SBProxyRemoteView* proxyRemoteView;
@property(retain, nonatomic) SBApplication* application;
@property(assign, nonatomic) CGSize viewSize;
-(void)dealloc;
@end

