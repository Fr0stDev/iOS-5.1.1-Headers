/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBHUDView.h"


@interface SBVolumeHUDView : SBHUDView {
	int _mode;
	BOOL _headphonesPresent;
}
@property(assign, nonatomic) int mode;
@property(assign, nonatomic) BOOL headphonesPresent;
-(void)_updateImage;
-(void)_updateLabels;
-(id)init;
-(void)setProgress:(float)progress;
@end

