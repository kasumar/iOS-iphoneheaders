/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, PSAppCellularUsageGroupController, PSListItemsController, PSCellularAccountGroupController, CHManager;

@interface SettingsNetworkController : PSListController {

	PSSpecifier* _viewAccount;
	PSSpecifier* _viewAccountGroup;
	PSSpecifier* _facetimeSetupButton;
	PSSpecifier* _facetimeSetupGroup;
	char _disabled;
	PSSpecifier* _mobileDataGroup;
	PSSpecifier* _enableRATSpecifier;
	int _RATSwitchKind;
	char _3GOverrideTo4G;
	char _LTEOverrideTo4G;
	PSSpecifier* _currentSpecifier;
	PSSpecifier* _lifetimeSpecifier;
	PSSpecifier* _lastResetSpecifier;
	PSAppCellularUsageGroupController* _appUsageGroupController;
	PSListItemsController* _RATModeDrilldownController;
	char _isOnBootstrap;
	PSCellularAccountGroupController* _cellularGroupController;
	CHManager* _callHistoryManager;

}

@property (nonatomic,retain) PSCellularAccountGroupController * cellularGroupController;              //@synthesize cellularGroupController=_cellularGroupController - In the implementation block
@property (nonatomic,retain) CHManager * callHistoryManager;                                          //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
@property (assign,nonatomic) char isOnBootstrap;                                                      //@synthesize isOnBootstrap=_isOnBootstrap - In the implementation block
+(char)isConnectedOverWiFi;
+(char)isOnBootstrapProfile;
-(void)totalBytesUsedChangedNotification;
-(void)handleCallTimersChanged;
-(void)cellularPlanChanged;
-(void)setCellularGroupController:(PSCellularAccountGroupController *)arg1 ;
-(PSCellularAccountGroupController *)cellularGroupController;
-(void)setIsOnBootstrap:(char)arg1 ;
-(char)showDataPlanOnly;
-(void)updateRATStateWithDictionary:(id)arg1 ;
-(char)shouldShowLTEOptions;
-(char)shouldShowLegacyRATOptions;
-(char)_updateMobileDataGroupContentShowingRAT:(char)arg1 ;
-(char)shouldShowFaceTimeSetup;
-(char)shouldShowViewAccount;
-(void)_updateLastResetText;
-(char)isCellularDisabled;
-(void)updateAppUsageGroupEnabledState;
-(void)acceptedDataSwitch:(id)arg1 ;
-(void)canceledDataSwitch:(id)arg1 ;
-(void)_setMobileDataSwitch:(char)arg1 ;
-(void)updatePaneWithCellularDataState:(char)arg1 ;
-(char)shouldShowCellularAccountSetup;
-(void)updateRATSpecifiers;
-(id)isMobileDataEnabled:(id)arg1 ;
-(id)getRATModeState:(id)arg1 ;
-(char)supportsVoLTE;
-(void)_setRATModeStateIsOn:(char)arg1 ;
-(id)getRATSwitchIsOn:(id)arg1 ;
-(char)_setRATModeConfirmed:(int)arg1 ;
-(id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2 ;
-(void)acceptedRATSwitch:(id)arg1 ;
-(void)canceledRATSwitch:(id)arg1 ;
-(void)setRATModeState:(id)arg1 specifier:(id)arg2 ;
-(id)getLTEService:(id)arg1 ;
-(void)setLTEService:(id)arg1 specifier:(id)arg2 ;
-(void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2 ;
-(char)isOnBootstrap;
-(void)reloadRATStatus:(id)arg1 ;
-(CHManager *)callHistoryManager;
-(id)callTimeDurationRestrictedToCurrentPeriod:(char)arg1 ;
-(id)_lastUpdateDate;
-(void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)roamingSettingsDescription:(id)arg1 ;
-(id)getDataRoamingStatus:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getEUInternetStatus:(id)arg1 ;
-(void)setEUInternetCancelled:(id)arg1 ;
-(void)setEUInternetEnabledConfirmed:(id)arg1 ;
-(void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getCDMARoamingStatus:(id)arg1 ;
-(void)viewAccountPressed:(id)arg1 ;
-(void)setupCellularFaceTime:(id)arg1 ;
-(void)dataRegistrationChangedWithUserInfo:(id)arg1 ;
-(id)totalDataUsageForSpecifier:(id)arg1 ;
-(id)totalRoamingDataUsageForSpecifier:(id)arg1 ;
-(id)lifetimeCallTime:(id)arg1 ;
-(id)callTime:(id)arg1 ;
-(void)clearStats:(id)arg1 ;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(char)arg1 ;
-(void)airplaneModeOrSIMStatusChanged;
-(void)newCarrierNotification;
-(void)airplaneModeChanged;
-(id)specifiers;
-(id)controllerForSpecifier:(id)arg1 ;
-(id)dataUsageWorkspaceInfo;
@end

