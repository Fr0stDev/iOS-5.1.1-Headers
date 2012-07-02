/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class CALayer, CADisplayLink;
@protocol SBAssistantMicButtonProtocol;

@interface SBAssistantMicButtonView : XXUnknownSuperclass {
	id<SBAssistantMicButtonProtocol> _delegate;
	CALayer* _pressedImageLayer;
	CALayer* _micImageLayer;
	CALayer* _animatingLayer;
	CALayer* _fullRingLayer;
	int _mode;
	int _phase;
	CADisplayLink* _displayLink;
	float _runningPowerLevels[5];
	unsigned _powerPointer;
}
@property(assign, nonatomic) id<SBAssistantMicButtonProtocol> delegate;
@property(assign, nonatomic) int mode;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setHighlighted:(BOOL)highlighted;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(id)_emptyMicImage;
-(id)_fullMicImage;
-(id)_micFullImageForPower:(float)power;
-(id)_micPowerImageForPower:(float)power;
-(id)_currentMicPowerImage;
-(void)_reset;
-(float)_updateMedianWithNewValue:(float)newValue;
-(float)_powerLevelForMicPower:(float)micPower;
-(float)_currentMicPowerLevel;
-(id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;
-(id)_beginningKeyFrameAnimation;
-(id)_listeningBeginKeyFrameAnimation;
-(id)_listeningEndKeyFrameAnimation;
-(id)_thinkingBeginKeyFrameAnimation;
-(id)_thinkingBeginRingKeyFrameAnimation;
-(id)_thinkingMicAnimation;
-(id)_thinkingRingAnimation;
-(id)_thinkingEndRingAnimationFromAngle:(float)angle;
-(id)_thinkingEndRingAnimationKeyframe;
-(id)_thinkingEndFlashAnimation;
-(void)_handleBeginning;
-(void)_handleListeningStart;
-(void)_handleListeningBegin;
-(void)_displayLinkCallback:(id)callback;
-(void)_clearDisplayLink;
-(void)_handleListening;
-(void)_handleListeningEnd;
-(void)_handleThinkingBegin;
-(void)_handleThinkingEnd;
-(void)_removeAnimationsAndClearLayers;
-(float)_adjustedDuration:(float)duration;
-(double)_animationInterval;
-(BOOL)_isSuitableStoppingPhase:(int)phase;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
@end
