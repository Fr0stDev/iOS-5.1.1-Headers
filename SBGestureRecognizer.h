/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SBGestureRecognizer : XXUnknownSuperclass {
	int m_types;
	int m_state;
	id m_handler;
	unsigned m_activeTouchesCount;
	XXStruct_DSYOgA m_activeTouches[30];
	unsigned m_strikes;
	unsigned m_templateMatches;
	NSMutableArray* m_touchTemplates;
	BOOL m_includedInGestureRecognitionIsPossibleTest;
	BOOL m_sendsTouchesCancelledToApplication;
	id m_canBeginCondition;
}
@property(assign, nonatomic) int types;
@property(assign, nonatomic) int state;
@property(copy, nonatomic) id handler;
@property(assign, nonatomic) BOOL includedInGestureRecognitionIsPossibleTest;
@property(assign, nonatomic) BOOL sendsTouchesCancelledToApplication;
@property(copy, nonatomic) id canBeginCondition;
-(id)init;
-(void)dealloc;
-(BOOL)shouldReceiveTouches;
-(void)reset;
-(void)sendTouchesCancelledToApplicationIfNeeded;
-(void)addTouchTemplate:(id)aTemplate;
-(int)templateMatch;
-(void)touchesBegan:(SBGestureContextRef)began;
-(void)touchesMoved:(SBGestureContextRef)moved;
-(void)touchesEnded:(SBGestureContextRef)ended;
-(void)touchesCancelled:(SBGestureContextRef)cancelled;
@end

