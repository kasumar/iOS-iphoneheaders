/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject, CFPDDataBuffer;

@interface CFPDSource : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CFPDDataBuffer* _plist;
	CFArrayRef _pendingChangesQueue;
	CFStringRef _userName;
	CFStringRef _domain;
	const char* _actualPath;
	const char* _pathToTemporaryFileToWriteTo;
	unsigned _lastEuid;
	unsigned _lastEgid;
	int _owner;
	short _generationShmemIndex;
	char _plistAccessingCount;
	unsigned _dirty : 1;
	unsigned _byHost : 1;
	unsigned _managed : 1;
	unsigned _neverCache : 1;
	unsigned _checkedForNonPrefsPlist : 1;
	unsigned _hasDrainedPendingChangesSinceLastReplyToOwner : 1;
	unsigned _restrictedReadability : 1;
	unsigned _waitingForDeviceUnlock : 1;

}
+(void)withSourceCache:(/*^block*/id)arg1 ;
+(void)synchronousWithSourceCache:(/*^block*/id)arg1 ;
+(void)withSourceForDomain:(CFStringRef)arg1 inContainer:(CFStringRef)arg2 user:(CFStringRef)arg3 byHost:(char)arg4 managed:(char)arg5 synchronously:(char)arg6 perform:(/*^block*/id)arg7 ;
-(void)writeToDisk:(char)arg1 ;
-(void)cacheActualPathCreatingIfNecessary:(char)arg1 euid:(unsigned)arg2 egid:(unsigned)arg3 ;
-(char)getUncanonicalizedPath:(char*)arg1 ;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 byHost:(char)arg3 managed:(char)arg4 shmemIndex:(short)arg5 ;
-(void)noteAccessed;
-(void)lockedAsync:(/*^block*/id)arg1 ;
-(void)lockedSync:(/*^block*/id)arg1 ;
-(char)hasEverHadMultipleOwners;
-(void)transitionToMultiOwner;
-(CFStringRef)debugDump;
-(void)updateShmemEntry;
-(void)beginAccessingPlist;
-(void)endAccessingPlist;
-(void)drainPendingChanges;
-(void)setDirty:(char)arg1 ;
-(void)cacheActualPath;
-(void)autosync:(char)arg1 ;
-(id)propertyListWithoutDrainingPendingChanges;
-(void)setPlist:(id)arg1 ;
-(id)propertyList;
-(char)validateSandboxForWrite:(id)arg1 containerPath:(const char*)arg2 targetingContainer:(char*)arg3 ;
-(char)validateReadAccessToken:(int)arg1 ;
-(char)validateSandboxForRead:(id)arg1 containerPath:(const char*)arg2 ;
-(void)cacheActualAndTemporaryPathsWithEUID:(unsigned)arg1 egid:(unsigned)arg2 ;
-(int)validateMessage:(id)arg1 withNewKey:(CFStringRef)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(void)enqueueNewKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(char)managed;
-(void)addOwner:(id)arg1 ;
-(void)removeOwner;
-(char)byHost;
-(short)shmemIndex;
-(id)acceptMessage:(id)arg1 ;
-(unsigned char)_backingPlistChangedSinceLastSync:(unsigned long long*)arg1 ;
-(char)clearCacheIfStale:(unsigned long long*)arg1 ;
-(char)acceptLocalMessage:(id)arg1 withReply:(CFDictionaryRef)arg2 inode:(unsigned long long*)arg3 ;
-(void)dealloc;
-(id)description;
-(CFStringRef)domain;
-(CFStringRef)container;
-(void)clearCache;
-(CFStringRef)user;
@end

