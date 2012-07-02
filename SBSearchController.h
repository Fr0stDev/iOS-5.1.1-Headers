/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "UISearchBarDelegate.h"

@class SBSearchView;

@interface SBSearchController : XXUnknownSuperclass <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
	SBSearchView* _searchView;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	void* _addressBook;
}
@property(retain, nonatomic) SBSearchView* searchView;
-(id)init;
-(void)dealloc;
-(void)updateResultsIfNecessary;
-(void)controllerWasDeactivated;
-(void)scrollViewIsScrollingHorizontallyInSearchView;
-(BOOL)_hasSearchResults;
-(BOOL)shouldShowKeyboardOnScroll;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)_populateCell:(id)cell withSearchResult:(id)searchResult;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_deselect;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_tableViewDidFadeOut:(id)_tableView finished:(id)finished context:(void*)context;
-(void)_updateTableContents;
-(void)_updateResults:(id)results;
-(void)_clearResultsString:(id)string;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(id)_auxiliaryTitleForABRecordID:(int)abrecordID;
@end

