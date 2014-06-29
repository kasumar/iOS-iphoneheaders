/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * error; 
@property (nonatomic,copy) NSURL * weatherLocationId; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)locationAddCompletedWithError:(id)arg1 ;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg1 ;
-(id)groupIdentifier;
-(void)setError:(id)arg1 ;
-(id)error;
-(id)encodedClassName;
-(id)initWithWeatherLocationId:(id)arg1 ;
-(void)setWeatherLocationId:(id)arg1 ;
-(id)weatherLocationId;
-(id)initWithError:(id)arg1 ;
@end
