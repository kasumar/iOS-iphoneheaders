/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKThreadDispatcher.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {

	NSObject<OS_dispatch_queue>* _queue;
	int _suspendCount;

}

@property (getter=isSuspended,readonly) bool suspended; 
+(id)sharedLowPriorityDispatcher;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(id)p_dispatchQueue;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(bool)isSuspended;
-(void)suspend;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)resume;
@end

