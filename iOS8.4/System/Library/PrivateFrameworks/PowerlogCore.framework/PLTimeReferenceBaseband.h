/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReferenceDynamic.h>

@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic {

	BOOL _followupCurrentTimeRunning;
	PLNSNotificationOperatorComposition* _basebandTimeNotification;

}

@property (retain) PLNSNotificationOperatorComposition * basebandTimeNotification;              //@synthesize basebandTimeNotification=_basebandTimeNotification - In the implementation block
@property (assign) BOOL followupCurrentTimeRunning;                                             //@synthesize followupCurrentTimeRunning=_followupCurrentTimeRunning - In the implementation block
-(void)dealloc;
-(id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3 ;
-(void)timeChangedNotificationReceived:(id)arg1 ;
-(id)currentBasebandTimeAndLatency;
-(BOOL)followupCurrentTimeRunning;
-(void)setFollowupCurrentTimeRunning:(BOOL)arg1 ;
-(void)registerForTimeChangedNotification;
-(PLNSNotificationOperatorComposition *)basebandTimeNotification;
-(void)setBasebandTimeNotification:(PLNSNotificationOperatorComposition *)arg1 ;
-(id)currentTime;
@end
