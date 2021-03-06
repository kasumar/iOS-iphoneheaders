/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SyncBundles/Apps.syncBundle/Apps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Apps/LSApplicationWorkspaceObserverProtocol.h>
#import <Apps/ATClient.h>

@protocol OS_dispatch_group;
@class NSArray, NSObject, NSMutableSet, NSOperationQueue, MBManager, NSString;

@interface AppsClient : NSObject <LSApplicationWorkspaceObserverProtocol, ATClient> {

	NSArray* _uninstalledApps;
	NSObject*<OS_dispatch_group> _installGroup;
	int _numAppInstallsAttempted;
	NSMutableSet* _outstandingAFCTransfers;
	NSOperationQueue* _restoreOperationQueue;
	NSOperationQueue* _installOperationQueue;
	MBManager* _backupManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_makeIconFromBundlePath:(id)arg1 saveTo:(id)arg2 ;
+(id)_orderTheItems:(id)arg1 ;
+(void)_notifySpringBoard:(BOOL)arg1 ;
+(id)_loadPlist:(id)arg1 withError:(id*)arg2 ;
-(void)_createPlaceHolderApplication:(id)arg1 ;
-(id)_progressForAssetIdentifier:(id)arg1 ;
-(void)_performAssetInstall:(id)arg1 ;
-(void)_changeAssetID:(id)arg1 toDo:(id)arg2 ;
-(id)_placeholderAppPathForBundleIdentifier:(id)arg1 ;
-(id)_restoreStatePropertyForKey:(id)arg1 identifier:(id)arg2 version:(id)arg3 ;
-(void)_cleanRestoreStateForIdentifier:(id)arg1 ;
-(int)_getAndResetNumAppInstallsAttempted;
-(void)_setRestoreStatePropertyValue:(id)arg1 forKey:(id)arg2 identifier:(id)arg3 version:(id)arg4 ;
-(void)_enqueueAssetInstall:(id)arg1 ;
-(id)_operationStateForIdentifier:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 updatedProgress:(double)arg2 ;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)assetInstallSucceeded:(id)arg1 ;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2 ;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)currentSyncAnchor;
-(BOOL)reconcileRestoreWithError:(id*)arg1 ;
-(id)appleIDsForAssets;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(id)installedAssets;
-(id)supportedDataclasses;
@end

