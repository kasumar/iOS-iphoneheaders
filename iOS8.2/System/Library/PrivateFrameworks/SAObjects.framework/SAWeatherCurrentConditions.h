/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWeatherBarometricPressure, SAWeatherCondition, NSNumber, NSString, SAWeatherWindSpeed;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWeatherBarometricPressure * barometricPressure; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * dayOfWeek; 
@property (nonatomic,copy) NSString * dewPoint; 
@property (nonatomic,copy) NSString * heatIndex; 
@property (nonatomic,copy) NSString * moonPhase; 
@property (nonatomic,copy) NSString * percentHumidity; 
@property (nonatomic,copy) NSNumber * percentOfMoonFaceVisible; 
@property (nonatomic,copy) NSString * sunrise; 
@property (nonatomic,copy) NSString * sunset; 
@property (nonatomic,copy) NSString * temperature; 
@property (nonatomic,copy) NSString * timeOfObservation; 
@property (nonatomic,copy) NSString * timeZone; 
@property (nonatomic,copy) NSString * visibility; 
@property (nonatomic,copy) NSString * windChill; 
@property (nonatomic,retain) SAWeatherWindSpeed * windSpeed; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentConditions;
+(id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)dayOfWeek;
-(id)groupIdentifier;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(SAWeatherCondition *)condition;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
-(NSString *)sunrise;
-(NSString *)sunset;
-(id)encodedClassName;
-(SAWeatherBarometricPressure *)barometricPressure;
-(void)setBarometricPressure:(SAWeatherBarometricPressure *)arg1 ;
-(NSString *)dewPoint;
-(void)setDewPoint:(NSString *)arg1 ;
-(NSString *)heatIndex;
-(void)setHeatIndex:(NSString *)arg1 ;
-(NSString *)moonPhase;
-(void)setMoonPhase:(NSString *)arg1 ;
-(NSString *)percentHumidity;
-(void)setPercentHumidity:(NSString *)arg1 ;
-(NSNumber *)percentOfMoonFaceVisible;
-(void)setPercentOfMoonFaceVisible:(NSNumber *)arg1 ;
-(void)setSunrise:(NSString *)arg1 ;
-(void)setSunset:(NSString *)arg1 ;
-(NSString *)temperature;
-(void)setTemperature:(NSString *)arg1 ;
-(NSString *)timeOfObservation;
-(void)setTimeOfObservation:(NSString *)arg1 ;
-(NSString *)windChill;
-(void)setWindChill:(NSString *)arg1 ;
-(SAWeatherWindSpeed *)windSpeed;
-(void)setWindSpeed:(SAWeatherWindSpeed *)arg1 ;
-(NSString *)visibility;
-(void)setVisibility:(NSString *)arg1 ;
@end

