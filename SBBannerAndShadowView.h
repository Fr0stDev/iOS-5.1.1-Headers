/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBBannerView, UIImageView, UIView;

@interface SBBannerAndShadowView : XXUnknownSuperclass {
	SBBannerView* _banner;
	UIImageView* _shadow[5];
	CGRect _shadowFrame[5];
	CGSize _bannerSize;
	float _sideWidth;
	float _bottomHeight;
	BOOL _shadowsInPortraitWindow;
	UIView* _rollerContainer;
	UIImageView* _roller;
}
-(id)initWithBanner:(id)banner;
-(void)dealloc;
-(id)banner;
-(void)replaceBannerWithBanner:(id)banner;
-(void)setBannerFrame:(CGRect)frame;
-(BOOL)_showsSideShadows;
-(CGRect)_frameForBannerFrame:(CGRect)bannerFrame;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_layoutSubviews;
-(void)moveShadowsToPortraitWindow:(id)portraitWindow fromOrientation:(int)orientation;
-(void)pullShadowsBack;
-(void)setShadowAlpha:(float)alpha;
-(void)prepareRoller;
-(void)setRollerProgress:(float)progress;
-(void)clearRoller;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
@end

