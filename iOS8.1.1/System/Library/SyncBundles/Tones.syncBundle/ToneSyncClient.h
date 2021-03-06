/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SyncBundles/Tones.syncBundle/Tones
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Tones/ATClient.h>

@class TLToneManager, NSMutableArray, NSString;

@interface ToneSyncClient : NSObject <ATClient> {

	TLToneManager* _toneManager;
	NSMutableArray* _uploadAssets;

}

@property (setter=_setToneManager:,nonatomic,retain) TLToneManager * _toneManager;                 //@synthesize toneManager=_toneManager - In the implementation block
@property (setter=_setUploadAssets:,nonatomic,retain) NSMutableArray * _uploadAssets;              //@synthesize uploadAssets=_uploadAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_toneSyncPlistFolderPath;
+(id)_toneSyncAnchorFilePath;
+(id)_toneSyncMediaPath;
+(id)_syncPlistPaths;
-(void)_removeSyncPlists;
-(id)_toneMetadataFromSyncOperation:(id)arg1 pid:(id)arg2 valid:(BOOL*)arg3 ;
-(void)_setUploadAssets:(id)arg1 ;
-(NSMutableArray *)_uploadAssets;
-(id)_relativePathCorrespondingTo:(id)arg1 relativeTo:(id)arg2 ;
-(void)_processSyncOperation:(id)arg1 withToneManager:(id)arg2 ;
-(BOOL)installAsset:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(TLToneManager *)_toneManager;
-(void)dealloc;
-(id)init;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)currentSyncAnchor;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2 ;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(id)supportedDataclasses;
-(void)_setToneManager:(id)arg1 ;
@end

