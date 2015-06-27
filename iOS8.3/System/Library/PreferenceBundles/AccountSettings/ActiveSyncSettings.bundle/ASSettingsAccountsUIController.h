/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:39:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>
#import <ActiveSyncSettings/DAAutoDiscoveryConsumer.h>

@class ASExchangeIdView;

@interface ASSettingsAccountsUIController : DASettingsAccountsUIController <DAAutoDiscoveryConsumer> {

	int _autodiscoveryState;
	unsigned _diagsVisibleValue;
	ASExchangeIdView* _exchangeIdView;

}

@property (assign,nonatomic) int autodiscoveryState;                         //@synthesize autodiscoveryState=_autodiscoveryState - In the implementation block
@property (assign,nonatomic) unsigned diagsVisibleValue;                     //@synthesize diagsVisibleValue=_diagsVisibleValue - In the implementation block
@property (nonatomic,retain) ASExchangeIdView * exchangeIdView;              //@synthesize exchangeIdView=_exchangeIdView - In the implementation block
+(char)isHotmailAccount;
-(void)viewWillAppear:(char)arg1 ;
-(void)setAutodiscoveryState:(int)arg1 ;
-(ASExchangeIdView *)exchangeIdView;
-(void)setExchangeIdView:(ASExchangeIdView *)arg1 ;
-(id)_specifiersForMinimalAutodiscovery;
-(id)_specifiersForOptionalServerAutodiscovery;
-(id)_specifiersForCompletedAutodiscovery;
-(id)localizedAccountTitleString;
-(void)_transitionToOptionalServerAutodiscovery;
-(void)_transitionToCompletedAutodiscovery;
-(char)autodiscoverAccount;
-(void)_tryUpdatingCompositeValueWithId:(id)arg1 fromValue:(id)arg2 forKey:(id)arg3 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(char)transitionsAfterInitialSetup;
-(id)_defaultAccountDescription;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(int)autodiscoveryState;
-(unsigned)diagsVisibleValue;
-(void)setDiagsVisibleValue:(unsigned)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(char)validateAccount;
-(char)haveEnoughValues;
-(void)doneButtonTapped:(id)arg1 ;
-(id)account;
-(id)accountSpecifiers;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(void)account:(id)arg1 wasAutoDiscovered:(char)arg2 error:(id)arg3 ;
@end
