/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver.h>

@protocol BRCFileCoordinationReading, BRCFileCoordinationWriting;
@class NSString, NSMutableSet, BRCDatabaseManager, BRCContainerScheduler, BRCFSEventsMonitor, BRCFSReader, BRCFSWriter, BRCNotificationManager, BRCStageRegistry, BRCDiskSpaceReclaimer, CDSession, BRCThrottle, PQLConnection, BRCRelativePath;

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver> {

	NSString* _accountID;
	NSMutableSet* _xpcClients;
	int _cloudDocsFD;
	NSString* _appSupportDirPath;
	NSString* _cacheDirPath;
	NSString* _rootDirPath;
	NSString* _ubiquityTokenSalt;
	BRCDatabaseManager* _dbManager;
	BRCContainerScheduler* _containerScheduler;
	BRCFSEventsMonitor* _fsEventsMonitor;
	BRCFSReader*<BRCFileCoordinationReading> _fsReader;
	BRCFSWriter*<BRCFileCoordinationWriting> _fsWriter;
	BRCNotificationManager* _notificationManager;
	BRCStageRegistry* _stageRegistry;
	BRCDiskSpaceReclaimer* _diskReclaimer;
	CDSession* _coreDuetSession;
	BRCThrottle* _containerScanThrottle;
	BRCThrottle* _lostItemThrottle;
	BRCThrottle* _operationFailureThrottle;
	BRCThrottle* _syncAppContainerThrottle;

}

@property (nonatomic,retain) NSString * appSupportDirPath;                                     //@synthesize appSupportDirPath=_appSupportDirPath - In the implementation block
@property (nonatomic,retain) NSString * cacheDirPath;                                          //@synthesize cacheDirPath=_cacheDirPath - In the implementation block
@property (nonatomic,retain) NSString * rootDirPath;                                           //@synthesize rootDirPath=_rootDirPath - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                                           //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * ubiquityTokenSalt;                                   //@synthesize ubiquityTokenSalt=_ubiquityTokenSalt - In the implementation block
@property (nonatomic,readonly) BRCDatabaseManager * dbManager;                                 //@synthesize dbManager=_dbManager - In the implementation block
@property (nonatomic,readonly) BRCContainerScheduler * containerScheduler;                     //@synthesize containerScheduler=_containerScheduler - In the implementation block
@property (nonatomic,readonly) PQLConnection * clientTruthConnection; 
@property (nonatomic,readonly) PQLConnection * serverTruthConnection; 
@property (nonatomic,readonly) BRCFSEventsMonitor * fsEventsMonitor;                           //@synthesize fsEventsMonitor=_fsEventsMonitor - In the implementation block
@property (nonatomic,readonly) BRCFSReader*<BRCFileCoordinationReading> fsReader;              //@synthesize fsReader=_fsReader - In the implementation block
@property (nonatomic,readonly) BRCFSWriter*<BRCFileCoordinationWriting> fsWriter;              //@synthesize fsWriter=_fsWriter - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root; 
@property (nonatomic,readonly) BRCNotificationManager * notificationManager;                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) BRCStageRegistry * stageRegistry;                               //@synthesize stageRegistry=_stageRegistry - In the implementation block
@property (nonatomic,readonly) BRCDiskSpaceReclaimer * diskReclaimer;                          //@synthesize diskReclaimer=_diskReclaimer - In the implementation block
@property (nonatomic,readonly) CDSession * coreDuetSession;                                    //@synthesize coreDuetSession=_coreDuetSession - In the implementation block
@property (nonatomic,readonly) BRCThrottle * containerScanThrottle;                            //@synthesize containerScanThrottle=_containerScanThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * lostItemThrottle;                                 //@synthesize lostItemThrottle=_lostItemThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * operationFailureThrottle;                         //@synthesize operationFailureThrottle=_operationFailureThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottle * syncAppContainerThrottle;                         //@synthesize syncAppContainerThrottle=_syncAppContainerThrottle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(void)close;
-(BRCThrottle *)operationFailureThrottle;
-(BRCRelativePath *)root;
-(BRCContainerScheduler *)containerScheduler;
-(void)closeAndResetLocalState;
-(BRCStageRegistry *)stageRegistry;
-(BRCNotificationManager *)notificationManager;
-(PQLConnection *)clientTruthConnection;
-(PQLConnection *)serverTruthConnection;
-(NSString *)appSupportDirPath;
-(id)initWithAccountID:(id)arg1 salt:(id)arg2 ;
-(void)destroyLocalData;
-(NSString *)rootDirPath;
-(BRCDatabaseManager *)dbManager;
-(NSString *)ubiquityTokenSalt;
-(char)openWithError:(id*)arg1 ;
-(NSString *)accountID;
-(BRCFSEventsMonitor *)fsEventsMonitor;
-(NSString *)cacheDirPath;
-(BRCDiskSpaceReclaimer *)diskReclaimer;
-(void)setAppSupportDirPath:(NSString *)arg1 ;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(void)setRootDirPath:(NSString *)arg1 ;
-(BRCFSReader*<BRCFileCoordinationReading>)fsReader;
-(BRCFSWriter*<BRCFileCoordinationWriting>)fsWriter;
-(void)markAccountMigrationComplete;
-(BRCThrottle *)syncAppContainerThrottle;
-(CDSession *)coreDuetSession;
-(BRCThrottle *)containerScanThrottle;
-(BRCThrottle *)lostItemThrottle;
-(void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(char)arg2 ;
-(void)_setupThrottles;
-(void)cloudDocsAppsListDidChange:(id)arg1 ;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
@end
