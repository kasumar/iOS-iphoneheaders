/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	BOOL usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	int lastReturnedError;

}

@property (nonatomic,readonly) BOOL usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(void)dealloc;
-(id)description;
-(int)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(int)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(id)initWithIPAsString:(id)arg1 usingWifi:(BOOL)arg2 ;
-(BOOL)usingWifi;
-(float)avg;
-(float)stddev;
-(BOOL)parsePingLineForBadInterface:(char*)arg1 ;
-(BOOL)parsePingLineForBadCommand:(char*)arg1 ;
-(BOOL)parsePingLineForPLR:(char*)arg1 ;
-(BOOL)parsePingLineForLatencyStats:(char*)arg1 ;
-(float)max;
-(float)min;
@end

