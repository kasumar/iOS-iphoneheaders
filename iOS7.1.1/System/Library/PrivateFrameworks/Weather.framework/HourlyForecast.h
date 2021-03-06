/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface HourlyForecast : NSObject {

	float _percentPrecipitation;
	unsigned long long _eventType;
	NSString* _time;
	long long _hourIndex;
	NSString* _detail;
	long long _conditionCode;

}

@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * time;                             //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long hourIndex;                       //@synthesize hourIndex=_hourIndex - In the implementation block
@property (nonatomic,copy) NSString * detail;                           //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) long long conditionCode;                   //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) float percentPrecipitation;                //@synthesize percentPrecipitation=_percentPrecipitation - In the implementation block
-(unsigned long long)eventType;
-(void)dealloc;
-(id)description;
-(void)setDetail:(id)arg1 ;
-(void)setTime:(id)arg1 ;
-(id)time;
-(long long)conditionCode;
-(void)setConditionCode:(long long)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(long long)hourIndex;
-(void)setHourIndex:(long long)arg1 ;
-(float)percentPrecipitation;
-(void)setPercentPrecipitation:(float)arg1 ;
-(id)detail;
@end

