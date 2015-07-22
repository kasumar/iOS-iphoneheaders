/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@class NSArray, NSMutableIndexSet, NSString, NSIndexPath, BuddyAppleIDTableHeaderView;

@interface BuddyAppleIDFacetimeRegistrationPage : BuddyTableViewController <BuddyController> {

	id _delegate;
	NSArray* _candidateAliases;
	NSMutableIndexSet* _selectedIndexes;
	NSString* _footerString;
	NSIndexPath* _lastCheckedAlias;
	BuddyAppleIDTableHeaderView* _whatIsFooterView;

}

@property (nonatomic,copy) NSString * footerString;                 //@synthesize footerString=_footerString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
+(void)controllerBypassed;
-(void)_updateSelectedAliases;
-(void)startValidation;
-(void)stopValidation;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)titleText;
-(NSString *)footerString;
-(void)setFooterString:(NSString *)arg1 ;
-(void)controllerDone;
@end
