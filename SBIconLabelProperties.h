/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface SBIconLabelProperties : XXUnknownSuperclass <NSCopying> {
	NSString* _text;
	NSString* _labelClassString;
	BOOL _ellipsize;
	BOOL _inDock;
	BOOL _onWallpaper;
	CGSize _size;
	BOOL _appearsInDock;
	BOOL _appearsOnWallpaper;
}
@property(retain, nonatomic) NSString* text;
@property(assign, nonatomic) BOOL ellipsize;
@property(assign, nonatomic) BOOL appearsInDock;
@property(assign, nonatomic) BOOL appearsOnWallpaper;
@property(assign, nonatomic) CGSize size;
@property(assign, nonatomic) Class labelClass;
-(id)labelClassString;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
@end

