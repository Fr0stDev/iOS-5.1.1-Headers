/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDefaultDateLabel.h"
#import "SBRelativeDateTimerDelegate.h"

@class SBRelativeDateTimer;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate> {
	SBRelativeDateTimer* _relativeDateTimer;
	unsigned _value;
	int _resolution;
	int _comparedToNow;
}
-(void)setTimeZoneRelativeStartDate:(id)date absoluteStartDate:(id)date2;
-(void)dealloc;
-(id)constructLabelString;
-(void)timerFiredWithValue:(unsigned)value forResolution:(int)resolution comparedToNow:(int)now;
@end

