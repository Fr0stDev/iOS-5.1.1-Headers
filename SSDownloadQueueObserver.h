/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SSDownloadQueueObserver <NSObject>
-(void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
@optional
-(void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(int)index;
-(void)downloadQueueNetworkUsageChanged:(id)changed;
@end

