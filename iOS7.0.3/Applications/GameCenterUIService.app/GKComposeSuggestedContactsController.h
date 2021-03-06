/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol GKComposeSuggestedContactsControllerDelegate;
@class NSArray, UITableView;

@interface GKComposeSuggestedContactsController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _searchResultItems;
	<GKComposeSuggestedContactsControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <GKComposeSuggestedContactsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITableView * searchResultsTable; 
@property (nonatomic,retain) NSArray * searchResultItems;                                            //@synthesize searchResultItems=_searchResultItems - In the implementation block
-(id)searchResultsTable;
-(void)setSearchResultItems:(id)arg1 ;
-(id)searchResultItems;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
@end

