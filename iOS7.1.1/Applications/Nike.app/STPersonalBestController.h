/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STSummaryController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIActionSheet;

@interface STPersonalBestController : STSummaryController <UIActionSheetDelegate> {

	UIActionSheet* _clearSheet;

}
+(id)displayedAchievements;
-(id)initWithSummaryItems:(id)arg1 ;
-(void)_clearPersonalBestsWithConfirmation;
-(void)_clearPersonalBests;
-(void)layoutSummaryItems;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

