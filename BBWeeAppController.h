/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol BBWeeAppController <NSObject>
-(id)view;
@optional
-(float)viewHeight;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)viewDidDisappear;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)loadPlaceholderView;
-(void)loadFullView;
-(void)unloadView;
-(void)clearShapshotImage;
-(void)loadView;
-(id)launchURL;
-(id)launchURLForTapLocation:(CGPoint)tapLocation;
@end

