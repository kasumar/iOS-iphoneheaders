/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMNatalimeterInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	BOOL fStartedUpdates;
	BOOL fResendActivityOverrideOnInterrupt;
	long long fActivityOverride;

}
-(void)_setSession:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_handleQueryResponse:(CLConnectionMessage*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_teardown;
@end
