/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITableView, AFUIServerUtteranceView, AFUIUtteranceView, UIImageView, UILabel, UIView, NSString, UIButton;

@interface SBAssistantTourGuideView : XXUnknownSuperclass {
	AFUIServerUtteranceView* _utteranceView;
	UIView* _clippingView;
	UIImageView* _backgroundView;
	UITableView* _domainTableView;
	UITableView* _sectionTableView;
	UIImageView* _topLineView;
	UIImageView* _bottomLineView;
	UIImageView* _topShadow;
	UIImageView* _bottomShadow;
	UIButton* _backButton;
	UILabel* _domainLabel;
	NSString* _serverUtteranceText;
	BOOL _sectionShowing;
	int _mode;
}
@property(readonly, assign, nonatomic) AFUIUtteranceView* utteranceView;
@property(readonly, assign, nonatomic) UITableView* domainTableView;
@property(readonly, assign, nonatomic) UITableView* sectionTableView;
@property(readonly, assign, nonatomic) UIButton* backButton;
@property(assign, nonatomic) int mode;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(float)utteranceHeight;
-(void)_updateUtteranceText;
-(void)setUtteranceText:(id)text;
-(void)showDisplay:(int)display;
-(void)setDomainName:(id)name;
-(void)setFrame:(CGRect)frame;
@end

