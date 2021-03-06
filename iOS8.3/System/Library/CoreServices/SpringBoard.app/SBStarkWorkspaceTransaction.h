/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@class SBStarkScreenController, SBAlertManager, NSString;

@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver> {

	SBStarkScreenController* _starkScreenController;
	SBAlertManager* _starkScreenAlertManager;
	SBAlertManager* _mainScreenAlertManager;

}

@property (nonatomic,retain,readonly) SBAlertManager * mainScreenAlertManager; 
@property (nonatomic,retain,readonly) SBStarkScreenController * starkScreenController; 
@property (nonatomic,retain,readonly) SBAlertManager * starkScreenAlertManager;                     //@synthesize starkScreenAlertManager=_starkScreenAlertManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 ;
-(SBStarkScreenController *)starkScreenController;
-(SBAlertManager *)starkScreenAlertManager;
-(SBAlertManager *)mainScreenAlertManager;
-(void)dealloc;
-(void)_didComplete;
@end

