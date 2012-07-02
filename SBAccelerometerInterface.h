/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSLock;

@interface SBAccelerometerInterface : XXUnknownSuperclass {
	NSLock* _lock;
	double _samplingInterval;
	double _topDisplayLastUpdateTime;
	double _topDisplayInterval;
	NSMutableArray* _clients;
	BOOL _springBoardWantsEvents;
}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateSettings;
-(void)clientRequestedAccelerometerEvents:(unsigned)events updateInterval:(double)interval xThreshold:(float)threshold yThreshold:(float)threshold4 zThreshold:(float)threshold5 auditToken:(XXStruct_kUSYWB*)token;
-(void)setSpringBoardWantsEvents:(BOOL)events;
-(void)_clientInvalidated:(id)invalidated;
-(void)accelerometerDataReceived:(double)received x:(float)x y:(float)y z:(float)z type:(unsigned)type;
@end

