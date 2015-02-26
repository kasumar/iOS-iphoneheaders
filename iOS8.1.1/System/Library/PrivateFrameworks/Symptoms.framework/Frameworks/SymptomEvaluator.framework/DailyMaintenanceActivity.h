/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface DailyMaintenanceActivity : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _maintenanceBlocks;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (copy) id maintenanceBlocks;                              //@synthesize maintenanceBlocks=_maintenanceBlocks - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)scheduleNextRunOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleActivityRun;
-(id)maintenanceBlocks;
-(void)setMaintenanceBlocks:(id)arg1 ;
@end
