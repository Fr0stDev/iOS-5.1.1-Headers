/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBHarmonicOscillator : XXUnknownSuperclass {
	float A;
	float Z;
	float k;
	float dk;
	float mink;
	float m;
	float dm;
	float minm;
	float psi_n;
	float psi_d;
	float zeta;
}
@property(assign, nonatomic) float startingAmplitude;
@property(assign, nonatomic) float endingAmplitude;
@property(assign, nonatomic) float springStrength;
@property(assign, nonatomic) float springDecay;
@property(assign, nonatomic) float minimumSpringStrength;
@property(assign, nonatomic) float mass;
@property(assign, nonatomic) float massDecay;
@property(assign, nonatomic) float minimumMass;
-(id)init;
-(void)setSpringConstant:(float)constant;
-(void)updateParameters;
-(float)amplitudeForElapsedTime:(double)elapsedTime;
@end
