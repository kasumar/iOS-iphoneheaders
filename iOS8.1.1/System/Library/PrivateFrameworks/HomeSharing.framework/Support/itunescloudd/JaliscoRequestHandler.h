/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class JaliscoLibrary, NSObject, JaliscoMediaUpdateOperation, JaliscoArtworkImporter, NSOperationQueue, HSConnectionConfiguration, JaliscoUpdateGeniusDataOperation;

@interface JaliscoRequestHandler : NSObject {

	JaliscoLibrary* _library;
	NSObject*<OS_dispatch_queue> _updateLibraryQueue;
	NSObject*<OS_dispatch_group> _updateLibraryGroup;
	JaliscoMediaUpdateOperation* _updateLibraryOperation;
	JaliscoArtworkImporter* _artworkImporter;
	NSOperationQueue* _geniusUpdateOperationQueue;
	NSObject*<OS_dispatch_queue> _geniusUpdateQueue;
	NSObject*<OS_dispatch_group> _geniusUpdateGroup;
	HSConnectionConfiguration* _configuration;
	JaliscoUpdateGeniusDataOperation* _updateGeniusDataOperation;

}

@property (nonatomic,copy) HSConnectionConfiguration * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) JaliscoUpdateGeniusDataOperation * updateGeniusDataOperation;              //@synthesize updateGeniusDataOperation=_updateGeniusDataOperation - In the implementation block
+(id)handler;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)updateLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeLibraryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isUpdateInProgressWithIsInitialImport:(BOOL*)arg1 ;
-(void)loadArtworkForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelUpdateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)cancelPendingChanges;
-(void)sendAsynchronousRequest:(id)arg1 priority:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_libraryWithReason:(long long)arg1 ;
-(BOOL)aggregatePlayDataProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 forceCheck:(BOOL)arg3 ;
-(void)_updateGeniusDataForInitialImport:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(JaliscoUpdateGeniusDataOperation *)updateGeniusDataOperation;
-(void)accountDidChange;
-(void)setUpdateGeniusDataOperation:(JaliscoUpdateGeniusDataOperation *)arg1 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_init;
-(void)cancelAllOperations;
-(void)setConfiguration:(HSConnectionConfiguration *)arg1 ;
-(HSConnectionConfiguration *)configuration;
-(float)updateProgress;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_library;
@end
