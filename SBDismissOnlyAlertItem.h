/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBDismissOnlyAlertItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _body;
	NSString* _buttonTitle;
	double _autoDismissInterval;
}
@property(copy, nonatomic) NSString* buttonTitle;
-(id)initWithTitle:(id)title body:(id)body;
-(void)dealloc;
-(double)autoDismissInterval;
-(void)setAutoDismissInterval:(double)interval;
-(void)setTitle:(id)title;
-(void)setBodyText:(id)text;
-(id)title;
-(id)bodyText;
-(void)performUnlockAction;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
@end

