/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:16:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UsageSettings/NSURLConnectionDelegate.h>
#import <UsageSettings/DelayedPushDelegate.h>

@class DeviceIdentificationView, NSString, NSURL, SpinnerBezel, PreferencesRemoteUIDelegate, UIAlertView;

@interface RemoteBackupController : PSListController <NSURLConnectionDelegate, DelayedPushDelegate> {

	DeviceIdentificationView* _deviceIdentificationView;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSString* _backupSizeString;
	NSString* _lastBackupDateString;
	NSURL* _deletionURL;
	NSURL* _deviceImageURL;
	SpinnerBezel* _deletionBezel;
	PreferencesRemoteUIDelegate* _remoteDelegate;
	UIAlertView* _remoteBackupAlertView;

}

@property (nonatomic,retain) NSString * deviceName;                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * backupSizeString;                               //@synthesize backupSizeString=_backupSizeString - In the implementation block
@property (nonatomic,retain) NSString * lastBackupDateString;                           //@synthesize lastBackupDateString=_lastBackupDateString - In the implementation block
@property (nonatomic,retain) NSURL * deletionURL;                                       //@synthesize deletionURL=_deletionURL - In the implementation block
@property (nonatomic,retain) NSURL * deviceImageURL;                                    //@synthesize deviceImageURL=_deviceImageURL - In the implementation block
@property (nonatomic,retain) PreferencesRemoteUIDelegate * remoteDelegate;              //@synthesize remoteDelegate=_remoteDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specifier;
-(void)loadFailed:(id)arg1 withError:(id)arg2 ;
-(void)deleteBackupConfirmed;
-(NSString *)backupSizeString;
-(void)startDeletionBezel;
-(void)endDeletionBezel;
-(NSURL *)deviceImageURL;
-(void)setDeviceImageURL:(NSURL *)arg1 ;
-(void)loadPropertyValuesFromDictionary:(id)arg1 ;
-(void)setRemoteDelegate:(PreferencesRemoteUIDelegate *)arg1 ;
-(void)loadFinished:(id)arg1 ;
-(void)setLastBackupDateString:(NSString *)arg1 ;
-(void)setBackupSizeString:(NSString *)arg1 ;
-(NSString *)lastBackupDateString;
-(void)loadStarted:(id)arg1 ;
-(PreferencesRemoteUIDelegate *)remoteDelegate;
-(void)setDeletionURL:(NSURL *)arg1 ;
-(NSURL *)deletionURL;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)confirmDelete:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)specifiers;
-(char)needsToShowToolbarInPrefsAppRoot;
@end

