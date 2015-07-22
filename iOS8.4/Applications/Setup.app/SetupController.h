/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Setup/EmergencyDialerDelegate.h>

@class UIWindow, UIView, UITapGestureRecognizer, NSMutableArray, BuddyLanguageController, PSListController, UIActionSheet, UINavigationController, NSString, iForgotView, NSTimer, PCPersistentTimer, UIAlertView, NSMutableDictionary, EmergencyDialer, NSMutableIndexSet, UIViewController;

@interface SetupController : NSObject <BuddyControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, EmergencyDialerDelegate> {

	UIWindow* _window;
	UIView* _windowView;
	UITapGestureRecognizer* _menuButtonRecognizer;
	NSMutableArray* _buddyControllers;
	BuddyLanguageController* _languageController;
	PSListController* _wifiController;
	char _wifiControllerInAdvancedMode;
	UIActionSheet* _menuButtonSheetWithStartOver;
	UIActionSheet* _menuButtonSheetNoStartOver;
	char _displayEmergencyDialer;
	UINavigationController* _nav;
	NSString* _languageAtStartup;
	char _shouldAnimateLanguageScreen;
	char _languageScreenHasUnlocked;
	char _shouldIgnoreiTunesLanguagePushOnResume;
	char _buddyUiFinished;
	char _buddyDone;
	char _languageAlertDelegateReady;
	char _earlyExitAllowed;
	char _wifiWillPush;
	iForgotView* _iForgotView;
	char _networkReachable;
	char _isConnectedOverWifi;
	char _supportsCellularActivation;
	char _supportsCellularActivationInitialized;
	NSTimer* _wifiTimeoutTimer;
	char _showingWifiTimeoutSpinner;
	char _appleIDConfigurationDownloadStarted;
	char _appleIDConfigurationDownloaded;
	char _appleIDServiceEnabled;
	char _appleIDWifiSkipAlertShown;
	char _appleIDConfigured;
	PCPersistentTimer* _inactivityTimer;
	UIAlertView* _wifiAlert;
	UIAlertView* _languageAlert;
	UIAlertView* _iPadHomeButtonAlertWithStartOver;
	UIAlertView* _iPadHomeButtonAlertNoStartOver;
	UIAlertView* _eraseAlert;
	UIAlertView* _badWifiAlert;
	int _systemTimeUpdateStatus;
	NSMutableArray* _controllersToRemove;
	NSMutableDictionary* _accountInfo;
	EmergencyDialer* _emergencyDialer;
	SBSAlertItemsSuppressionAssertionRef _sbAlertItemsSuppressionAssertion;
	char _inMiniBuddyFromBreadcrumb;
	char _startOverPermitted;
	char _shouldRereadCloudConfigurationForControllersToSkip;
	NSString* _iCloudAppleIdFromActivation;
	NSMutableIndexSet* _viewControllerIndexesToRemoveOnPush;
	UIViewController* _topViewControllerForRemovingIndexes;
	id _cloudConfigurationChangeNotificationObserver;

}

@property (nonatomic,copy) NSString * iCloudAppleIdFromActivation;                                 //@synthesize iCloudAppleIdFromActivation=_iCloudAppleIdFromActivation - In the implementation block
@property (assign,getter=isStartOverPermitted,nonatomic) char startOverPermitted;                  //@synthesize startOverPermitted=_startOverPermitted - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * viewControllerIndexesToRemoveOnPush;              //@synthesize viewControllerIndexesToRemoveOnPush=_viewControllerIndexesToRemoveOnPush - In the implementation block
@property (nonatomic,retain) UIViewController * topViewControllerForRemovingIndexes;               //@synthesize topViewControllerForRemovingIndexes=_topViewControllerForRemovingIndexes - In the implementation block
@property (assign,nonatomic) char shouldRereadCloudConfigurationForControllersToSkip;              //@synthesize shouldRereadCloudConfigurationForControllersToSkip=_shouldRereadCloudConfigurationForControllersToSkip - In the implementation block
@property (nonatomic,retain) id cloudConfigurationChangeNotificationObserver;                      //@synthesize cloudConfigurationChangeNotificationObserver=_cloudConfigurationChangeNotificationObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSetupController;
+(void)localeCheck:(double)arg1 ;
+(void)initialize;
-(void)resign;
-(void)dialerDidDismiss:(id)arg1 ;
-(void)setShouldRereadCloudConfigurationForControllersToSkip:(char)arg1 ;
-(void)setStartOverPermitted:(char)arg1 ;
-(void)_skipControllersSpecifiedByCloudConfigurationConfiguration;
-(char)_restoredFromBackup;
-(void)_inactivityTimerFired:(id)arg1 ;
-(void)stopInactivityTimer;
-(void)checkAndStartInactivityTimer;
-(void)setBuddyComplete:(char)arg1 ;
-(void)suspendApp;
-(char)_restoreFromBackupJustFinished;
-(char)_hasLocaleAndLanguage;
-(void)_refreshLanguage;
-(char)_isBackInBuddyAfterRestoreFromBackup:(char)arg1 ;
-(char)_isBackInBuddyForAppleID;
-(void)_showMiniAlert:(char)arg1 withLanguage:(id)arg2 ;
-(id)_controllerFollowingControllerClass:(Class)arg1 ;
-(id)_viewControllerForBuddyController:(id)arg1 ;
-(char)_isBackInBuddyForActivationOnly;
-(void)menuButtonPressed;
-(char)_restoredOrSetupIniTunes;
-(void)_createNavInAirplaneMode:(char)arg1 ;
-(void)updateLoadingStatus;
-(void)wifiBuddyButtonPressed;
-(void)wifiBuddyJoinFinished:(id)arg1 ;
-(void)batteryStateDidChange;
-(void)wifiNetworkJoinStarted:(id)arg1 ;
-(void)wifiNetworkJoinFailed:(id)arg1 ;
-(void)_clearWifiTimeoutTimer;
-(void)_resetWifiControllerTimeoutSpinner;
-(void)_wifiControllerReallyDone;
-(void)wifiTimeoutFired:(id)arg1 ;
-(void)_showNavBarSpinner;
-(void)_updateAirportNextButton;
-(void)_setSystemTime;
-(void)checkForUpdatedCarrierBundle;
-(id)topBuddyController;
-(char)deviceHasWiFi;
-(char)isStartOverPermitted;
-(void)_addSBAlertItemsSupressionAssertion;
-(void)_finishBuddy;
-(id)_newWifiControllerInstance;
-(void)_modalWifiControllerDone:(id)arg1 ;
-(void)resetBuddyPostActivation:(char)arg1 ;
-(void)_showModalWifiSettings;
-(void)_removeSBAlertItemsSupressionAssertion;
-(void)_animateControllerGroup;
-(id)controllerAtLocationServicesFlowPoint;
-(void)_buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 nextController:(id)arg3 ;
-(void)buddyControllerDone:(id)arg1 ;
-(void)_languageControllerAlertDone;
-(void)_pushBuddyController:(id)arg1 ;
-(id)_setupStateKey;
-(id)controllerAtCloudConfigFlowPoint;
-(id)controllerAtAppleIDChoiceFlowPoint;
-(id)controllerAtCloudConfigInstallationFlowPoint;
-(char)supportsCellularActivation;
-(void)_wifiControllerDone:(id)arg1 ;
-(char)suspendAppPostActivation;
-(NSMutableIndexSet *)viewControllerIndexesToRemoveOnPush;
-(void)setViewControllerIndexesToRemoveOnPush:(NSMutableIndexSet *)arg1 ;
-(void)setTopViewControllerForRemovingIndexes:(UIViewController *)arg1 ;
-(UIViewController *)topViewControllerForRemovingIndexes;
-(void)buddyWillFinish;
-(void)removeViewControllerFromNavHierarchy:(id)arg1 ;
-(void)_pushBuddyController:(id)arg1 withExtendedInitialization:(char)arg2 ;
-(char)isConnectedOverWiFi;
-(id)controllerAtActivationFlowPoint;
-(id)wifiController;
-(id)controllerAtDeviceRestoreFlowPoint;
-(char)shouldRereadCloudConfigurationForControllersToSkip;
-(void)_languageControllerDone;
-(id)_controllerForClass:(Class)arg1 ;
-(id)popToBuddyControllerWithClass:(Class)arg1 animated:(char)arg2 ;
-(void)_popToWifi;
-(void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 ;
-(void)countryScanUpdate;
-(void)showiForgot;
-(void)hideiForgot;
-(int)systemTimeUpdateStatus;
-(char)startedInFakeMode;
-(void)_setupSnapshotRemoved;
-(void)_activationStateChanged;
-(void)_registrationDataStatusChanged:(CFDictionaryRef)arg1 ;
-(void)removeViewControllerIndexesFromNavHierarchyOnNextPush:(id)arg1 ;
-(void)deviceRestoreChoiceControllerWantsWifiPicker;
-(void)activationControllerWantsWifiPicker;
-(void)appleIDChoiceControllerWantsModalWifiPicker;
-(void)setAppleIDConfigured;
-(void)disagreeToTerms;
-(NSString *)iCloudAppleIdFromActivation;
-(void)setICloudAppleIdFromActivation:(NSString *)arg1 ;
-(id)cloudConfigurationChangeNotificationObserver;
-(void)setCloudConfigurationChangeNotificationObserver:(id)arg1 ;
-(void)_localeChanged;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)run;
-(void)resume;
-(void)didPresentAlertView:(id)arg1 ;
-(char)networkReachable;
-(void)_setupStateChanged;
-(id)accountInfo;
-(void)didEnterBackground;
-(void)_reachabilityChanged:(id)arg1 ;
@end
