/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, UIImageView;

@interface SBNewsstandCardView : XXUnknownSuperclass {
	BOOL _skewed;
	BOOL _highlighted;
	BOOL _touchOnCard;
	UIImageView* _cardView;
	UIImageView* _textView;
	UIImageView* _overlayView;
	NSTimer* _delayedUnhighlightTimer;
}
+(id)_cachedImagePathForName:(id)name scale:(float)scale;
+(id)_cachedCardImagePath;
+(id)_cachedTextImagePath;
+(id)_cachedImageAtPath:(id)path;
+(id)_cachedCardImage;
+(id)_cachedTextImage;
+(void)_generatedCachedImages;
+(void)setupCache;
-(id)init;
-(void)dealloc;
-(CATransform3D)skewTransform;
-(void)setSkewed:(BOOL)skewed;
-(float)shadowPadding;
-(id)overlayImage;
-(void)_delayedUnhighlight;
-(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end
