/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol Clock
@property (nonatomic,readonly) int runMode; 
@optional
-(double)updateInterval;
-(double)coarseUpdateInterval;
-(void)updateFlutter;
-(void)updateTimeContinuously:(long long)arg1;

@required
-(void)start;
-(void)stop;
-(int)runMode;
-(void)updateTime;

@end
