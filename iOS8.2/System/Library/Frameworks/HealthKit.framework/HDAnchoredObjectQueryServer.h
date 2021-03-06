/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber;

@interface HDAnchoredObjectQueryServer : HDQueryServer {

	NSNumber* _anchor;
	unsigned _limit;

}

@property (nonatomic,readonly) NSNumber * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) unsigned limit;                 //@synthesize limit=_limit - In the implementation block
-(void)_deliverError:(id)arg1 ;
-(void)_deliverObjects:(id)arg1 anchor:(id)arg2 ;
-(void)_dataObjectsOfType:(id)arg1 sourceIdentifier:(id)arg2 sinceAnchor:(id)arg3 matchingFilter:(id)arg4 withLimit:(unsigned)arg5 completion:(/*^block*/id)arg6 ;
-(NSNumber *)anchor;
-(unsigned)limit;
-(void)_queue_start;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
@end

