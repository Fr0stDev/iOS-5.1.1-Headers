/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexPath;

@interface SBIconIndexPath : XXUnknownSuperclass {
	NSIndexPath* _listIndexes;
	NSIndexPath* _iconIndexes;
}
@property(retain, nonatomic) NSIndexPath* listIndexes;
@property(retain, nonatomic) NSIndexPath* iconIndexes;
+(id)indexPathWithIconIndex:(unsigned)iconIndex;
+(id)indexPathWithIconIndex:(unsigned)iconIndex listIndex:(unsigned)index;
-(void)dealloc;
-(void)pushListIndex:(unsigned)index;
-(void)pushIconIndex:(unsigned)index;
-(unsigned)popListIndex;
-(unsigned)popIconIndex;
-(unsigned)outermostListIndex;
-(unsigned)outermostIconIndex;
-(id)indexPathByPoppingOutermostListAndIconIndexes;
-(id)indexPathByPushingOutermostListIndex:(unsigned)index iconIndex:(unsigned)index2;
-(BOOL)isEmpty;
-(id)description;
-(id)_listIndexes;
-(id)_iconIndexes;
-(BOOL)isEqualToIndexPath:(id)indexPath;
@end

