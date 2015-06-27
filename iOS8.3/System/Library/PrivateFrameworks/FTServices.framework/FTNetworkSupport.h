/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:37:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject {

	Class _APSConnectionClass;
	APSConnection* _apsConnection;
	NSTimer* _reliabilityAttemptTimer;
	char _enableCriticalReliability;
	char _criticalReliabilityEnabledState;

}

@property (nonatomic,readonly) char allowAnyNetwork; 
@property (nonatomic,readonly) char validNetworkEnabled; 
@property (nonatomic,readonly) char validNetworkActive; 
@property (nonatomic,readonly) char validNetworkReachable; 
@property (nonatomic,readonly) char wiFiActiveAndReachable; 
@property (nonatomic,readonly) char willSearchForNetwork; 
@property (nonatomic,readonly) char dataActiveAndReachable; 
@property (nonatomic,readonly) char networkEnabled; 
@property (nonatomic,readonly) char networkActive; 
@property (nonatomic,readonly) char networkReachable; 
@property (assign,nonatomic) char enableCriticalReliability; 
+(id)sharedInstance;
-(char)networkReachable;
-(char)networkActive;
-(char)networkEnabled;
-(void)_clearReliabilityTimeoutInterval;
-(void)_tryToEnableReliability;
-(void)_createAPSConnectionIfNeeded;
-(void)_reallySetCriticalReliability:(char)arg1 ;
-(void)_setReliabilityTimeoutInterval;
-(char)enableCriticalReliability;
-(char)allowAnyNetwork;
-(char)validNetworkEnabled;
-(char)validNetworkActive;
-(char)validNetworkReachable;
-(char)willSearchForNetwork;
-(char)dataActiveAndReachable;
-(void)setEnableCriticalReliability:(char)arg1 ;
-(char)wiFiActiveAndReachable;
@end
