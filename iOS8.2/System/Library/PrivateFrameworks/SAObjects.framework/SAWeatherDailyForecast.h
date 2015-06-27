/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * highTemperature; 
@property (nonatomic,copy) NSNumber * lowTemperature; 
+(id)dailyForecast;
+(id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)highTemperature;
-(void)setHighTemperature:(NSNumber *)arg1 ;
-(NSNumber *)lowTemperature;
-(void)setLowTemperature:(NSNumber *)arg1 ;
@end
