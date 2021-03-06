/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <backboardd/backboardd-Structs.h>
@class NSLock, NSMutableArray, BKOrientationClient, NSString;

@interface BKAccelerometerInterface : NSObject {

	NSLock* _lock;
	NSMutableArray* _accelerometerClients;
	BKOrientationClient* _orientationClient;
	double _samplingInterval;
	NSString* _deferredClientBundleIdentifier;
	/*^block*/ id _deferredRegistrationHandler;

}
+(id)sharedInstance;
+(void)initialize;
-(void)setOrientationEventsClient:(id)arg1 wantsOrientationEvents:(BOOL)arg2 rawEventSamplingInterval:(double)arg3 ;
-(void)clientRequestedAccelerometerEvents:(unsigned)arg1 updateInterval:(double)arg2 xThreshold:(float)arg3 yThreshold:(float)arg4 zThreshold:(float)arg5 auditToken:(SCD_Struct_BK5*)arg6 ;
-(unsigned)eventPortForOrientationEvents;
-(BOOL)orientationClientWantsOrientationEvents;
-(void)_workspaceClientRegistered:(id)arg1 ;
-(void)_invalidateDeferredRegistration;
-(void)_lock_setOrientationEventsClient:(id)arg1 wantsOrientationEvents:(BOOL)arg2 rawEventSamplingInterval:(double)arg3 ;
-(void)_clientInvalidated:(id)arg1 ;
-(void)accelerometerDataReceived:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 type:(unsigned)arg5 ;
-(void)dealloc;
-(id)init;
-(void)_updateSettings;
@end

