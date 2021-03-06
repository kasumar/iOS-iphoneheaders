/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/IDSUTunTimingEvent.h>

@class NSString;

@interface IDSUTunTimingEventKernelTest : NSObject <IDSUTunTimingEvent> {

	double _timestamp;
	double _kernelTime;
	long long _bytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(void)appendToString:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 kernelTime:(double)arg2 bytes:(long long)arg3 ;
-(double)timestamp;
@end

