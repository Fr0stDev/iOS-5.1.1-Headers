/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImageView;

@interface SBDownloadingProgressBar : XXUnknownSuperclass {
	UIImageView* _clipView;
	UIImageView* _fillView;
	float _progress;
}
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)trackImage;
-(id)fillImage;
-(void)setProgress:(float)progress;
-(float)progress;
-(void)updateFill;
@end

