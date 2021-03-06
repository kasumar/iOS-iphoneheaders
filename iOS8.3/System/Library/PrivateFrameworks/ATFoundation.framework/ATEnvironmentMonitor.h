/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:25:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ATFoundation/ATFoundation-Structs.h>
@class NSObject, NSHashTable;

@interface ATEnvironmentMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	unsigned _powerNotification;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	char _power;
	char _internetReachable;
	char _internetReachableViaOnlyWWAN;

}

@property (getter=hasPower,nonatomic,readonly) char power;                                                           //@synthesize power=_power - In the implementation block
@property (getter=isInternetReachable,nonatomic,readonly) char internetReachable;                                    //@synthesize internetReachable=_internetReachable - In the implementation block
@property (getter=isInternetReachableViaOnlyWWAN,nonatomic,readonly) char internetReachableViaOnlyWWAN;              //@synthesize internetReachableViaOnlyWWAN=_internetReachableViaOnlyWWAN - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(void)start;
-(void)addObserver:(id)arg1 ;
-(char)isInternetReachable;
-(char)isInternetReachableViaOnlyWWAN;
-(char)hasPower;
@end

