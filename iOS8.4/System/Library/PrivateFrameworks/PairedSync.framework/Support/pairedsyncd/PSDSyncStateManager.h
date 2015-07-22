/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, PSDDeviceSyncState;

@interface PSDSyncStateManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PSDDeviceSyncState* _lastKnownSyncState;
	PSDDeviceSyncState* _syncState;
	NSObject*<OS_xpc_object> _listener;

}
+(id)sharedSyncStateManager;
-(void)setSyncState:(id)arg1 ;
-(id)_syncState;
-(void)_loadPersistentSyncState;
-(void)setupListener;
-(void)handleXPCMessage:(id)arg1 ;
-(id)syncStatePersistentURL;
-(id)_loadLegacySyncState;
-(void)_setSyncState:(id)arg1 persist:(BOOL)arg2 ;
-(void)_postGlobalDeviceSyncState:(id)arg1 ;
-(id)init;
-(id)syncState;
-(void)unregisterForFirstKeybagUnlockNotification;
-(void)keybagStateChanged;
-(void)registerForFirstKeybagUnlockNotification;
@end
