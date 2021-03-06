/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSString, NSArray, NSMutableSet;

@interface RAPDebugNotificationsRequestViewController : UITableViewController {

	NSString* _countryCode;
	NSArray* _problemTypes;
	/*^block*/ id _completion;
	NSMutableSet* _selectedProblemTypes;

}
-(id)initWithCountryCode:(id)arg1 problemTypes:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_selectAllCellIndexPath;
-(id)_deselectAllCellIndexPath;
-(void)_takeProblemTypeStateFromSwitch:(id)arg1 ;
-(void)_invokeCompletionBlock;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void).cxx_destruct;
@end

