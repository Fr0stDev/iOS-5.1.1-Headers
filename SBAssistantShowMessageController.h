/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AFUIUtteranceView, NSString;

@interface SBAssistantShowMessageController : XXUnknownSuperclass {
	NSString* _text;
	AFUIUtteranceView* _view;
}
@property(retain, nonatomic) NSString* text;
+(id)utteranceWithText:(id)text;
-(id)initWithAceObject:(id)aceObject delegate:(id)delegate;
-(void)dealloc;
-(id)speakableTextForLanguageCode:(id)languageCode;
-(id)view;
@end

