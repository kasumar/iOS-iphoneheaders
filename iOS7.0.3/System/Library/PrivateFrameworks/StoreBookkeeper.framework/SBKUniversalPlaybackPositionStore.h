/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;
@class NSObject, SBKAsynchronousTask, SBKPlaybackPositionSyncRequestHandler, NSDate, NSTimer;

@interface SBKUniversalPlaybackPositionStore : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	BOOL _isActive;
	BOOL _hasLocalChangesToSync;
	unsigned _automaticSynchronizeOptions;
	double _initialAutosyncInterval;
	double _pollingLimitFromBag;
	double _autorefreshInterval;
	BOOL _refreshTimerActive;
	id _accountsObserver;
	id _prefsObserver;
	<SBKUniversalPlaybackPositionDataSource>* _dataSource;
	SBKAsynchronousTask* _synchronizeTask;
	SBKAsynchronousTask* _lookupDomainVersionTask;
	SBKAsynchronousTask* _bagLookupTask;
	SBKPlaybackPositionSyncRequestHandler* _syncHandler;
	NSDate* _dateToFireNextTimer;
	NSTimer* _timer;

}

@property (readonly) <SBKUniversalPlaybackPositionDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) unsigned automaticSynchronizeOptions; 
@property (assign) BOOL hasLocalChangesToSync; 
@property (retain) SBKAsynchronousTask * synchronizeTask;                                //@synthesize synchronizeTask=_synchronizeTask - In the implementation block
@property (retain) SBKAsynchronousTask * lookupDomainVersionTask;                        //@synthesize lookupDomainVersionTask=_lookupDomainVersionTask - In the implementation block
@property (retain) SBKAsynchronousTask * bagLookupTask;                                  //@synthesize bagLookupTask=_bagLookupTask - In the implementation block
@property (retain) SBKPlaybackPositionSyncRequestHandler * syncHandler;                  //@synthesize syncHandler=_syncHandler - In the implementation block
@property (retain) NSDate * dateToFireNextTimer;                                         //@synthesize dateToFireNextTimer=_dateToFireNextTimer - In the implementation block
@property (retain) NSTimer * timer;                                                      //@synthesize timer=_timer - In the implementation block
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
-(void)_timerFired:(id)arg1 ;
-(void)resignActive;
-(void)becomeActive;
-(void)synchronizeImmediatelyWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dataSource;
-(void)setTimer:(id)arg1 ;
-(id)timer;
-(void)setDateToFireNextTimer:(id)arg1 ;
-(void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1 ;
-(void)_onQueueLoadBagContextWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_updateForStoreAccountsChange;
-(id)initWithInitialUpdateDelay:(double)arg1 isActive:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 automaticSynchronizeOptions:(unsigned)arg2 isActive:(BOOL)arg3 ;
-(void)_onQueueStopTimer;
-(void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1 ;
-(id)bagLookupTask;
-(id)synchronizeTask;
-(id)lookupDomainVersionTask;
-(void)_onQueueSuspendTimer;
-(BOOL)_automaticallySynchronizeOnBecomeActive;
-(void)_onQueueResumeTimer;
-(void)_onQueueUpdateTimerForActiveChanges;
-(BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
-(void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
-(unsigned)automaticSynchronizeOptions;
-(void)setAutomaticSynchronizeOptions:(unsigned)arg1 ;
-(void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)_accountForSyncing;
-(void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_onQueueStartNewTimer;
-(double)_effectiveAutorefreshRate;
-(void)_updateSettingsFromLoadedBagContext:(id)arg1 ;
-(id)dateToFireNextTimer;
-(BOOL)_timerIsStopped;
-(void)_onQueueScheduleTimer;
-(void)deprecated_setDataSource:(id)arg1 ;
-(id)initWithInitialUpdateDelay:(double)arg1 allowAutorefresh:(BOOL)arg2 isActive:(BOOL)arg3 ;
-(id)initWithInitialUpdateDelay:(double)arg1 ;
-(void)setHasLocalChangesToSync:(BOOL)arg1 ;
-(BOOL)hasLocalChangesToSync;
-(void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1 ;
-(BOOL)automaticallySynchronizeLocalChangesOnResignActive;
-(void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1 ;
-(BOOL)automaticallySynchronizeOnBecomeActive;
-(void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)checkForAvailabilityWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)loadRemoteDomainVersionWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)loadSyncBagContextWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setSynchronizeTask:(id)arg1 ;
-(void)setLookupDomainVersionTask:(id)arg1 ;
-(void)setBagLookupTask:(id)arg1 ;
-(id)syncHandler;
-(void)setSyncHandler:(id)arg1 ;
-(void).cxx_destruct;
@end

